/**
  ******************************************************************************
  * @file    main.c
  * @author  XinLi
  * @version v1.0
  * @date    24-October-2017
  * @brief   Main program body.
  ******************************************************************************
  * @attention
  *
  * <h2><center>Copyright &copy; 2017 XinLi</center></h2>
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 3 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <https://www.gnu.org/licenses/>.
  *
  ******************************************************************************
  */

/* Header includes -----------------------------------------------------------*/
#include "main.h"
#include "Delay.h"
#include "LED.h"

/* Macro definitions ---------------------------------------------------------*/
/* Type definitions ----------------------------------------------------------*/
/* Variable declarations -----------------------------------------------------*/
/* Variable definitions ------------------------------------------------------*/
/* Function declarations -----------------------------------------------------*/
/* Function definitions ------------------------------------------------------*/

/**
  * @brief  Main program.
  * @param  None.
  * @return None.
  */
int main(void)
{
  for(;;)
  {
    Delay_ms(500);
    LED_SetStatus(LED_Pin1, LED_On);
    Delay_ms(500);
    LED_SetStatus(LED_Pin2, LED_On);
    Delay_ms(500);
    LED_SetStatus(LED_Pin1, LED_Off);
    Delay_ms(500);
    LED_SetStatus(LED_Pin2, LED_Off);
  }
}
