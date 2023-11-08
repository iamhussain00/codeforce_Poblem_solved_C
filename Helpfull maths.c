#include<stdio.h>
#include<string.h>

int main()
{

    char str[101];

    scanf("%s",str);
    int n=strlen(str);
     for (int i=0; i<n/2; i++)
    {    int flag=0,k=0;//this will save our time ,
        for(int j=0; j<n-2-k; j+=2)
        {
            if (str[j]>str[j+2])
            {
                int temp=str[j];
                str[j]=str[j+2];
                str[j+2]=temp;

                flag=1;
            }
        }
        if(flag==0)
            break;

            k+=2;
    }

    puts(str);

    return 0;
}

