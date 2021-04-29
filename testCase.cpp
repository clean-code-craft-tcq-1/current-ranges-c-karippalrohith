#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"

TEST_CASE("Check if all the values are within the range") 
{  
  int current_ValuesFrom_Sensor[] = {3, 3, 5, 4, 10, 11, 12};
  int numberOfReadings = sizeof(current_ValuesFrom_Sensor)/sizeof(current_ValuesFrom_Sensor[0]);
  int current_Values_In_Range = checkRangeValidation_For_CurrentValues(current_ValuesFrom_Sensor,numberOfReadings);
  REQUIRE(current_Values_In_Range == VALUES_IN_RANGE);
}

