#ifndef INC_SETTIMER_H_
#define INC_SETTIMER_H_

extern int timer_flag [3];
extern int timer_counter [3];

void setTimer(int type, int duration);

void timerRun();

#endif /* INC_SETTIMER_H_ */
