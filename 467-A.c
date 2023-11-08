#include<stdio.h>

int main(){
int n,count=0;

scanf("%d",&n);
for(int i=0;i<n;i++){
    int a,b;
    scanf("%d %d",&a,&b);
    int x=b-a;
    if(x>=2){
        count++;
    }
}

printf("%d\n",count);
return 0;
}
