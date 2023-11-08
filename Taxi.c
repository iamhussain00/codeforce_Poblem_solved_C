#include<stdio.h>

int main(){
int n;
scanf("%d",&n);

int arr[n+2],c1=0,c2=0,c3=0,c4=0;

for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    switch (arr[i]) {
        case 1:
            c1++;
            break;

        case 2:
            c2++;
            break;

        case 3:
            c3++;
            break;

        default:
            c4++;
            break;
    }
}

int count=c4+c3;

int x=c1-c3;
if(x<0){
        x=0;
}


int sum=(1*x)+(2*c2);
if(sum%4==0){
    count=count+(sum/4);
}
else{
    count=count+(sum/4)+1;
}




printf("%d\n",count);

return 0;

}
