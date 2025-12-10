#include <stdio.h>

int main()
{
    int tPop;
    scanf("%d", &tPop);
    int infected = 1;
    int day = 1;
    while(infected < tPop)
    {
        day++;
        infected = infected*2 + infected;
    }
    printf("%d", day);
    return 0;
}
