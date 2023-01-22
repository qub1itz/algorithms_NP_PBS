#include <stdio.h>
#include <stdlib.h>

double min(double x, double y)
{
    double mniejsza;

    if(x<y) {
        mniejsza=x;
    }
    else {
        mniejsza=y;
    }
    return mniejsza;
}

int main()
{

    double x, y, wynik;

    printf("Podaj pierwsza liczbe: ");
    scanf("%lf", &x);

    printf("Podaj druga liczbe: ");
    scanf("%lf", &y);

    wynik = min(x,y);

    printf("Mniejsza liczba to: %lf", wynik);

return 0;
}
