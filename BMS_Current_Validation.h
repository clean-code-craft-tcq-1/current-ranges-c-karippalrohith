typedef enum {
  VALUES_IN_RANGE,
  VALUES_NOT_IN_RANGE,
  VALUES_NOT_VERIFIED
}currentValueValidation_Status;

currentValueValidation_Status checkRangeValidation_For_CurrentValues(int * current_ValuesFrom_Sensor , int numberOfReadings);
