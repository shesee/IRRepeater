/* 
 * File:   staticval.h
 * Author: shesee
 *
 * Created on January 18, 2019, 11:33 PM
 */

#ifndef STATICVAL_H
#define	STATICVAL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef	__cplusplus
extern "C" {
#endif

    
#define MAX_SLEEPCNT 5
//! スリープカウント　最期の割り込みから50ms後にスリープする。    
extern volatile uint8_t sleepcnt;



#ifdef	__cplusplus
}
#endif

#endif	/* STATICVAL_H */

