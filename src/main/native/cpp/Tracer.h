#ifndef NAVX_FRC_SRC_MAIN_NATIVE_CPP_TRACER_H_
#define NAVX_FRC_SRC_MAIN_NATIVE_CPP_TRACER_H_

#define TRACE_BUFFER_LEN 4096

class Tracer {
 private:
  static char lastMsg[TRACE_BUFFER_LEN];
  static double lastMsgTimestamp;

 public:
  static void Trace(const char* pMsg, ...);
};

#endif  // NAVX_FRC_SRC_MAIN_NATIVE_CPP_TRACER_H_
