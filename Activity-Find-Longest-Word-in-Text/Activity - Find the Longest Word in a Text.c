#include <stdio.h>
int main(void)
{
    int number = 0;
    int i = 0;
    int largest = 0;
    int current = 0;
    char word[101];
    scanf("%d", &number);
    for(i = 0; i < number; i++)
    {
        scanf("%s", word);
        current = 0;
        while(word[current] != 0)
        {
            current++;
        }
        if(current > largest)
            {
                largest = current;
                
            }
    } 
    printf("%d", largest);
    return 0;
}
