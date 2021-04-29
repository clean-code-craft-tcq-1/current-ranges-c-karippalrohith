#define MINIMUM_CURRENT_VALUE 0u
#define MAXIMUM_CURRENT_VALUE 15u

typedef enum {
  VALUES_IN_RANGE,
  VALUES_NOT_IN_RANGE,
  VALUES_NOT_VERIFIED
}currentValueValidation_Status;

typedef enum {
	VALID_VALUES,
	INVALID_VALUES,
	NO_CHECK_DONE
}Null_Check_Status;

currentValueValidation_Status checkRangeValidation_For_CurrentValues(int * current_ValuesFrom_Sensor , int numberOfReadings);

Null_Check_Status check_For_NULL_In_CurrentValues(int * current_ValuesFrom_Sensor , int numberOfReadings);
