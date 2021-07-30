#ifndef __OUTPWM_H__
#define __OUTPWM_H__
#include<avr/io.h>
/**
*@brief Function definition
*
*@param temp_value
*/
char OutPWM(uint16_t temp_value);
void InitPWN(void);
#endif
