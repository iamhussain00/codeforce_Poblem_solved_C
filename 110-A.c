#include<stdio.h>

int main(){
long long n;
scanf("%lld",&n);
int check=0,rem;

while(n!=0){
    rem=n%10;
    n/=10;
    if(rem==4 || rem==7){
        check++;
    }

}

if(check==4 || check==7){
   puts("YES");
}

else{
    puts("NO");

}

return 0;
}




