/***************************************************************************************************
 *	        Include section					                       		   					       *
 ***************************************************************************************************/
#include "aes.h"
#include "system.h"

/***************************************************************************************************
 *	        Define section					                       		   					       *
 ***************************************************************************************************/


/***************************************************************************************************
 *	        Prototype section					                       							   *
 ***************************************************************************************************/


/***************************************************************************************************
 *	        Global Variable section  				                            				   *
 ***************************************************************************************************/
uint8 encryption_key[] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
                          0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f};


// *************************************************************************************************
// @fn          Payload_Encrypt
// @brief       Encrypt payload with 128-bit AES
// @param       uint8 msg[]				Message to be encrypted
// @return		uint8 EXIT_NO_ERROR
// *************************************************************************************************
uint8 Payload_Encrypt(uint8 *msg) {
	aes_encrypt(msg, encryption_key);
	return EXIT_NO_ERROR;
}


// *************************************************************************************************
// @fn          Payload_Decrypt
// @brief       Decrypt payload with 128-bit AES
// @param       uint8 msg[]				Message to be encrypted
// @return		uint8 EXIT_NO_ERROR
// *************************************************************************************************
uint8 Payload_Decrypt(uint8 *msg) {
	aes_decrypt(msg, encryption_key);
	return EXIT_NO_ERROR;
}


