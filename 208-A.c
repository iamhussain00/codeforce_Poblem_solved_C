#include<stdio.h>
#include<string.h>

int main(){
while(1){
char s[202],orginal[202];
scanf("%s",&s);
int k=0;
for(int i=0;s[i]!='\0';){
    if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
        i+=3;
    }
    else{


            if(s[i+1]=='W' && s[i+2]=='U' && s[i+3]=='B'){

            orginal[k]=s[i];
            k++;
            orginal[k]=' ';

            }
            else{
                orginal[k]=s[i];

            }
            k++;
            i++;

    }
}
orginal[k]='\0';
if(orginal[k-1]==' '){
    orginal[k-1]='\0';
}


/*for(int i=0;orginal[i]!='\0';i++){
    printf("%c",orginal[i]);
}*/
puts(orginal);

}
}
