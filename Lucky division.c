#include<stdio.h>

int main()
{
    int n,flag=0;
    scanf("%d",&n);

    if(n%4==0 || n%7==0|| n%47==0 || n%447==0 || n%474==0 || n%447==0  || n%74==0 )
    {
        flag=1;

    }
    else
    {
        int arr[5],count=0;
        int i=0;
        while(n!=0)
        {
            arr[i]=n%10;
            n=n/10;
            i++;
        }

        for(int j=0; j<i; j++)
        {
            if(arr[j]==4 || arr[j]==7)
            {
                count++;
            }
        }
        if(count==i)
        {
            flag=1;

        }
    }

    if(flag==1)
        printf("YES\n");
    else
        printf("NO\n");


    return 0;
}
