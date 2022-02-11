#include"calculator.h"
#include"unity_internals.h"
#include"unity.h"

void setUp(){}

void tearDown(){}



void test_addition(void);
void test_subtraction(void);
void test_multiplication(void);
void test_division(void);
void test_mod(void);
void test_factorial(void);
void test_sine(void);
void test_cosine(void);
void test_tangent(void);
void test_logBasee(void);
void test_logBase10(void);
void test_eToPowerX(void);
void test_squareRoot(void);
void test_cubeRoot(void);
void test_power(void);
void test_sineInverse(void);
void test_cosineInverse(void);
void test_tangentInverse(void);
void test_npr(void);
void test_ncr(void);
void test_clear(void);






/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST( test_addition );
  RUN_TEST( test_subtraction );
  RUN_TEST( test_multiplication );
  RUN_TEST( test_division );
  RUN_TEST( test_mod );
  RUN_TEST( test_factorial);
  RUN_TEST( test_sine );
  RUN_TEST( test_cosine );
  RUN_TEST( test_tangent );
  RUN_TEST( test_logBasee );
  RUN_TEST( test_logBase10 );
  RUN_TEST( test_eToPowerX );
  RUN_TEST( test_squareRoot );
  RUN_TEST( test_cubeRoot );
  RUN_TEST( test_power );
  RUN_TEST( test_sineInverse );
  RUN_TEST( test_cosineInverse );
  RUN_TEST( test_npr );
  RUN_TEST( test_ncr );
  RUN_TEST( test_clear );
  /* Close the Unity Test Framework */
  return UNITY_END();
}


void test_addition(void){
TEST_ASSERT_EQUAL(30, addition(10, 20));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(15000, addition(7500, 7500));

}

void test_subtraction(void){
TEST_ASSERT_EQUAL(20,subtraction(50, 20));
/* Dummy fail*/

 TEST_ASSERT_EQUAL(100, subtraction(200,100));
}

void test_multiplication(void){
TEST_ASSERT_EQUAL(30, multiplication(6, 5));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(35, multiplication(7, 5));

}

void test_division(){

TEST_ASSERT_EQUAL(5, division(100, 20));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(15, division(75, 5));
}

void test_mod(void){

TEST_ASSERT_EQUAL(10, mod(110, 10));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100, mod(7545, 75));
}

void test_factorial(void){
TEST_ASSERT_EQUAL(120, factorial(5));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(5040, factorial(7));

}

void test_sine(void){
TEST_ASSERT_EQUAL(0.707,0.850 sine(45));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1,0.893 sine(90));

}

void test_cosine(void){

TEST_ASSERT_EQUAL(0.707,0.525 cosine(45));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(0,0.448 cosine(90));
}

void test_tangent(void){
TEST_ASSERT_EQUAL(1,1.619 tangent(45));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(ERROR,1.995 tangent(90));

}

void test_logBasee(void){
TEST_ASSERT_EQUAL(2.32, logBasee(10));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1.791, logBasee(6));

}

void test_logBase10(void){
TEST_ASSERT_EQUAL(1.079, logBase10(12));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(0.778, logBase10(6));

}

void test_eToPowerX(void){
TEST_ASSERT_EQUAL(7.389, eToPowerX(2));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(54.598, eToPowerX(4));

}

void test_squareRoot(void){

TEST_ASSERT_EQUAL(4, squareRoot(16));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(15, squareRoot(225));
}

void test_cubeRoot(void){
TEST_ASSERT_EQUAL(3, cubeRoot(27));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(16, cubeRoot(4096));

}

void test_power(void){
TEST_ASSERT_EQUAL(2,5,32, power(2, 5));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(3,2,9, power(3, 2));


}

void test_sineInverse(void){
TEST_ASSERT_EQUAL(32, sineInverse(2, 5));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(9, sineInverse(3, 2));


}

void test_cosineInverse(void){

TEST_ASSERT_EQUAL(0,0 cosineInverse(1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(45,0.7855 cosineInverse(0.707));
}

void test_tangentInverse(void){
TEST_ASSERT_EQUAL(45,0.7853 tangentInverse(1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(63.43,1.107 tangentInverse(2));

}

void test_npr(void){
TEST_ASSERT_EQUAL(120, npr(6, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(120, npr(5, 4));

}

void test_ncr(void){
TEST_ASSERT_EQUAL(6, ncr(4, 2));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, ncr(8, 8));

}

void test_clear(void){
TEST_ASSERT_EQUAL(0, clear(0,0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(0, clear(0, 0));

}

