#include<stdio.h>

int main(){
int m;
scanf("%d",&m);
int sum=0,count=0;
for(int i=0;i<m;i++){
    int x;
    scanf("%d",&x);
    sum+=x;

    if(sum<0){
        count++;
        sum=0;
    }
}
printf("%d\n",count);

return 0;
}
