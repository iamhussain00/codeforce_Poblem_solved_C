#include<stdio.h>

int main(){
int t;

scanf("%d",&t);

while(t--){
    int n;
    scanf("%d",&n);
    int arr[n+1],sum=0;

    for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];

    }
    sum*=(-1);
    printf("%d\n",sum);
}

return 0;

}
