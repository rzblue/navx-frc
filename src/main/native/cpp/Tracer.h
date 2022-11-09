#ifndef SRC_TRACER_H_
#define SRC_TRACER_H_

#define TRACE_BUFFER_LEN 4096

class Tracer
{
private:
    static char lastMsg[TRACE_BUFFER_LEN];
    static double lastMsgTimestamp;

public:
    static void Trace(const char *pMsg, ...);
};

#endif /* SRC_TRACER_H_ */