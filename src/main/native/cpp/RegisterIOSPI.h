/*
 * RegisterIOSPI.h
 *
 *  Created on: Jul 29, 2015
 *      Author: Scott
 */

#ifndef NAVX_FRC_SRC_MAIN_NATIVE_CPP_REGISTERIOSPI_H_
#define NAVX_FRC_SRC_MAIN_NATIVE_CPP_REGISTERIOSPI_H_

#include <frc/SPI.h>

#include "RegisterIO.h"

static const int MAX_SPI_MSG_LENGTH = 256;

class RegisterIO_SPI : public IRegisterIO {
 public:
  RegisterIO_SPI(frc::SPI* port, uint32_t bitrate);
  virtual ~RegisterIO_SPI() {}
  bool Init();
  bool Write(uint8_t address, uint8_t value);
  bool Read(uint8_t first_address, uint8_t* buffer, uint8_t buffer_len);
  bool Shutdown();
  void EnableLogging(bool enable);

 private:
  frc::SPI* port;
  uint32_t bitrate;
  uint8_t rx_buffer[MAX_SPI_MSG_LENGTH];
  bool trace;
  int successive_error_count;
};

#endif  // NAVX_FRC_SRC_MAIN_NATIVE_CPP_REGISTERIOSPI_H_
