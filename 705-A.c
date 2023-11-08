#include<stdio.h>


int main()
{
int n;

scanf("%d",&n);


for(int i=1;i<=n;i++){
    if(i%2==1 && i!=n){
        printf("I hate ");
        printf("that ");
    }
    else if(i%2==1 && i==n){
        printf("I hate ");
        printf("it");
    }
    if(i%2==0 && i!=n){
        printf("I love ");
        printf("that ");
    }
    else if(i%2==0 && i==n){
        printf("I love ");
        printf("it");
    }

}
return 0;
}
