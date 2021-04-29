#include "BMS_Current_Validation.h"
#include <stdio.h> 

currentValueValidation_Status checkRangeValidation_For_CurrentValues(int * current_ValuesFrom_Sensor , int numberOfReadings)
{
  currentValueValidation_Status currentValueValidation_Status_t = VALUES_NOT_VERIFIED;
  int i;
  
  for(i=0;i<numberOfReadings;i++)
  {
    if((current_ValuesFrom_Sensor[i] > MINIMUM_CURRENT_VALUE) && (current_ValuesFrom_Sensor[i] < MAXIMUM_CURRENT_VALUE))
    {
      currentValueValidation_Status_t = VALUES_IN_RANGE;
    }
    else
    {
      currentValueValidation_Status_t = VALUES_NOT_IN_RANGE;
      break;
    }
  }
  
  return currentValueValidation_Status_t;
}
