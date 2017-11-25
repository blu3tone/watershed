/** @file logo.h
* @author Dua Nguyen
*
* @brief lOGO URL: https://cdn.expertise.com/logos/The%20Watershed%20Company.jpg
*
* @par convert to bitmap by LCDAssistant URL:http://lcd-assistant.software.informer.com/
* @date     Oct. 2017
* @date modified 2017/10/13
* @version 1.0.0
* COPYRIGHT NOTICE:
* All rights reserved.
*/
#ifndef LIB_LCD_LOGO_H_
#define LIB_LCD_LOGO_H_
uint8_t watershed_logo_data[]= {
    0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8,
    0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8,
    0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x18, 0x08, 0x08, 0x08, 0xF8, 0xF8, 0x08, 0x08, 0x08,
    0x18, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0xE0,
    0xE0, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x40, 0x00, 0x00,
    0x00, 0x00, 0x40, 0x7F, 0x7F, 0x42, 0x02, 0x02, 0x02, 0x42, 0x7F, 0x7F, 0x40, 0x00, 0x40, 0x7F,
    0x7F, 0x42, 0x42, 0x46, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x08, 0x78, 0xF8, 0xC8, 0x00, 0x00, 0x00, 0xE0, 0xF8,
    0xF0, 0x80, 0x00, 0x00, 0x08, 0xF8, 0x38, 0x08, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x60,
    0x60, 0x20, 0x20, 0xE0, 0x20, 0x20, 0x60, 0x60, 0x00, 0x20, 0xE0, 0xE0, 0x20, 0x20, 0x60, 0x00,
    0x00, 0x20, 0xE0, 0xE0, 0x20, 0x20, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x80, 0xE0, 0x20, 0x20, 0x20,
    0x60, 0x00, 0x00, 0x20, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x20,
    0xE0, 0xE0, 0x20, 0x20, 0x60, 0x00, 0x20, 0xE0, 0xE0, 0xE0, 0x20, 0x20, 0x60, 0x60, 0xC0, 0xC0,
    0x00, 0x00, 0x00, 0x1B, 0x39, 0x30, 0x70, 0x60, 0xE0, 0xC0, 0x80, 0x80, 0x01, 0x01, 0x03, 0x07,
    0x07, 0x07, 0x0F, 0x0F, 0x0F, 0x0F, 0x8F, 0x8F, 0xCF, 0xEF, 0x7F, 0x3F, 0x1F, 0x0F, 0x0F, 0x07,
    0x07, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1F, 0xFC, 0x78, 0x0F, 0x03, 0x00,
    0x03, 0x1F, 0xFC, 0x78, 0x0F, 0x01, 0xC0, 0xE0, 0xFC, 0x0F, 0x09, 0x0B, 0x1F, 0x7C, 0xE0, 0xC0,
    0x00, 0x00, 0xF0, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xC6, 0xC6, 0xC6, 0x40,
    0x00, 0x00, 0xFF, 0xFF, 0x84, 0x0C, 0x1E, 0x3B, 0x60, 0xC0, 0xC0, 0x60, 0xC3, 0xC7, 0xC6, 0xCC,
    0x7C, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0x86, 0x06, 0x06, 0x06, 0xFF, 0xFF, 0xF8, 0x80, 0x00, 0xC0,
    0xFF, 0xFF, 0xC6, 0xC6, 0xE6, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xC0, 0xC0, 0xC0, 0x40, 0x60, 0x3F,
    0x00, 0x00, 0x00, 0xFE, 0xFC, 0xF0, 0xE0, 0x80, 0x80, 0x01, 0x03, 0x03, 0x07, 0x0F, 0x0E, 0x1E,
    0x1E, 0x3E, 0x3E, 0x36, 0x37, 0x33, 0x33, 0x31, 0x31, 0xB0, 0xF0, 0xF8, 0xF8, 0xF8, 0xFC, 0xFC,
    0xFE, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0x30, 0x10, 0x10, 0x10, 0x10, 0x10,
    0x10, 0x30, 0x10, 0x00, 0x00, 0x80, 0x40, 0x40, 0x20, 0x20, 0x60, 0x40, 0xC0, 0x80, 0x00, 0x00,
    0x00, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0,
    0x00, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xC0, 0x00, 0x00, 0x40, 0xC0, 0x80, 0x00, 0x00,
    0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xFC, 0xFC, 0xF8, 0xF8,
    0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xFC, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x3F, 0x60, 0xC0, 0xC0, 0x80, 0x80, 0x80,
    0x80, 0xC0, 0x00, 0x00, 0x3F, 0x79, 0x40, 0xC0, 0x80, 0x80, 0x80, 0x40, 0x61, 0x3F, 0x0E, 0x80,
    0xFE, 0x83, 0x07, 0x1E, 0x78, 0xE0, 0x38, 0x0E, 0x03, 0x7F, 0xFE, 0x80, 0x00, 0x00, 0xFF, 0xFF,
    0x80, 0x00, 0x04, 0x03, 0x81, 0xE0, 0xF8, 0x0F, 0x09, 0x0B, 0x1F, 0xF8, 0xE0, 0x80, 0x80, 0x80,
    0xFF, 0x81, 0x03, 0x06, 0x0C, 0x18, 0x30, 0x70, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFE, 0xFC,
    0x86, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
#endif /* LIB_LCD_LOGO_H_ */
