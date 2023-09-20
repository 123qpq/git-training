#include <stdio.h>

void calculater(float num1, float num2){
    printf("%f\n", num1 + num2); //사칙연산자
    printf("%f\n", num1 - num2);
    printf("%f\n", num1 * num2);
    printf("%f\n", num1 / num2);
    printf("%d\n", (int)num1 % (int)num2);

    printf("%d\n", num1 == num2); //관계연산자
    printf("%d\n", num1 != num2);
    printf("%d\n", num1 > num2);
    printf("%d\n", num1 < num2);
    printf("%d\n", num1 >= num2);
    printf("%d\n", num1 <= num2);

    printf("%d\n", num1 && num2); //논리연산자
    printf("%d\n", num1 || num2);
    printf("%d\n", !num1);
    printf("%d\n", !num2);

    printf("%f\n", num1 += num2); //축약대입연산자
    printf("%f\n", num1 -= num2);
    printf("%f\n", num1 *= num2);
    printf("%f\n", num1 /= num2);

    printf("%f\n", num1++); //증감연산자
    printf("%f\n", ++num1);
    printf("%f\n", num2--);
    printf("%f\n", --num2);

}
