#include<stdio.h>

int main(){
 int t;
 scanf("%d",&t);

 for(int i=0;i<t;i++){
    int n,k;
    scanf("%d",&n);
      int arr[n+10];

      k=3;
      arr[0]=k;
      for(int i=1;i<n;i++){
            k+=2;
        arr[i]=k;

      }
      for(int i=0;i<n-1;i++){
            printf("%d ",arr[i]);
      }
      printf("%d",arr[n-1]);
      printf("\n");
 }
 return 0;
}
