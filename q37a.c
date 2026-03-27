#include <cs50.h>
#include <stdio.h>
int main(void){
    int a[5];
    for(int i=0;i<5;i++) a[i]=get_int("Enter: ");
    for(int i=0;i<5;i++) printf("%d ",a[i]);
}
