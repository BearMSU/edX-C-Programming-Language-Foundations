#include <stdio.h>

int main()
{
    int secretNumber;
    scanf("%d", &secretNumber);
    int tries = 0;
    int guess = 0;
    while(guess != secretNumber)
    {
        scanf("%d", &guess);
        if(guess < secretNumber)
        {
            printf("it is more \n");
            
        }
        if(guess > secretNumber)
        {
            printf("it is less \n");
            
        }
        tries++;
    }
    printf("Number of tries needed:\n%d", tries );
    return 0;
}
