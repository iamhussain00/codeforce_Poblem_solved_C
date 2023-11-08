#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);

    char s[n+1];
    scanf("%s",s);
    if(n<26)
    {
        printf("NO\n");
    }
    else
    {
        int count=0;
        for(char i=97; i<=122;)
        {
             int flag=0;
            for(int j=0; s[j]!='\0'; j++)
            {
                if(s[j]>='A' && s[j]<='Z')
                {
                    s[j]+=32;
                }
                if(s[j]==i)
                {
                    count++;
                    flag=1;
                    i++;

                }
            }
            if(flag==0){
                break;
            }


        }



        if(count==26)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}

