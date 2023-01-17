/*
 * RegisterIOI2C.h
 *
 *  Created on: Jul 29, 2015
 *      Author: Scott
 */

#ifndef NAVX_FRC_SRC_MAIN_NATIVE_CPP_REGISTERIOI2C_H_
#define NAVX_FRC_SRC_MAIN_NATIVE_CPP_REGISTERIOI2C_H_

#include <frc/I2C.h>

#include "RegisterIO.h"

class RegisterIO_I2C : public IRegisterIO {
 public:
  RegisterIO_I2C(frc::I2C* port);
  virtual ~RegisterIO_I2C() {}
  bool Init();
  bool Write(uint8_t address, uint8_t value);
  bool Read(uint8_t first_address, uint8_t* buffer, uint8_t buffer_len);
  bool Shutdown();
  void EnableLogging(bool enable);

 private:
  frc::I2C* port;
  bool trace;
  int successive_error_count;
};

#endif  // NAVX_FRC_SRC_MAIN_NATIVE_CPP_REGISTERIOI2C_H_
