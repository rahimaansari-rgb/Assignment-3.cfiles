#include <cs50.h>
#include <stdio.h>
int main(void){
    string s[3];
    for(int i=0;i<3;i++) s[i]=get_string("Name: ");
    for(int i=0;i<3;i++) printf("%s\n",s[i]);
}
