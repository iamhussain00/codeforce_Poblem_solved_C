#include<stdio.h>
void bublesort(int arr[],int n){
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
}
int main(){

int n,m;

scanf("%d %d",&n,&m);

int arr[m];
for(int i=0;i<m;i++){
    scanf("%d",&arr[i]);

}
bublesort(arr,m);
int min=arr[m-1]-arr[0];
for(int k=0;k<=m-n;k++){
    if(arr[k+n-1]-arr[k]<min){
        min=arr[k+n-1]-arr[k];
    }
}
printf("%d\n",min);


}
