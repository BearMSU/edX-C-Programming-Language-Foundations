#include <stdio.h>
int main(void)
{
    char word[51];
    int length = 0;
    int i = 0;
    int found = 0;
    int mid = 0;
    
    scanf("%s", word);
    while(word[length] != '\0')
    {
        length++; // Count your way through the word
    }
    if(length % 2 == 0)
    {
        mid = length/2 - 1; // No middle letter
    }
    else
    {
        mid = length/2; // Has middle letter
    }
    
    while(!found && i < length)
    {
        if(word[i] == 't' || word[i] == 'T')
        {
            found++; // We found a 't' or 'T'
        }
        else
        {
            i++; // We keep on going
        }
    }
    if(!found) // We didn't find a 't' or 'T'
    {
        printf("-1");
    }
    else if(i <= mid) // 't' or 'T' found in first half or exact middle
    {
        printf("1");
    }
    else // We found a 't' or 'T' in second half of word
    {
        printf("2");
    }
    
    return 0;
}
