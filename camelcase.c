#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main(){

char camel[50];
gets(camel);
for(int i=0;camel[i]!='\0';i++){
    if(i==0){
        camel[i]=toupper(camel[i]);
    }
    if(camel[i]==' '){
        camel[i+1]=toupper(camel[i+1]);
    }
}
puts(camel);



}
