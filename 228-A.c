#include<stdio.h>


int main()
{

    int arr[4];
    for(int i=0; i<4; i++)
    {
        scanf("%d",&arr[i]);
    }
    int ch=-1,count=0;
    for(int i=0; i<4; i++)
    {
        for(int j=i+1; j<4; j++)
        {
            if(arr[i]>ch)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    arr[j]=ch;
                }
            }
        }
    }
    printf("%d\n",count);
}

