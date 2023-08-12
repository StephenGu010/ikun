//////////////////////////////////////////////////////////////////////////////////   
//
//  文 件 名   : main.c
//  版 本 号   : v2.0
//  作    者   : Stephen Gu
//  生成日期   : 2023-8-12
//  最近修改   : 
//  功能描述   :演示例程(ESP32系列)
//              说明: 
//              ----------------------------------------------------------------
//              GND   电源地
//              VCC   3.3v电源
//              scl   23
//              sda   19
//              res   25
//              dc    26
//              cs    27
//              blk   9
//******************************************************************************/
#include "OLED.h"
#include "bmp.h"
#define fps 150
void setup()
{
  u8 i;
  OLED_Init();
  Serial.begin(115200); 
  while(1)
  {
    // OLED_ShowPicture(30,0,64,58,BMP2,1);
    // OLED_Refresh();
    // delay(1000);
    // OLED_Clear();
   // OLED_Refresh();
    //delay(500);
    //OLED_Clear();
    OLED_ShowPicture(30,0,64,58,BMP1,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP2,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP3,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP4,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP5,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP6,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP7,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP6,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP7,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP8,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP9,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP10,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP11,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP12,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP13,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP14,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP15,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP16,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP17,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP18,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP19,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP20,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP21,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP22,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP23,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP24,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP25,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP26,1);
		OLED_Refresh();
		delay(fps);
		OLED_ShowPicture(30,0,64,58,BMP27,1);
		OLED_Refresh();
		delay(fps);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
