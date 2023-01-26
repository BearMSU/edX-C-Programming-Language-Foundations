#include <stdio.h>
int main(void)
{
    int nbStudents;
    char name[51];
    int grade[30];
    int ranking[30];
    int i,j;
    int rank=0;

    scanf("%d", &nbStudents);
        
    for(i=0;i<nbStudents; i++) {
        scanf("%d", &grade[i]);
    }

    for(i=0;i<nbStudents; i++) {
       rank=0;
       for(j=0;j<nbStudents; j++) {
         if(grade[i]<grade[j]){
           rank++;
         }
         ranking[i]=rank+1;
       }
    }
    
    for(i=0;i<nbStudents; i++) {
        scanf("%s", name);
        printf("%s rank is %d\n",name,ranking[i]);
    }
