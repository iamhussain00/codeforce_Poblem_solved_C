#include<stdio.h>
#include<string.h>
void bubblesort(char arr[],int n)
{
    for (int i=1; i<=n-1; i++)
    {    int flag=0;//this will save our time ,
        for(int j=0; j<=n-1-i; j++)
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
int main(){
char host[202],guest[101],mixed[202];
scanf("%s",host);
scanf("%s",guest);
scanf("%s",mixed);
int x=strlen(mixed);

bubblesort(mixed,x);

strcat(host,guest);

int n=strlen(host);
bubblesort(host,n);
int z=strcmp(host,mixed);
if(z==0){
    puts("YES");
}
else{
    puts("NO");
}



}
