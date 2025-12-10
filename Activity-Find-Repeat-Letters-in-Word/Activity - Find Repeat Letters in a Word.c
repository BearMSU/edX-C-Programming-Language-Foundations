#include <stdio.h>
int main(void)
{
    char word[51];
    int length = 0;
    int i = 0; 
    int j = 0;
    char swap;
    int repeats = 0;

    scanf("%s", word);
    // Moves through the list character by character
    while (word[length]!='\0') 
    {
        length++;
    }
    // Bubble sort to order the characters in the word (array)   
    for(j=0;j<length-1; j++) 
    {
        for(i=0;i<length-1;i++) 
        { 
            if (word[i] > word[i+1]) 
            {
                swap = word[i];
                word[i]   = word[i+1];
                word[i+1] = swap;
            }
        }
    }
    i = 0; // resetting i to null after sorting

    // Checking for repeating characters in the sorted word
    while (i<length-1) 
    {
        if (word[i]==word[i+1]) 
        {
            repeats++;
            j = i + 1;
            
            // Continues through the word until it reaches a new character
            while (j<length && word[i]==word[j])
            {
                j++;
            }
            i = j; // Same letter found
        } 
        else 
        {
            i++;
        }
    }
    
    printf("%d", repeats);
    return 0;
}
