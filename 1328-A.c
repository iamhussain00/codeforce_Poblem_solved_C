#include<stdio.h>


int main(){

int n;
scanf("%d",&n);

while(n--){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%b==0){
        printf("0\n");
    }
    else{
        int x=b-(a%b);
        printf("%d\n",x);
    }
}
return 0;}
