#include <stdio.h>

int main(void)
{
    int number;
    int temp;
    
    scanf("%d", &number);
    
    int mark[number];
    int copyMark[number];
    int pos[number];
    
    
    char name[number][11];
    
    for(int i=0; i<number; i++)
    {
        scanf("%d", &mark[i]);
        pos[i] = i;
    }
    for(int i=0; i<number; i++)
    {
        scanf("%s", name[i]);
    }
    for(int k=0; k<number; k++)
    {
        copyMark[k] = mark[k];
    }
    for(int j=1; j <= number-1; j++)
    {
        for(int i=0; i<number-1; i++)
        {
            if(copyMark[i+1] > copyMark[i])
            {
                temp = pos[i];
                pos[i] = pos[i+1];
                pos[i+1] = temp;
                
                temp = copyMark[i];
                copyMark[i] = copyMark[i+1];
                copyMark[i+1] = temp;
            }
        }
    }
    int posIndex = 0;
    for(int j=0; j<number; j++)
    {
        for(int i=0; i<number; i++)
        {
            if(j == pos[i])
            {
                posIndex = i;
                break;
            }
        }
        printf("%s rank is %d\n", name[j], posIndex + 1);
    }
    return 0;
}
