
#include<stdio.h>


int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    char x[n+1],s[m+1];

    scanf("%s",x);
    scanf("%s",s);
    int flag=1;
    for(int i=0;i<=n;i++){

        for(int j=0;i<=m;j++){
            if(s[j]!=s[i]){
                flag=0;
                break;
            }
        }
    }
    if(flag==0){
        printf("-1\n");
    }
    else {

    }
    return 0;
}
