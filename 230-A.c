#include<stdio.h>
void bubblesort(int arr[],int n,int arr2[],int n2)
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

                int temp1=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=temp1;

                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}
int main()
{
    int n,s;

    scanf("%d %d",&s,&n);

    int flag=0;
 int x1[n],y1[n];

for(int i=0;i<n;i++){

    scanf("%d %d",&x1[i],&y1[i]);


}
bubblesort(x1,n,y1,n);
for(int i=0;i<n;i++){
    if(x1[i]<s){
        s+=y1[i];
        flag++;
    }
}


 if(flag>=n)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
