#include <stdio.h>
int main(void)
{
    int nbCities;
    int nbBigCities = 0;
    int i;
    scanf("%d", &nbCities);
    for(i=0; i<nbCities; i++)
    {
        int population;
        scanf("%d", &population);
        if(population > 10000)
        {
            nbBigCities = nbBigCities + 1;
        }
    }
    printf("%d", nbBigCities);
    return 0;
}
