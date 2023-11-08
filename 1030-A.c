#include<stdio.h>


int main(){
    int y,sum=0;
    scanf("%d",&y);
   int arr[y];

   for(int i=0;i<y;i++){
    scanf("%d",&arr[i]);
    sum+=arr[i];
   }
   if(sum>0){
    printf("HARD\n");
   }
   else{
    printf("EASY\n");
   }

   return 0;
}
