#include<stdio.h>

int main(){
int k;

scanf("%d",&k);
int s=k/5;


if(k%5==0){
    printf("%d\n",s);
}
else{
    printf("%d\n",s+1);
}

return 0;
}

