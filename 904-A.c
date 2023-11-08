#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;

    scanf("%d",&t);

    while(t--)
    {
       char s[5];
       int n,k,r,count=0;
       scanf("%s",s);

       if(s[0]=='0'){
            n=10;
        count+=n;

       }
       else{
            n=(s[0]-48);
        count+=n;


       }

       for(int i=1;i<4;i++){
        if(s[i]=='0'){

            count+=(10-n+1);
            n=10;

        }
        else{
            k=s[i]-48;
            r=abs(k-n);
            n=k;
            count+=(r+1);

        }

       }

       printf("%d\n",count);
    }
}
