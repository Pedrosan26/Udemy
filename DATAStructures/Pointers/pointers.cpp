#include <iostream>



int main(){

    int a=10; // a is an integer variable
    int *p; // p is a pointer variable

    p=&a; // p is pointing to the address of a

    printf("%d",*p); // *p is the value of the address that p is pointing to

    return 0;

    

} // in this function we are not using the heap memory, we are using the stack memory