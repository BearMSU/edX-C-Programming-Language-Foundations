#include <stdio.h>
int main(void)
{
    int expenses = 0;
    int total = 0;
    while(expenses != -1)
    {
        scanf("%d", &expenses);
        total = total + expenses;
    }
    printf("%d", total+1);
    return 0;
}
