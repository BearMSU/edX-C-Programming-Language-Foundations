#include <stdio.h>
int main(void){
    int array[10];
    int id;
    int i;
    for (i=0; i<10; i++){
        scanf("%d", &array[i]);
    }
    scanf("%d", &id);
    if(id == 0){
        printf("%d", array[0]);
    }
    if(id == 1){
        printf("%d", array[1]);
    }
    if(id == 2){
        printf("%d", array[2]);
    }
    if(id == 3){
        printf("%d", array[3]);
    }
    if(id == 4){
        printf("%d", array[4]);
    }
    if(id == 5){
        printf("%d", array[5]);
    }
    if(id == 6){
        printf("%d", array[6]);
    }
    if(id == 7){
        printf("%d", array[7]);
    }
    if(id == 8){
        printf("%d", array[8]);
    }
    if(id == 9){
        printf("%d", array[9]);
    }
    return 0;
}
