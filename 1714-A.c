#include<stdio.h>

int main()
{ int t;
scanf("%d",&t);
while(t--){


    int n,h,m;

    scanf("%d %d %d",&n,&h,&m);

   int h1,m1,nh,nm;



   int minH=25,minM=70;

   for (int i=0;i<=n-1;i++){

   scanf("%d %d",&h1,&m1);

   if(h<=h1 && m<=m1){
    nh=h1-h;
    nm=m1-m;
   }
   else if(h==h1 && m>m1){
    nh=23;
    nm=60-m+m1;
   }
   else if(h<h1 && m>m1){
    nh=h1-h-1;
    nm=60-m+m1;
   }
   else if(h>h1 && m>m1){
    nh=23-h+h1;
    nm=60-m+m1;
   }
   else if(h>h1 && m<=m1){
    nh=24-h+h1;
    nm=m1-m;
   }

   if (nh<minH){
    minH=nh;
    minM=nm;
   }
   else if(nh==minH && minM>nm){
    minH=nh;
    minM=nm;
   }

   }

   printf("%d %d\n",minH,minM);


   }

   return 0;
}
