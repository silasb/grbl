#ifndef _AVR_SPECIFICS_H_
#define _AVR_SPECIFICS_H_

// Delays variable-defined milliseconds. Compiler compatibility fix for _delay_ms().
void delay_ms(uint16_t ms);

// Delays variable-defined microseconds. Compiler compatibility fix for _delay_us().
void delay_us(uint32_t us);

#endif