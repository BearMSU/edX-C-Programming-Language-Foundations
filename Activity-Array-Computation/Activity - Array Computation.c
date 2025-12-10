#include <stdio.h>
int main(void){
    int numIngredients =  0;
    double ppp[10];
    double weight[10];
    int i;
    double price = 0;
    scanf("%d", &numIngredients);
    for(i=0; i<numIngredients; i++){
        scanf("%lf ", &ppp[i]);
    }
    for(i=0; i<numIngredients; i++){
        scanf("%lf ", &weight[i]);
        price += ppp[i] * weight[i];
    }
    printf("%lf", price);
    return 0;
}
