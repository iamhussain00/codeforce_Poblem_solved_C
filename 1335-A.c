#include<stdio.h>

int main(){

int n;
scanf("%d",&n);

while(n--){
   int a;
scanf("%d",&a);

if(a%2==0){
    printf("%d\n",(a/2)-1);
}
else{
    printf("%d\n",(a/2));
}
}
return 0;
}
