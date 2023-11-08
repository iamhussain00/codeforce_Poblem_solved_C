#include<stdio.h>
#include<limits.h>
int main(){
int t;
scanf("%d",&t);

for(int i=0;i<t;i++){
        int n,min=INT_MAX,ind=0,pr=1;
scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
       if(arr[i]<min){
        min=arr[i];
        ind=i;
       }
}
for(int i=0;i<n;i++){
         if(i==ind){
            arr[i]++;
         }
         pr=pr*arr[i];
}

printf("%d\n",pr);
}
return 0;

}

