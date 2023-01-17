/*
 * IRegisterIO.h
 *
 *  Created on: Jul 29, 2015
 *      Author: Scott
 */

#ifndef NAVX_FRC_SRC_MAIN_NATIVE_CPP_IREGISTERIO_H_
#define NAVX_FRC_SRC_MAIN_NATIVE_CPP_IREGISTERIO_H_

#include <stdint.h>

class IRegisterIO {
 public:
  IRegisterIO() {}
  virtual bool Init() = 0;
  virtual bool Write(uint8_t address, uint8_t value) = 0;
  virtual bool Read(uint8_t first_address, uint8_t* buffer,
                    uint8_t buffer_len) = 0;
  virtual bool Shutdown() = 0;
  virtual void EnableLogging(bool enable) = 0;
};

#endif  // NAVX_FRC_SRC_MAIN_NATIVE_CPP_IREGISTERIO_H_
