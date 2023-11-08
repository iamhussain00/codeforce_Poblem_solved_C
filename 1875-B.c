#include<stdio.h>
#include<limits.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        long long a,b,k,sum=0;
        long long mina=INT_MAX,maxb=INT_MIN,maxa=INT_MIN,minb=INT_MAX;
        scanf("%lld %lld %lld",&a,&b,&k);

       long long arr[a],arr2[b];
       for(int i=0;i<a; i++)
        {
          scanf("%lld",&arr[i]);

            if(arr[i]<mina)
            {
               mina=arr[i];
            }
            if(arr[i]>maxa)
            {
               maxa=arr[i];


            }


            sum+=arr[i];


        }
        for(int i=0;i<b; i++)
        {
          scanf("%lld",&arr2[i]);


            if(arr2[i]>maxb)
            {
               maxb=arr2[i];


            }
            if(arr2[i]<minb)
            {
               minb=arr2[i];


            }



        }



       if(k%2==1 && mina<maxb){
        sum=sum-mina+maxb;
       }
       if(k%2==0 && maxb>maxa && minb>mina){
          sum=sum;
       }
       else if( k%2==0 && maxb<maxa && minb>mina ){
          sum=sum-maxa+maxb;
       }
       else if( k%2==0 && maxb>maxa && minb<mina ){
          sum=sum-mina+minb;
       }
       else if( k%2==0 && maxb<=maxa && minb<=mina ){
          sum=sum-mina+minb-maxa+minb;
       }

   printf("%lld\n",sum);
    }
    return 0;
}
