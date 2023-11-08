#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0; i<t; i++)
    {
        int n,x,min=INT_MAX,h1=0,m;

        scanf("%d %d",&n,&x);

        int arr[n];

        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]<min)
            {
                min=arr[i];
            }

        }
        int h=min;
        while(h1<=x)
        {
            h1=0;
            for(int i=0; i<n; i++)
            {

                m=h-arr[i];
                if(m>0)
                {
                    h1+=m;


                }


            }


            h++;

        }

        printf("%d\n",h-2);

    }

    return 0;
}
