/*
 * WDT_interface.h
 *
 *  Created on: Nov 19, 2022
 *      Author: MSAEED99
 */

#ifndef WDT_INTERFACE_H_
#define WDT_INTERFACE_H_


// Enable Watch Dog Timer: Start counting till timeout (reset MCU)
void WDT_voidEnable(void);

// Disable Watch Dog Timer: Stop counting time.
void WDT_voidDisable(void);

// Sleep function (timeout)
void WDT_voidSleep(u8 copy_u8SleepTime);



#endif /* WDT_INTERFACE_H_ */
