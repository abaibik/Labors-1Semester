#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

float alc_mass(int volume, int procent)
/* Masse des Alkohols in Gramm
A = V * e / 100 * phi
V - Volumen des Getränks (ml)
e - Alkoholanteil, in %
phi - Dichte des Alkohols, hier 0,8 g/ml
*/

{
    return (volume * procent / 100.0f * 0.8);
}

float get_r_d_factor(char sex)
{
    if (sex == 'm')
    {
        return 0.7;
    }
    else if (sex == 'w')
    {
        return 0.6;
    }
    else
    {
        return 0.8;
    }
}

float get_alc_concentration(float alc_gramm, int weight, float r_d_factor)
// Formel von Widmark
{
    return (alc_gramm / (weight * r_d_factor));
}

#pragma region test
#if defined(TEST)
#include <check.h>

START_TEST(test_bmi)
{
    ck_assert_float_eq_tol(alc_mass(500, 5), 20);
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
    char sex;
    int weight, volume, procent;

    scanf("%c %d %d %d", &sex, &weight, &volume, &procent);

    float alc_gramm = alc_mass(volume, procent);

    float r_d_factor = get_r_d_factor(sex);

    float concentration = get_alc_concentration(weight, r_d_factor);

    printf("%.2f Promille", concentration);

    return 0;
}
#endif
#pragma endregion aufgabe
