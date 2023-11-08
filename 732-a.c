#include<stdio.h>


int main(){

int k1,r;
scanf("%d %d",&k1,&r);
int i=1,k=k1;

while(k1%10!=0){

        if(k1%10==r){
            break;
        }
        i++;
    k1=k*i;

}


printf("%d\n",i);
}
