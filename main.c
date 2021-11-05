#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float h, r;
    float volume;
    printf("Digite a altura e o raio do cilindro: ");
    scanf("%f", &h);
    scanf("%f", &r);

    volume = M_PI*pow(r, 2)*h;
    printf("\Volume = %f", volume);


    return 0;
}
