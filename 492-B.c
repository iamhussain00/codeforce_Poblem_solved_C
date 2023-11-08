#include<stdio.h>
void bubblesort(int arr[],int n)
{
    for (int i=0; i<n-1; i++)
    {    int flag=0;
        for(int j=0; j<n-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}
int main()
{
    int n,l;

    scanf("%d %d",&n,&l);

    int m;
 int x1[n],y1[n+1];

 for(int i=0;i<n;i++){
    scanf("%d",&x1[i]);
 }

bubblesort(x1,n);




y1[0]=x1[0];
y1[n]=l-x1[n-1];

if(y1[0]>y1[n]){
    m=2*y1[0];
}
else{
    m=2*y1[n];
}

for(int i=0;i<n-1;i++){
    y1[i+1]=x1[i+1]-x1[i];
    if(y1[i+1]>m){
        m=y1[i+1];
    }
 }
 double d=(double)m/2;

 printf("%0.10lf\n",d);

 return 0;
}
