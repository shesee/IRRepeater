#include "mcc_generated_files/pin_manager.h"
#include "mcc_generated_files/pwm3.h"
#include "Staticval.h"
#include "IRTrigger.h"




// @brief リモコン受信素子からの信号を受ける状態変化割り込みハンドラ
// 
void IOCAF5_CustumInterruptHandler(void){
    sleepcnt = MAX_SLEEPCNT;//スリープカウントをMAXに戻しておく
    if(IN_IR_GetValue()){//受信素子の出力は負論理
        PWM3_Stop();//38kHzのPWMを止める
        OUT_LED_SetHigh();//インディケーターのLEDの消灯
    }else{
        PWM3_Start();//38kHzのPWMを出力
        OUT_LED_SetLow();//インディケーターのLEDの店頭
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
