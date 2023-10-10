#include <iostream>

struct Array {
    int *A;
    int size;
    int length;
};

void display(struct Array arr){
    for(int i = 0; i < arr.length; i++){
        std::cout << arr.A[i] << " ";
    } 
    std::cout << std::endl; 
}

void insert(struct Array *arr,int index,int x){
    if (index >= 0 && index <= arr->length) { // Agrega una verificación de índice válido
        for(int i=arr->length;i>index;i--){ //recorremos el array
            arr->A[i]=arr->A[i-1]; //cambiamos el valor del array
        }
        arr->A[index]=x; //añadimos el elemento x al array
        arr->length++; //aumentamos el tamaño del array 
    } else { // Si el índice no es válido, imprima un mensaje de error
        std::cout<<"Índice no válido" << std::endl;
    }
}


void Add(struct Array *arr ,int x){  //añadir un elemento al array

    if(arr->length<arr->size){ //si el tamaño del array es menor que la capacidad del array
        arr->A[arr->length++]=x; //añadimos el elemento x al array
    }else{
        std::cout<<"No hay espacio suficiente";
    }
    arr->length++; //aumentamos el tamaño del array
}

int main(){ 
    struct Array arr; //creamos un array
    int n;  //numero de elementos
    std::cout<<"Enter the size of the array "; 
    std::cin>>arr.size; //tamaño del array 
    arr.A=new int[arr.size]; //creamos el array
    arr.length=0; //tamaño del array
 
    std::cout<<"Enter the number of numbers "; //numero de elementos
    std::cin>>n;

    std::cout<<"Enter all the elements " <<std::endl; //introducimos los elementos
    for(int i=0;i<n;i++){
        std::cin>>arr.A[i];
        arr.length++; //aumentamos el tamaño del array
    }
    
    display(arr); //mostramos el array
    insert(&arr,2,5); //insertamos un elemento en el array
    Add(&arr,10); //añadimos un elemento al array
    display(arr); //mostramos el array
    delete[] arr.A; //eliminamos el array


    return 0;

}