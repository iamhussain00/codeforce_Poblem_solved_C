#include<stdio.h>

int main()
{
    long long n,k,z;

    scanf("%lld %lld",&n,&k);

    long long x=((n-1)/2)+1;
    if(k>x){
       z=2*(k-x);
       printf("%lld\n",z);
    }
    else{
        z=(2*k-1);
       printf("%lld\n",z);
    }
return 0;
}


