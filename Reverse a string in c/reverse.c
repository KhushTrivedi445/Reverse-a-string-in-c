#include<stdio.h>

int main () {
    char a[30];
    gets(a);
int count =0;
for(int i=0; a[i];i++) {
    count++;
}
//printf("The length of the string is %d",count);

int n=count; //Here value of count is stored in n
for (int i=n-1;i>=0;i--){
    printf("%c",a[i]);
}













    return 0;
}
