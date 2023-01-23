#include <stdio.h>
int main(void)
{
    int i = 0;
    char name[51];
    scanf("%s", name);
    while(name[i] != '\0')
    {
     i++;
    }
    if(i%2 == 0)
    {
        printf("1\n");
    }
    else
    {
        printf("2\n");
    }
    return 0;
}
