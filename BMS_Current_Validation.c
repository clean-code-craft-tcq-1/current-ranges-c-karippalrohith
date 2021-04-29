#include "BMS_Current_Validation.h"
#include <stdio.h> 

Null_Check_Status check_For_NULL_In_CurrentValues(int * current_ValuesFrom_Sensor , int numberOfReadings)
{
  Null_Check_Status Null_Check_Status_t = VALID_VALUES;
  
  if((current_ValuesFrom_Sensor == NULL) || (numberOfReadings == 0))
  {
    Null_Check_Status_t = INVALID_VALUES;
    return Null_Check_Status_t;
  }
  
  return Null_Check_Status_t;
}

currentValueValidation_Status checkRangeValidation_For_CurrentValues(int * current_ValuesFrom_Sensor , int numberOfReadings)
{
  currentValueValidation_Status currentValueValidation_Status_t = VALUES_NOT_VERIFIED;
  int i;
  
    if((current_ValuesFrom_Sensor[0] > MINIMUM_CURRENT_VALUE) && (current_ValuesFrom_Sensor[0] < MAXIMUM_CURRENT_VALUE))
    {
      currentValueValidation_Status_t = VALUES_IN_RANGE;
    }
    else
    {
      currentValueValidation_Status_t = VALUES_NOT_IN_RANGE;
    }
   
  return VALUES_NOT_IN_RANGE;
}
