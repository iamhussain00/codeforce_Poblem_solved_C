#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        long long a,b,n;
        scanf("%lld %lld %lld",&a,&b,&n);

        long long arr[n+1];

        long long sum=b-1;
        for(int i=0; i<n; i++)
        {
            scanf("%lld",&arr[i]);
            if(arr[i]<a)
            {
               sum+=(arr[i]);
            }
            else if (arr[i]>=a){
                sum+=(a-1);
            }

        }



        printf("%lld\n",sum+1);


    }

    return 0;
}





