#include <iostream>

struct Rectangle{
    int length;
    int breadth;
};

int main(){




    // metodo de acceso con punteros dlechas 

    /*
    Rectangle r={10,5};
    Rectangle *p= &r;

    p->length=20;

    std::cout<<r.length;

    */

   Rectangle *p;
    p=new Rectangle;
    p->length=15;
    p->breadth=7;

    std::cout<<p->length<<" "<<p->breadth;

    delete p;
    return 0;
}