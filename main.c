#include "timer.h"
#include "led.h"
#include "keyboard.h"


int main(void){
	LedInit();
	//InitTimer0();
	InitTimer0Match0(100000);
	
	while(1){
		//WaitOnTimer0(1000000);
		WaitOnTimer0Match0();
		LedStepRight();
	}
}
