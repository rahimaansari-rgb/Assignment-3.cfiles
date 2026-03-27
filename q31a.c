#include <cs50.h>
#include <stdio.h>

int main(void){
    int m = get_int("Marks: ");

    if(m<0 || m>100) printf("invalid");
    
    else if(m>=80) printf("A");

    else if(m>=70) printf("B");

    else if(m>=60) printf("C");

    else if(m>=50) printf("D");

    else printf("F");
}
