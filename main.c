#include <regx52.h>
#include "lcd1602.h"
#include "matrixkey.h"

unsigned int password=0;
unsigned char count=0;
unsigned char num;
void main()
{
	LCD_Init();
	LCD_ShowString(1,1,"password:");
	while(1)
	{
		num=matrixkey();
		if(num)//如果不加这个限制条件，代码循环将一直输入0
	 {
		LCD_ShowString(1,13,"   ");//判断后，一旦再输入，结果窗口清零
		if(num<=10)
		 { 
			if(count<4)
			 {
		  	password*=10;//将数字左移一位
				 password+=num%10;//新输入的数字加到password上，模10是为了10按键为0
			  count++;//次数，限制输入次数
			 }
			 LCD_ShowNum(2,1,password,4);//更新显示
		 }
		 if(num==11)//确认按键
		 {
			 if(password==2345)
			 {
				 LCD_ShowString(1,13,"ok");
				 password=0;//密码清零
				 count=0;//次数清零
				 LCD_ShowNum(2,1,password,4);//更新显示
			 }
			 else
			 {
				 LCD_ShowString(1,13,"err");
				 password=0;//密码清零
				 count=0;//次数清零
				 LCD_ShowNum(2,1,password,4);//更新显示
			 }
		 }
		 if(num==12)//取消按钮
		 {
			 password/=10;//取消最新输入的一位，秘密除以10及可
			 LCD_ShowNum(2,1,password,4);//更新显示
			 count--;//次数也要减，以免不能限制了重新输入
		 }
	 }
	}
}
