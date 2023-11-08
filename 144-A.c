#include<stdio.h>
#include<limits.h>


int main(){

int n;
scanf("%d",&n);

int arr[n],max=INT_MIN,min=INT_MAX;

int indmax,indmin;
for(int i=0;i<n;i++){
   scanf("%d",&arr[i]);
   if(arr[i]>max){
    max=arr[i];
    indmax=i;

   }
   if(arr[i]<=min){
    min=arr[i];
    indmin=i;

   }
}
int moves;
if((indmin==indmax)|| (indmax==0 && indmin==n-1)){
    moves=0;
}
else if(indmin<indmax){
    moves=indmax+(n-1-indmin-1);
}
else{
    moves=indmax+(n-1-indmin);
}

printf("%d\n",moves);

return 0;

}
