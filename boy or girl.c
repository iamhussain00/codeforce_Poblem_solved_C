#include<stdio.h>
#include<string.h>

int main()
{   int count=1;

    char str[101];

    scanf("%s",str);
    int n=strlen(str);
    for(int i=1; i<n; i++)
    {      int flag=1;
        for(int j=i-1; j>=0; j--)
        {
            if (str[i]==str[j]){
                flag=0;
                break;
            }


        }
        if(flag==1){
            count++;
        }
    }



    if(count%2==0){
        puts("CHAT WITH HER!");
    }
    else {
        puts("IGNORE HIM!");
    }

    return 0;
}
