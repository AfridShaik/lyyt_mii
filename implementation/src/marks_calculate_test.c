#include "E:\mini\unity\unity.h"
#include "E:\mini\unity\unity_internals.h"
#include "funtion.h"
#include<stdio.h>




/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

void test_internal_calculation_1(void)
{
TEST_ASSERT_EQUAL(35,internal_calculation(25,25,25,9,9,9,9,9,4));
}

void test_internal_calculation_2(void)
{
TEST_ASSERT_EQUAL(34,internal_calculation(20,25,25,9,9,9,9,9,4));
}

/*void test_internal_calculation_3(void)
{
TEST_ASSERT_EQUAL(35,internal_calculation(20,29,25,9,9,9,9,9,4));
}*/

void test_internal_calculation_4(void)
{
TEST_ASSERT_EQUAL(32,internal_calculation(25,25,25,9,9,9,9,9,1));
}


void test_internal_calculation(void)
{
    TEST_ASSERT_EQUAL(33,internal_calculation(22,22,22,9,9,9,9,9,4));

}

void test_total_marks_calculation_1(void)
{
    TEST_ASSERT_EQUAL(90,total_marks_calculation(35,55));

}

void test_total_marks_calculation_2(void)
{
    TEST_ASSERT_EQUAL(90,total_marks_calculation(35,55));

}

void test_total_marks_calculation_3(void)
{
    TEST_ASSERT_EQUAL(90,total_marks_calculation(35,55));

}

void test_total_marks_calculation_4(void)
{
    TEST_ASSERT_EQUAL(90,total_marks_calculation(35,55));

}

void test_total_marks_calculation_5(void)
{
    TEST_ASSERT_EQUAL(90,total_marks_calculation(35,55));

}

void test_total_marks_calculation_6(void)
{
    TEST_ASSERT_EQUAL(90,total_marks_calculation(35,55));

}

void test_total_marks_calculation_7(void)
{
    TEST_ASSERT_EQUAL(90,total_marks_calculation(35,55));

}

void test_total_marks_calculation_8(void)
{
    TEST_ASSERT_EQUAL(90,total_marks_calculation(35,55));

}

void test_total_marks_calculation_9(void)
{
    TEST_ASSERT_EQUAL(90,total_marks_calculation(35,55));

}

void test_total_marks_calculation_10(void)
{
    TEST_ASSERT_EQUAL(90,total_marks_calculation(35,55));

}

void test_total_marks_calculation_11(void)
{
    TEST_ASSERT_EQUAL(90,total_marks_calculation(35,55));

}

void test_total_marks_calculation_12(void)
{
    TEST_ASSERT_EQUAL(90,total_marks_calculation(35,55));

}

void test_total_marks_calculation_13(void)
{
    TEST_ASSERT_EQUAL(90,total_marks_calculation(35,55));

}

void test_total_marks_calculation_14(void)
{
    TEST_ASSERT_EQUAL(90,total_marks_calculation(35,55));

}

void test_total_marks_calculation_15(void)
{
    TEST_ASSERT_EQUAL(90,total_marks_calculation(35,55));

}

void test_total_marks_calculation_16(void)
{
    TEST_ASSERT_EQUAL(90,total_marks_calculation(35,55));

}

void test_total_marks_calculation_17(void)
{
    TEST_ASSERT_EQUAL(90,total_marks_calculation(35,55));

}

void test_total_marks_calculation_18(void)
{
    TEST_ASSERT_EQUAL(90,total_marks_calculation(35,55));

}

void test_total_marks_calculation_19(void)
{
    TEST_ASSERT_EQUAL(90,total_marks_calculation(35,55));

}

void test_total_marks_calculation_20(void)
{
    TEST_ASSERT_EQUAL(90,total_marks_calculation(35,55));

}

int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();
    /* Run Test functions */
    RUN_TEST(test_internal_calculation);
    RUN_TEST(test_internal_calculation_1);
    RUN_TEST(test_internal_calculation_2);
    //RUN_TEST(test_internal_calculation_3);
    RUN_TEST(test_internal_calculation_4);

    RUN_TEST(test_total_marks_calculation_1);
    RUN_TEST(test_total_marks_calculation_2);
    RUN_TEST(test_total_marks_calculation_3);
    RUN_TEST(test_total_marks_calculation_4);
    RUN_TEST(test_total_marks_calculation_5);
    RUN_TEST(test_total_marks_calculation_6);
    RUN_TEST(test_total_marks_calculation_7);
    RUN_TEST(test_total_marks_calculation_8);
    RUN_TEST(test_total_marks_calculation_9);
    RUN_TEST(test_total_marks_calculation_10);
    RUN_TEST(test_total_marks_calculation_11);
    RUN_TEST(test_total_marks_calculation_12);
    RUN_TEST(test_total_marks_calculation_13);
    RUN_TEST(test_total_marks_calculation_14);
    RUN_TEST(test_total_marks_calculation_15);
    RUN_TEST(test_total_marks_calculation_16);
    RUN_TEST(test_total_marks_calculation_17);
    RUN_TEST(test_total_marks_calculation_18);
    RUN_TEST(test_total_marks_calculation_19);
    RUN_TEST(test_total_marks_calculation_20);


    /* Close the Unity Test Framework */
    return UNITY_END();
}