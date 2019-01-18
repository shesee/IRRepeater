#include "mcc_generated_files/tmr0.h"
#include "Staticval.h"
#include "TimerTrigger.h"


void TMR0_CustumInterruptHandler(void){
    if(sleepcnt >0)sleepcnt--;
    
}

void InitializeTimerTrigger(void){
    
    TMR0_SetInterruptHandler(TMR0_CustumInterruptHandler);
}