#include <cs50.h>
#include <stdio.h>
int main(void){
    int age = get_int("Age: ");
    int c = get_int("Citizen(1/0): ");

    if(age>=18){
        if(c==1) printf("Eligible");
        else printf("Not Citizen");
    }
    else printf("Under Age");
}
