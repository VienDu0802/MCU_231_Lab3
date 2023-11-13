#include "setTimer.h"

int timerCounter [3] = {0,0,0};
int timer_flag [3] = {0,0,0};

void setTimer(int type, int duration){
	timerCounter[type] = duration;
	timer_flag[type] = 0;
}

void timerRun(){
	if(timerCounter[0] > 0){
		timerCounter[0]--;
		if(timerCounter[0] <= 0){
			timer_flag[0] = 1;
		}
	}
	if(timerCounter[1] > 0){
		timerCounter[1]--;
		if(timerCounter[1] <= 0){
			timer_flag[1] = 1;
		}
	}
	if(timerCounter[2] > 0){
		timerCounter[2]--;
		if(timerCounter[2] <= 0){
			timer_flag[2] = 1;
		}
	}
}
