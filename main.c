#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float taban = 0;
    float us = 0;
    printf("Taban yaziniz: ");
    scanf("%f",&taban);
    printf("Us yaziniz : ");
    scanf("%f" , &us);

    float sonuc = exp(us*log(taban));
    printf("Sonuc : %.2f",sonuc);

    return 0;
}
