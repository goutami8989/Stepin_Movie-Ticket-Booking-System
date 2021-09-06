#include "unity.h"
#include "function.h"

void setUp()
{

}
void tearDown()
{
  
}
void test_changepriceticket(void)
{
    int price1=700;
    TEST_ASSERT_EQUAL(700,changepriceticket(price1));
    
}

int main(void)
{
  UNITY_BEGIN();
  
  RUN_TEST(test_changepriceticket);
  return UNITY_END();
}