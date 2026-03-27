#include <cs50.h>
#include <stdio.h>
int main(void){
    int a = get_int("Enter: ");
    if(a>0) printf("Positive");
    else if(a<0) printf("Negative");
    else printf("Zero");
}
