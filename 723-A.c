
#include<stdio.h>

int main(){

int x1,x2,x3;

scanf("%d %d %d",&x1,&x2,&x3);

int x,y,z;
if((x1<=x2 && x2<=x3)||(x1>=x2 && x2>=x3)){
    x=x2;
    y=x-x1;
    if(y<0){
        y*=-1;
    }
    z=x-x3;
    if(z<0){
        z*=-1;
    }
}
else if((x2<=x1 && x1<=x3)||(x2>=x1 && x1>=x3)){
    x=x1;
    y=x-x2;
    if(y<0){
        y*=-1;
    }
    z=x-x3;
    if(z<0){
        z*=-1;
    }
}
else {
        x=x3;
    y=x-x2;
    if(y<0){
        y*=-1;
    }
    z=x-x1;
    if(z<0){
        z*=-1;
    }

}

printf("%d\n",y+z);
}
