#include <iostream>

struct Rectangle{
        int length;
        int breadth; 
};


int main(){
    
    // struct Rectangle r; //Declaration
    Rectangle r={10,5}; //Declaration and initialation
    r.length=15;

    printf("The area of the rectangle is= %d",r.length*r.breadth);

    return 0;
}