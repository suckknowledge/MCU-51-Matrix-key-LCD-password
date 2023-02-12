#include <regx52.h>
#include "delay.h"

unsigned char matrixkey()
{
	unsigned char keynumble=0;
	P1=0xff;
	P1_7=0;
	if(P1_3==0){delay(20);while(P1_3==0);delay(20);keynumble=1;}
	if(P1_2==0){delay(20);while(P1_2==0);delay(20);keynumble=2;}
	if(P1_1==0){delay(20);while(P1_1==0);delay(20);keynumble=3;}
	if(P1_0==0){delay(20);while(P1_0==0);delay(20);keynumble=4;}
	
	P1=0xff;
	P1_6=0;
	if(P1_3==0){delay(20);while(P1_3==0);delay(20);keynumble=5;}
	if(P1_2==0){delay(20);while(P1_2==0);delay(20);keynumble=6;}
	if(P1_1==0){delay(20);while(P1_1==0);delay(20);keynumble=7;}
	if(P1_0==0){delay(20);while(P1_0==0);delay(20);keynumble=8;}
	
	P1=0xff;
	P1_5=0;
	if(P1_3==0){delay(20);while(P1_3==0);delay(20);keynumble=9;}
	if(P1_2==0){delay(20);while(P1_2==0);delay(20);keynumble=10;}
	if(P1_1==0){delay(20);while(P1_1==0);delay(20);keynumble=11;}
	if(P1_0==0){delay(20);while(P1_0==0);delay(20);keynumble=12;}
	
	P1=0xff;
	P1_4=0;
	if(P1_3==0){delay(20);while(P1_3==0);delay(20);keynumble=13;}
	if(P1_2==0){delay(20);while(P1_2==0);delay(20);keynumble=14;}
	if(P1_1==0){delay(20);while(P1_1==0);delay(20);keynumble=15;}
	if(P1_0==0){delay(20);while(P1_0==0);delay(20);keynumble=16;}
	return keynumble;
  
}