/*
 * WDT_register.h
 *
 *  Created on: Nov 19, 2022
 *      Author: MSAEED99
 */

#ifndef WDT_REGISTER_H_
#define WDT_REGISTER_H_


// Watch dog Timer Control Register – WDTCR
#define WDTCR			*((volatile u8*)0x41)
#define WDTCR_WDTOE		4
#define WDTCR_WDE		3
#define WDTCR_WDP2		2
#define WDTCR_WDP1		1
#define WDTCR_WDP0		0




#endif /* WDT_REGISTER_H_ */
