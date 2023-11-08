#include<stdio.h>
#include<math.h>

int main()
{   int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    int x,y,z;



    scanf("%d %d %d",&x,&y,&z);



    float t1,t2;

    t1=x/(float)y;
    t2=x/(float)z;
    t1=ceil(t1);
    t2=ceil(t2);

     int T1=(int)t1;
     int T2=(int)t2;

     if (T1>T2){
            printf("%d\n",T1-T2-1);

     }
     else{
        printf("-1\n");
     }

    }

   return 0;
}

