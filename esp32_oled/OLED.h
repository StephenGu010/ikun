#ifndef _OLED_H_
#define _OLED_H_
#include "Arduino.h"

#define u8 uint8_t
#define u16 uint16_t
#define u32 uint32_t

#define scl 23
#define sda 19
#define res  25
#define dc   26
#define cs   27

#define USE_HORIZONTAL 0  //设置显示方向 0：正向显示；1：旋转180度显示

#define OLED_SCL_Clr() digitalWrite(scl,LOW)
#define OLED_SCL_Set() digitalWrite(scl,HIGH)

#define OLED_SDA_Clr() digitalWrite(sda,LOW)
#define OLED_SDA_Set() digitalWrite(sda,HIGH)

#define OLED_RST_Clr() digitalWrite(res,LOW)
#define OLED_RST_Set() digitalWrite(res,HIGH)

#define OLED_DC_Clr() digitalWrite(dc,LOW)
#define OLED_DC_Set() digitalWrite(dc,HIGH)

#define OLED_CS_Clr() digitalWrite(cs,LOW)
#define OLED_CS_Set() digitalWrite(cs,HIGH)

#define OLED_CMD  0  //写命令
#define OLED_DATA 1 //写数据

void OLED_ClearPoint(u8 x,u8 y);
void OLED_ColorTurn(u8 i);
void OLED_WR_Byte(u8 dat,u8 mode1);
void OLED_DisPlay_On(void);
void OLED_DisPlay_Off(void);
void OLED_Refresh(void);
void OLED_Clear(void);
void OLED_DrawPoint(u8 x,u8 y,u8 t);
void OLED_DrawLine(u8 x1,u8 y1,u8 x2,u8 y2,u8 mode1);
void OLED_DrawCircle(u8 x,u8 y,u8 r);
void OLED_ShowChar(u8 x,u8 y,u8 chr,u8 size1,u8 mode1);
void OLED_ShowChar6x8(u8 x,u8 y,u8 chr,u8 mode1);
void OLED_ShowString(u8 x,u8 y,const char *chr,u8 size1,u8 mode1);
void OLED_ShowNum(u8 x,u8 y,u32 num,u8 len,u8 size1,u8 mode1);
void OLED_ShowChinese(u8 x,u8 y,u8 num,u8 size1,u8 mode1);
void OLED_ScrollDisplay(u8 num,u8 space,u8 mode1);
void OLED_ShowPicture(u8 x,u8 y,u8 sizex,u8 sizey,const u8 BMP[],u8 mode1);
void OLED_Init(void);

#endif
