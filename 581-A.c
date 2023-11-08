#include<stdio.h>

int main(){
int r,b;
scanf("%d %d",&r,&b);

int d,s;
if(r>=b){
    d=b;
    r-=b;
    s=r/2;
}
else{
    d=r;
    b-=r;
    s=b/2;
}

printf("%d %d\n",d,s);
return 0;

}
