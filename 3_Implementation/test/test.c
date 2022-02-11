#include "unity.h"
#include "func.h"

void setUp()
{

}
void tearDown()
{
  
}
void test_availability()
{
    int d;
    int c=2;
    TEST_ASSERT_EQUAL(1,availability(c));
    
}

int main()
{
  UNITY_BEGIN();
  
  RUN_TEST(test_availability);
  return UNITY_END();
}