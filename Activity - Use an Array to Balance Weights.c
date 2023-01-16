#include <stdio.h>
int main(void){
    double cars[50];
    double tWeight = 0;
    int nCars;
    scanf("%d", &nCars);
    int i;
    for(i=0; i<nCars; i++){
        scanf("%lf", &cars[i]);
        tWeight += cars[i];
    }
    double aWeight = tWeight / nCars;
    for(i=0; i<nCars; i++){
        printf("%.1lf\n", aWeight - cars[i]);
    }
    return 0;
}
