#include<stdio.h>


int main(){
int t;
scanf("%d",&t);

while(t--){
    int n;
    scanf("%d",&n);

    int arr[n],drr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

        drr[i]=arr[i]-i;

    }

    /*for(int i=0;i<n-1;i++){
        int flag=0;
        for(int j=0;j<n-i-1;j++){
            if(drr[j]>drr[j+1]){
                int temp=drr[j];
                drr[j]=drr[j+1];
                drr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }*/
    for(int i=0;i<n-1;i++){

    }
    int count=1,sum=0;
    for(int i=0;i<n;i++){
        if(drr[i]==drr[i+1]){
            count++;
        }
        else{

            sum+=((count*(count-1))/2);
        count=1;
        }
    }

    printf("%d\n",sum);
}
return 0;
}
