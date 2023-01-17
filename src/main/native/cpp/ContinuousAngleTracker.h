/*
 * ContinuousAngleTracker.h
 *
 *  Created on: Jul 30, 2015
 *      Author: Scott
 */

#ifndef NAVX_FRC_SRC_MAIN_NATIVE_CPP_CONTINUOUSANGLETRACKER_H_
#define NAVX_FRC_SRC_MAIN_NATIVE_CPP_CONTINUOUSANGLETRACKER_H_

#include <wpi/priority_mutex.h>

class ContinuousAngleTracker {
 private:
  bool fFirstUse;
  double gyro_prevVal;
  int ctrRollOver;
  float curr_yaw_angle;
  float last_yaw_angle;
  double angleAdjust;
  std::mutex tracker_mutex;

 public:
  ContinuousAngleTracker();
  void Init();
  void Reset();
  void NextAngle(float newAngle);
  double GetAngle();
  double GetRate();
  void SetAngleAdjustment(double adjustment);
  double GetAngleAdjustment();
};

#endif  // NAVX_FRC_SRC_MAIN_NATIVE_CPP_CONTINUOUSANGLETRACKER_H_
