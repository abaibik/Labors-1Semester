#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

float bmi(int weight, int height)
{
    return (weight / 1000.0f) / ((height / 100.0f) * (height / 100.0f));
}

#pragma region test
#if defined(TEST)
#include <check.h>

START_TEST(test_bmi)
{
    ck_assert_float_eq_tol(bmi(85000, 150), 37.78, 0.01);
    ck_assert_float_eq_tol(bmi(92500, 184), 27.32, 0.01);
    ck_assert_float_eq_tol(bmi(90000, 90), 111.11, 0.01);
    ck_assert_float_eq_tol(bmi(50000, 80), 78.12, 0.01);
}
END_TEST

Suite *labor_suite(void)
{
    Suite *s = suite_create("Labor02");
    TCase *tc_core = tcase_create("bmi");

    tcase_add_test(tc_core, test_bmi);
    suite_add_tcase(s, tc_core);
    return s;
}

int main(void)
{
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = labor_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}

#pragma endregion test
#pragma region aufgabe
#else
int main()
{
    int weight, height;
    float result;

    scanf("%d %d", &weight, &height);

    result = bmi(weight, height);

    printf("Der BMI liegt bei: %.2f!", result);

    return 0;
}
#endif
#pragma endregion aufgabe
