#include<stdio.h>

int main(){
int n;
scanf("%d",&n);

int home[n],away[n],count=0;

for(int i=0;i<n;i++){
    scanf("%d %d",&home[i],&away[i]);
}
for(int i=0;i<n;i++){
    for(int k=0;k<n;k++){
        if(i==k){
            continue;
        }
        else{
            if(home[i]==away[k]){
                count++;
            }
        }
    }
}

printf("%d\n",count);


}
