# include<stdio.h>
int main(){
    char s[]="priya";
    int len=0;
    while(s[len]!='\0'){
        len++;
    }
   printf("The length of string is %d\n",len);
    

    for(int i=0;i<((len-1)/2);i++){
        char temp;
        temp=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=temp;
        }
    printf("The reverse of string is %s\n",s);
    return 0;
}