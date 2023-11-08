#include<stdio.h>

int main(){
int n,m,a,b;
scanf("%d %d %d %d",&n,&m,&a,&b);

float x=(float)b/m;

int results;
float y=(float)a;

if(x>=y){

    results=n*a;
}

    else{
            int p=m;
        results=0;
        while(p<n){
            results+=b;
            p+=m;
        }
        p-=m;
        int t=n-p;

        if(a*t<b)
         {results+=(a*t);}
        else
        {
          results+=b;
        }
    }



printf("%d\n",results);
return 0;}
