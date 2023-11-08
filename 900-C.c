#include<stdio.h>

int main(){
 int t;
 scanf("%d",&t);

 for(int i=0;i<t;i++){
    long long n,k,x,sum1,sum2;
    scanf("%lld %lld %lld",&n,&k,&x);


        sum1=(k*(k+1))/2;

        long long k1=n-k;

        sum2=(((n*(n+1))/2)-((k1*(k1+1))/2));

        printf("%lld %lld",sum1,sum2);

    if(x>=sum1 && x<=sum2){
        printf("YES\n");
    }
    else{
         printf("NO\n");
    }
 }
 return 0;
}
