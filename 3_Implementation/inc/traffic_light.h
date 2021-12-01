#ifndef __TRAFFIC_LIGHT_H_
#define __TRAFFIC_LIGHT_H_
/**
 * @file traffic_light.h
 * @author Adwaith.R
 * @brief Project to Blink 12 LED connected to AVR328 MCU GPIO PIN
 * @version 0.1
 * @date 2021-12-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Macro Definitions
 */

#define R1 PB0  /* Connect led Red1 to pin no B0 */
#define Y1 PB1  /* Connect led Yellow1 to pin no B1 */
#define G1 PB2  /* Connect led Green1 to pin no B2 */

#define R2 PB3  /* Connect led Red2 to pin no B3 */
#define Y2 PB4  /* Connect led Yellow2 to pin no B4 */
#define G2 PB5  /* Connect led Green2 to pin no B5 */

#define R3 PD5  /* Connect led Red3 to pin no D5 */
#define Y3 PD4  /* Connect led Yellow3 to pin no D4 */
#define G3 PD3  /* Connect led Green3 to pin no D3 */

#define R4 PD2  /* Connect led Red4 to pin no D2 */
#define Y4 PD1  /* Connect led Yellow4 to pin no D1 */
#define G4 PD0  /* Connect led Green4 to pin no D0 */
/**
 * Include files
 */ 
#include "project_config.h"


#endif /** __TRAFFIC_LIGHT_H_*/
