#include<stdio.h>
#include<limits.h>

int main(){

    int n;
    scanf("%d",&n);



    int arr[n];

    for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
    }
    int x=arr[0],count=1;
    long long sum=x,max=-1,maxcount=1;
    for(int j=1;j<n;j++){
      if(arr[j]>=x){
        sum+=arr[j];
        count++;
        if(j==n-1 ){
            if(max<sum){
                max=sum;
                maxcount=count;
                break;
            }
            else{
                break;
            }
        }
        x=arr[j];


      }
      else{
        x=arr[j];
        if(sum>max){
          max=sum;
          maxcount=count;
        }
        sum=x;
        count=1;

      }
    }

  printf("%lld\n",maxcount);

}
