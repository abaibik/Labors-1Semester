#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

float fahrenheitToCelsius(float fahrenheitGrad)
{
    return (5 * (fahrenheitGrad - 32)) / 9;
}

#pragma region test
#if defined(TEST)
#include <check.h>

START_TEST(test_fahrenheitToCelsius)
{
    ck_assert_float_eq_tol(fahrenheitToCelsius(20.5), -6.4, 0.1);
    ck_assert_float_eq_tol(fahrenheitToCelsius(72.1), 22.3, 0.1);
    ck_assert_float_eq_tol(fahrenheitToCelsius(81.5), 27.5, 0.1);
}
END_TEST

Suite *labor_suite(void)
{
    Suite *s = suite_create("Labor02");
    TCase *tc_core = tcase_create("fahrenheitToCelsius");

    tcase_add_test(tc_core, test_fahrenheitToCelsius);
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
    float fahrenheitGrad, celsiusGrad;
    scanf("%f", &fahrenheitGrad);

    celsiusGrad = fahrenheitToCelsius(fahrenheitGrad);
    printf("%.1f Grad Fahrenheit = %.1f Grad Celsius", fahrenheitGrad, celsiusGrad);

    return 0;
}
#endif
#pragma endregion aufgabe
