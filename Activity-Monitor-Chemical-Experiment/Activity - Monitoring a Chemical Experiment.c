#include <stdio.h>
int main()
{
    int min;
    int max;
    int temp = 0;
    scanf("%d %d", &min, &max);
    while(temp != -999)
    {
        scanf("%d", &temp);
        if(temp >= min && temp <= max)
        {
            printf("Nothing to report\n");
        }
        else
        {
            if(temp != -999)
            {
                printf("Alert!\n");
                break;
            }
        }
    }
    return 0;
}
