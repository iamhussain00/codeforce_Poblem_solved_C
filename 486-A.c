#include<stdio.h>

int main()
{
    long long n;

    scanf("%lld",&n);

if(n%2==0){
    long long x=n/2;
    printf("%lld\n",x);

}
else{
    n++;
    long long x=n/2;
    long long z=(-1)*x;
    printf("%lld\n",z);
}

return 0;
}
