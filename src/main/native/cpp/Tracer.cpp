#include "Tracer.h"

#include <frc/Timer.h>
#include <units/base.h>
#include <units/time.h>

#include <cstdarg>
#include <cstdio>
#include <string.h>

using units::unit_cast;
using namespace frc;

char Tracer::lastMsg[TRACE_BUFFER_LEN] = {0};
double Tracer::lastMsgTimestamp = 0.0;

const double minDelta = 0.5;

void Tracer::Trace(const char *pMsg, ...)
{
    char buffer[TRACE_BUFFER_LEN];
    std::va_list arg;

    double msgTimestamp = unit_cast<double>(Timer::GetFPGATimestamp());
    double delta = msgTimestamp - lastMsgTimestamp;

    va_start(arg, pMsg);
    std::vsnprintf(buffer, TRACE_BUFFER_LEN, pMsg, arg);
    if ((strcmp(buffer, Tracer::lastMsg) != 0) ||
        (delta >= minDelta))
    {
        printf("%s", buffer);
        size_t len = strlen(buffer);
        // Truncate string if longer than last message buffer
        if (len > (TRACE_BUFFER_LEN - 1))
        {
            len = TRACE_BUFFER_LEN - 1;
        }
        memcpy(Tracer::lastMsg, buffer, len);
        Tracer::lastMsg[len] = 0;
        lastMsgTimestamp = msgTimestamp;
    }

    va_end(arg);
}
