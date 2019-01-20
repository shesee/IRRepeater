/* 
 * File:   IRTrigger.h
 * Author: shesee
 *
 * Created on January 18, 2019, 11:35 PM
 */

#ifndef IRTRIGGER_H
#define	IRTRIGGER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef	__cplusplus
extern "C" {
#endif
    
//@brief LED等の出力を全部停止
extern void StopIR(void);

//@brief 状態変化割り込みの初期化　リモコン信号から搬送波を除いたものを受け取る
extern void InitializeIRTrigger(void);


#ifdef	__cplusplus
}
#endif

#endif	/* IRTRIGGER_H */

