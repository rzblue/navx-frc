/*
 * IIOCompleteNotification.h
 *
 *  Created on: Jul 29, 2015
 *      Author: Scott
 */

#ifndef NAVX_FRC_SRC_MAIN_NATIVE_CPP_IIOCOMPLETENOTIFICATION_H_
#define NAVX_FRC_SRC_MAIN_NATIVE_CPP_IIOCOMPLETENOTIFICATION_H_

#include <stdint.h>

#include "AHRSProtocol.h"
#include "IMUProtocol.h"

class IIOCompleteNotification {
 public:
  IIOCompleteNotification() {}
  struct BoardState {
    uint8_t op_status;
    int16_t sensor_status;
    uint8_t cal_status;
    uint8_t selftest_status;
    int16_t capability_flags;
    uint8_t update_rate_hz;
    int16_t accel_fsr_g;
    int16_t gyro_fsr_dps;
  };
  virtual void SetYawPitchRoll(IMUProtocol::YPRUpdate& ypr_update,
                               long sensor_timestamp) = 0;
  virtual void SetAHRSData(AHRSProtocol::AHRSUpdate& ahrs_update,
                           long sensor_timestamp) = 0;
  virtual void SetAHRSPosData(AHRSProtocol::AHRSPosUpdate& ahrs_update,
                              long sensor_timestamp) = 0;
  virtual void SetRawData(IMUProtocol::GyroUpdate& raw_data_update,
                          long sensor_timestamp) = 0;
  virtual void SetBoardID(AHRSProtocol::BoardID& board_id) = 0;
  virtual void SetBoardState(BoardState& board_state,
                             bool update_board_status) = 0;
  virtual void YawResetComplete() = 0;
  virtual void DisconnectDetected() = 0;
  virtual void ConnectDetected() = 0;
};

#endif  // NAVX_FRC_SRC_MAIN_NATIVE_CPP_IIOCOMPLETENOTIFICATION_H_
