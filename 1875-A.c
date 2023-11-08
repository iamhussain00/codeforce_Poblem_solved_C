#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        long long a,b,n,count=0;
        scanf("%lld %lld %lld",&a,&b,&n);

        long long arr[n+1];

        long long sum=0;
        for(int i=0; i<n; i++)
        {
            scanf("%lld",&arr[i]);
            if(arr[i]>=a)
            {
                arr[i]=a;
                count++;
            }
            sum+=arr[i];
        }

   if(count>0){

        printf("%lld\n",sum+b-1);
   }
   else{
    printf("%lld\n",sum+b);
   }
    }




    return 0;
}
