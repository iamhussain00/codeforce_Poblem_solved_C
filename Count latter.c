#include<stdio.h>
#include<string.h>

int main(){
char str[1111];

scanf("%s",str);
int n=strlen(str);
for (int i=0;i<n-2;i++){
    int flag=0;
    for (int j=0;j<n-1;j++){
        if (str[i]>str[i+1]){
            int temp=str[i];
            str[i]=str[i+1];
            str[i+1]=temp;
            flag=1;
        }

    }
    if (flag==0) break;
}

for (int i=0;i<n;i++){
    for (int i=1;i<n;i++){

    }
}


}
return 0;}

