#pragma once

#include <chrono>
#include <iostream>
#include <thread>

inline void delayMillis(int ms) {
  std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}
