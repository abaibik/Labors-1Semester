#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

float bmi(int weight, int height)
{
    return (weight / 1000.0f) / ((height / 100.0f) * (height / 100.0f));
}

void bmi_evaluation(float bmi)
{
    if (bmi <= 18.4)
    {
        printf("Untergewicht %.1f", bmi);
    }
    else if (bmi >= 24.89)
    {
        printf("Uebergewicht %.1f", bmi);
    }
    else
    {
        printf("Normalgewicht %.1f", bmi);
    }
}

#pragma region test
#if defined(TEST)
#include <check.h>

START_TEST(test_bmi_evaluation)
{
    ck_assert_float_eq_tol(bmi(85000, 150), 37.8, 0.1);
    ck_assert_float_eq_tol(bmi(92500, 184), 27.3, 0.1);
    ck_assert_float_eq_tol(bmi(80000, 190), 22.2, 0.1);
    ck_assert_float_eq_tol(bmi(50000, 180), 15.4, 0.1);
    ck_assert_float_eq_tol(bmi(73600, 200), 18.4, 0.1);
    ck_assert_float_eq_tol(bmi(99600, 200), 24.9, 0.1);
}
END_TEST

Suite *labor_suite(void)
{
    Suite *s = suite_create("Labor02");
    TCase *tc_core = tcase_create("bmi_evaluation");

    tcase_add_test(tc_core, test_bmi_evaluation);
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

    scanf("%d %d", &weight, &height);

    float result = bmi(weight, height);

    bmi_evaluation(result);

    return 0;
}
#endif
#pragma endregion aufgabe
