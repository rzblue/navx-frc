/*
 * IBoardCapabilities.h
 *
 *  Created on: Jul 29, 2015
 *      Author: Scott
 */

#ifndef NAVX_FRC_SRC_MAIN_NATIVE_CPP_IBOARDCAPABILITIES_H_
#define NAVX_FRC_SRC_MAIN_NATIVE_CPP_IBOARDCAPABILITIES_H_

class IBoardCapabilities {
 public:
  IBoardCapabilities() {}
  virtual bool IsOmniMountSupported() = 0;
  virtual bool IsBoardYawResetSupported() = 0;
  virtual bool IsDisplacementSupported() = 0;
  virtual bool IsAHRSPosTimestampSupported() = 0;
};

#endif  // NAVX_FRC_SRC_MAIN_NATIVE_CPP_IBOARDCAPABILITIES_H_
