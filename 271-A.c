#include<stdio.h>


int main(){
    int y,n;
    scanf("%d",&y);

    int i=0;
    while(y++){
            int a,b,c,d;
    n=y;
    a=n%10;
    n/=10;
    b=n%10;
    n/=10;
    c=n%10;
    n/=10;
    d=n%10;
    if(a==b || a==c || a==d || b==c || b==d || d==c  ){
      continue;
    }
    else {
        printf("%d\n",y);
        break;
    }

}



return 0;}
