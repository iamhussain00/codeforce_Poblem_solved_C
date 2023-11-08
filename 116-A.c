#include<stdio.h>

int main(){
int n;
scanf("%d",&n);


int t=0,min=0;
for(int i=0;i<n;i++){

    int a1,b1;
scanf("%d %d",&a1,&b1);

  t=t-a1+b1;

  printf("%d\n",t);
  if(t>min){
    min=t;
  }


}
printf("%d\n",min);

return 0;

}
