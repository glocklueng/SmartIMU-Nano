/*====================================================================================================*/
/*====================================================================================================*/
#include "drivers\stm32f4_system.h"

#include "smartimu.h"
/*====================================================================================================*/
/*====================================================================================================*/
int main( void )
{
  SIMU_Init();
  SIMU_Loop();
}
/*====================================================================================================*/
/*====================================================================================================*/
