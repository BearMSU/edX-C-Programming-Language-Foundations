#include <stdio.h>
int main(void)
{
    int name;
    char first[101];
    char last [101];
    int i;
    scanf("%d", &name);
    for(i=0; i<name; i++)
    {
        scanf("%s %s", first, last);
        printf("%s %s\n", last, first);
    }
    return 0;
}
