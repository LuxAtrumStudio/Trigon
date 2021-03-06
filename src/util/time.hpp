#ifndef SPECULA_TIME_HPP_
#define SPECULA_TIME_HPP_

#include <chrono>

namespace timer {
  std::chrono::time_point<std::chrono::high_resolution_clock> start();
  double stop(const std::chrono::time_point<std::chrono::high_resolution_clock>&
                  start_time_point);
  void start(const short unsigned& id);
  double stop(const short unsigned& id);
  extern std::chrono::time_point<std::chrono::high_resolution_clock> timers_[8];
}  // namespace timer

#endif  // SPECULA_TIME_HPP_
