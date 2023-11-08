#include<stdio.h>
#include<string.h>

int main(){
int t;
scanf("%d",&t);

for(int i=0;i<t;i++){
  int sum=0;
for(int i=1;i<=10;i++){
         char str[11];
        scanf("%s",str);
        if(i<=5){
            for(int j=1;j<=5;j++){
                if (j<i &&  str[j-1]=='X'){
                    sum+=j;
                }
                else if(str[j-1]=='X'){
                    sum+=i;

                }
            }
            for(int k=5,c=5;k>=1,c<10;k--,c++){
                if (k>=i && str[c]=='X'){
                    sum+=i;
                }
                else if(str[c]=='X'){
                    sum+=k;
                }
            }

        }


        else{

            for(int j=1;j<=5;j++){
                if (j<=11-i && str[j-1]=='X'){
                    sum+=j;
                }
                else if(str[j-1]=='X'){
                    sum+=11-i;
                }
            }
              for(int k=5,c2=5;k>=1,c2<10;k--,c2++){
                if (k>=11-i && str[c2]=='X'){
                    sum+=11-i;
                }
                else if(str[c2]=='X'){
                    sum+=k;
                }
            }


        }
}
printf("%d\n",sum);
}

return 0;}
