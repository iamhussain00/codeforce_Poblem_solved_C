#include<stdio.h>

int main(){
  int k,l,m,n,d;

  scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);
  int count=0;
  if(k==1){
    printf("%d\n",d);
  }

  else{
        int s=d;
    while(s!=0){
        if((s%k==0)||
           (s%l==0 && s%k!=0)||
           (s%m==0 && s%l!=0 && s%k!=0 )||
           (s%n==0 && s%m!=0 && s%l!=0 && s%k!=0 )){
            count++;
           }
       s--;
    }
    printf("%d\n",count);
  }

return 0;}
