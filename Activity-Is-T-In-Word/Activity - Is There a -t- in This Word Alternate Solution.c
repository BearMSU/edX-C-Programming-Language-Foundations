#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    char word[50];
    fgets(word, sizeof(word), stdin);
    int mid,count=-1;
    a= strlen(word);
    if(a%2==0)
    {
        mid=(a/2)-1;
    }
    else
    {
        mid=a/2;
    }

    for(int i=0;i<=mid;i++)
    {
        if(word[i]=='t' || word[i]=='T')
        {
            count=1;
            printf("%d",count);
            break;
        }
    }

    if(count==-1)
    {
        for(int i=mid+1;i<strlen(word);i++)
        {
            if((word[i]=='t') || (word[i]=='T'))
            {
                count = 2;
                printf("%d",count);
                break;
            }
        }
    }

    if(count==-1)
    {
        printf("%d",count);
    }
    return 0;
}
