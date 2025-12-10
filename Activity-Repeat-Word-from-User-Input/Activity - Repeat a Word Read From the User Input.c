#include <stdio.h>
int main(void)
{
    int repeat;
    char word[101];
    int i;
    scanf("%d %s", &repeat, word);
    for(i=0; i<repeat; i++)
    {
         printf("%s\n", word);
    }
    return 0;
}
