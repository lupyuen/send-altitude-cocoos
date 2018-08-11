#ifndef WISOL_H_
#define WISOL_H_

#ifdef __cplusplus
extern "C" {  //  Allows functions below to be called by C and C++ code.
#endif

//  According to regulation, messages should be sent only every 10 minutes.
const unsigned long SEND_DELAY = (unsigned long) 10 * 60 * 1000;
const unsigned int MAX_BYTES_PER_MESSAGE = 12;  //  Only 12 bytes per message.
const unsigned int COMMAND_TIMEOUT = 1000;  //  Wait up to 1 second for response from SIGFOX module.

//  Define the countries that are supported.
enum Country {
  COUNTRY_AU = 'A'+('U' << 8),  //  Australia: RCZ4
  COUNTRY_BR = 'B'+('R' << 8),  //  Brazil: RCZ4
  COUNTRY_FR = 'F'+('R' << 8),  //  France: RCZ1
  COUNTRY_JP = 'J'+('P' << 8),  //  Japan: RCZ3
  COUNTRY_OM = 'O'+('M' << 8),  //  Oman: RCZ1
  COUNTRY_NZ = 'N'+('Z' << 8),  //  New Zealand: RCZ4
  COUNTRY_SA = 'S'+('A' << 8),  //  South Africa: RCZ1
  COUNTRY_SG = 'S'+('G' << 8),  //  Singapore: RCZ4
  COUNTRY_US = 'U'+('S' << 8),  //  USA: RCZ2
  COUNTRY_TW = 'T'+('W' << 8),  //  Taiwan: RCZ4
};

#ifdef __cplusplus
}  //  End of extern C scope.
#endif
#endif  //  WISOL_H_