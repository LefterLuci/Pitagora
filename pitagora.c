#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    //se citesc de la tastatura laturile unui triunghi.
    //Ce dimensiuni are ipotenuza daca stim dimensiunea catetelor.

    float a,b,c;

    printf("Pentru a afla marimea ipotenuzei va rugam introduceti valoarea catetelor\n");

    printf("Introdueceti masura primei catete:\n");
    scanf("%f",&a);

    printf("Introduceti masura celei de a doua catete:\n");
    scanf("%f",&b);

    c = (a*a)+(b*b);
    c = sqrt(c);

    printf("valoarea ipotenuzei este:%f\n",c);

    return 0;