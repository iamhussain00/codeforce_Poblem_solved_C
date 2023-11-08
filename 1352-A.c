#include <stdio.h>
int main()
{
 int t;
 scanf("%d",&t);

 while(t--){

 	int n;
 	scanf("%d",&n);
 	int a=n,i=0,x=1,k=0;
 	int arr[5];
 	while(a!=0){
 		arr[i]=(a%10)*x;
 		if(arr[i]>0){
 			k++;
 		}
 		i++;
 		x*=10;
 		a/=10;
 	}
 	printf("%d\n",k);

 	for(int s=0;s<i-1;s++){
    if(arr[s]>0){
        printf("%d ",arr[s]);
    }
 	}

 	printf("%d\n",arr[i-1]);


 }

    return 0;
}
