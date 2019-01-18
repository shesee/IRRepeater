#include "mcc_generated_files/pin_manager.h"
#include "mcc_generated_files/pwm3.h"
#include "Staticval.h"
#include "IRTrigger.h"




// @brief
// 
void IOCAF5_CustumInterruptHandler(void){
    sleepcnt = MAX_SLEEPCNT;
    if(IN_IR_GetValue()){//負論理
        PWM3_Stop();
        OUT_LED_SetHigh();
    }else{
        PWM3_Start();
        OUT_LED_SetLow();
    }   
}


void StopIR(void){
    PWM3_Stop();
    OUT_LED_SetHigh();        
}

void InitializeIRTrigger(void){
    IOCAF5_SetInterruptHandler(IOCAF5_CustumInterruptHandler);
    StopIR();
}
