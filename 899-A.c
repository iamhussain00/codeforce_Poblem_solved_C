#include<stdio.h>

int main(){
int t;
scanf("%d",&t);

for(int i=0;i<t;i++){
        int n;
     scanf("%d",&n);

     int arr[n+2];
     for(int i=0;i<n;i++){
          scanf("%d",&arr[i]);
     }
     int m;
     if(arr[0]==1)
        m=2;
     else
        m=1;

        int k=m+1;
     for(int i=1;i<n;i++){
           if(arr[i]==k){
            k++;
           }
           k++;
     }

     printf("%d\n",k-1);

}

return 0;
}
