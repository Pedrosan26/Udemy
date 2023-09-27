#include <iostream>
#include <stdlib.h>

int main(){
    int *p; 
    //Un puntero con arrays en C
    //p=(int *) /* Como malloc regresa un void pointer, entonces debeos de darle el tipo de puntero que sera*/malloc(5*sizeof(int)); //malloc accede al heap memory, pero debe de tener como argumento el tamano en bytes que utilizaras

    //alocar memoria del heap en c++
    p=new int[5];

    
} 