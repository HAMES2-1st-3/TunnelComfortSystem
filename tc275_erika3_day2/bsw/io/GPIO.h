#ifndef BSW_IO_GPIO_H_
#define BSW_IO_GPIO_H_

#include <tc27xd/Ifx_reg.h>

void Init_GPIO(void);

void setLED1(int onoff);
void setLED2(int onoff);
void toggleLED1(void);
void toggleLED2(void);

int getSW1(void);
int getSW2(void);
int getSW1_Debounce(void);
int getSW2_Debounce(void);

void init_lcd(void);
void write_instruction(unsigned char i);
void write_data(char d);
void delay_us(unsigned int m);
void delay_mss(unsigned int m);

#endif /* BSW_IO_GPIO_H_ */
