#include<stdio.h>


int main()
{
int n;

scanf("%d",&n);

int arr[n];
for(int i=0;i<n;i++){
   scanf("%d",&arr[i]);
}

for(int i=0;i<n-1;i++){
    int flag=0;
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag=1;
        }
    }
    if(flag==0){
        break;
    }
}
for(int i=0;i<n-1;i++){
   printf("%d ",arr[i]);
}
printf("%d",arr[n-1]);

return 0;
}
