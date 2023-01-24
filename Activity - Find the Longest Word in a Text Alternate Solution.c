#include <stdio.h>
int main(void)
{
    int number = 0;
    int i = 0;
    int j = 0; // Additional variable in this solution
    int largest = 0;
    int current = 0;
    char word[101];
    scanf("%d", &number);
    for(i = 0; i < number; i++)
    {
        scanf("%s", word);
        current = 0;
        for(j = 0; word[j] != '\0'; j++) // The only difference between this solution and the other is changing the WHILE loop to a FOR loop and adding the variable 'j'
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
