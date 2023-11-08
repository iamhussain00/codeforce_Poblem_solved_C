#include<stdio.h>


int main(){
int n;
scanf("%d",&n);

int arr[n],min=0,max=0;

int count=0;
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    if(i==0){
        min=arr[0];
        max=arr[0];
    }
    if(i>0){
    if(arr[i]<min){
        count++;
        min=arr[i];
    }
    else if(arr[i]>max){
        count++;
        max=arr[i];
    }
    }
}

printf("%d\n",count);

return 0;
}
