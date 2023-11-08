#include<stdio.h>
#include<string.h>

int main(){

    char str[]="ali hussain";
    int x=strlen(str);//length
    printf("%d\n",x);

    //strcpy(new string,oldstring)
    char str2[x+1];
    strcpy(str2,str);//deep copy
    puts(str2);

    //strcat(str1,str2)=
    //concat str1 with s2 and stores the result in s1
    //the size of s1 should have enough space to store s2
    char string1[15]="i am";
    char string2[10]="i you";
    strcat(string1,string2);
    puts(string1);

    //strcmp
    //compares the two string
    strcmp(string1,string2);
    return 0;}
