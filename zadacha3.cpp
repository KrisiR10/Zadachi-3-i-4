#include <iostream>
#include <stdio.h>

int main()
{
    //Задача номер 3 за периметър на правоъгълник
    double a, b;
    printf("Enter side a: ");
    scanf_s("%lf",&a);

    printf("Enter side b: ");
    scanf_s("%lf", & b);

    double perimeter = 2 * (a + b);
    double area = a * b;

    printf("Perimeter: %.2lf\n",perimeter);
    printf("Area: %.2lf\n", area);

    // Задача номер 4 за обем на кълбо
    double r, v;
    const double PI = 3.14;
    printf("Radius: ");
    scanf_s("%lf", &r);
    v = (4 * PI * r * r * r) / 3;
    printf("Volume: %.2lf\n", v);

    // Задача номер 4 за лице на трапец
    double c, d, h, S;
    printf("Side C= ");
    scanf_s("%lf", &c);

    printf("Side D= ");
    scanf_s("%lf", &d);

    printf("Height H= ");
    scanf_s("%lf", &h);

    S = ((c + d) * h) / 2;
    printf("S: %.2lf\n", S);

}

