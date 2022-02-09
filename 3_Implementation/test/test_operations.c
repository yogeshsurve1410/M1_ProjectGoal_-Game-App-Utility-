#include "unity.h"
#include<calendar_operations.h>
#define PROJECT_NAME "Calendar"

void test_gotoxy (int x, int y);
void test_SetColor(int ForgC);
void test_ClearColor();
void test_ClearConsoleToColors(int ForgC, int BackC);
void test_SetColorAndBackground(int ForgC, int BackC);
void test_increase_month(int *mm,  int *yy);
void test_decrease_month(int *mm,  int *yy);
void test_print_date(int mm, int yy);
void test_printMonth(int mon,int year,int x,int y);
void test_AddNote();
void test_showNote(int mm);

void setUp(){}
void tearDown(){}

int main(){
UNITY_BEGIN();
RUN_TEST(test_gotoxy (int x, int y));
RUN_TEST(test_SetColor(int ForgC));
RUN_TEST(test_ClearColor());
RUN_TEST(test_ClearConsoleToColors(int ForgC, int BackC));
RUN_TEST(test_SetColorAndBackground(int ForgC, int BackC));
RUN_TEST(test_increase_month(int *mm,  int *yy));
RUN_TEST(test_decrease_month(int *mm,  int *yy));
RUN_TEST(test_print_date(int mm, int yy) );
RUN_TEST(test_printMonth(int mon,int year,int x,int y));
RUN_TEST(test_AddNote());
RUN_TEST(test_showNote(int mm));
return UNITY_END();



}
void test_gotoxy (int x, int y);{
TEST_ASSERT_EQUAL

}

void test_SetColor(int ForgC){


}

void test_ClearColor();{


}

void test_ClearConsoleToColors(int ForgC, int BackC);{


}

void test_SetColorAndBackground(int ForgC, int BackC);{


}

void test_increase_month(int *mm,  int *yy);{


}

void test_decrease_month(int *mm,  int *yy);{


}

void test_print_date(int mm, int yy);{


}

void test_printMonth(int mon,int year,int x,int y);{


}

void test_AddNote();{


}

void test_showNote(int mm);{


}


















void showNote(int mm)