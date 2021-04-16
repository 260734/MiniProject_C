#include "unity.h"
#include <tictactoe.h>

/* Modify these two lines according to the project */
#include <tictactoe.h>
#define PROJECT_NAME    "Game"

/* Prototypes for all the test functions */
void test_rows(void);
void test_diagonal(void);
void test_column(void);
void test_turn(void);
void test_checkwin(void);
void test_checkdraw(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_rows);
  RUN_TEST(test_diagonal);
  RUN_TEST(test_column);
  RUN_TEST(test_turn);
  RUN_TEST(test_checkwin);
  RUN_TEST(test_checkdraw);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_row(void) {
  TEST_ASSERT_EQUAL(1, checkRows(square1,1));
}

void test_diagonal(void) {
   TEST_ASSERT_EQUAL(1, checkdiagonal(square1,1)); 
}

void test_column(void) {
   TEST_ASSERT_EQUAL(1, checkColumns(square1,1));
}

void test_turn(void) {
  TEST_ASSERT_EQUAL(1, Turn(2));
}

void test_checkwin(void) {
  TEST_ASSERT_EQUAL(1, checkwinner());
}

void test_checkdraw(void) {
  TEST_ASSERT_EQUAL(1, checkdraw());
}
