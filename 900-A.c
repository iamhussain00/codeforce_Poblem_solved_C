#include<stdio.h>

int main(){
 int t;
 scanf("%d",&t);

 for(int i=0;i<t;i++){
    int n,k,count=0;
    scanf("%d %d",&n,&k);

    int arr[n+10];
    for(int i=0;i<n;i++){

            scanf("%d",&arr[i]);
            if(arr[i]==k){
                count++;
            }
    }
    if(count>=1){
        printf("YES\n");
    }

    else{
        printf("NO\n");
    }
 }
 return 0;
}
