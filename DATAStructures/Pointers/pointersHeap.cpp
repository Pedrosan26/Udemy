#include <iostream>
#include <stdlib.h>

int main(){
    
    //Un puntero con arrays en C
    //p=(int *) /* Como malloc regresa un void pointer, entonces debeos de darle el tipo de puntero que sera*/malloc(5*sizeof(int)); //malloc accede al heap memory, pero debe de tener como argumento el tamano en bytes que utilizaras

    //alocar memoria del heap en c++
    //int A[5]={1,2,3,4,5}; 
    int *p;
    // p=A;
    p=new(int[5]);
    p[0]=5;p[1]=10;p[2]=15;p[3]=20;p[4]=25;

    for(int i=0;i<5;i++){
        std::cout<<p[i]<<" ";
    }

    delete [ ]p;

    return 0;
    
} 