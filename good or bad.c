#include<stdio.h>
#include<string.h>

int main()
{
    int T;
    scanf("%d",&T);
    getchar();
    for(int j=1; j<=T; j++)
    {
        char str[111111];
         scanf("%s", str);

        int i=0,flag=0;
        int x=strlen(str);
        while (i<x-2)
        {
            if (str[i]=='0' && str[i+1]=='1' && str[i+2]=='0')
            {
                flag=1;
                break;

            }
            else if (str[i]=='1' && str[i+1]=='0' && str[i+2]=='1')
            {
                flag=1;
                break;
            }
            i++;
        }
        if(flag==1) puts("Good");
        else puts("Bad");
    }

    return 0;
}

