#include <iostream>

struct Array {
    int A[20];
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

int del(struct Array *arr,int index){
    int element;

    element=arr->A[index];
    for(int i=index;i<arr->length-1;i++){
        arr->A[i]=arr->A[i+1];
        element=arr->A[i];
    }
    arr->length--;
    return element;
}


void Add(struct Array *arr ,int x){  //añadir un elemento al array

    if(arr->length<arr->size){ //si el tamaño del array es menor que la capacidad del array
        arr->A[arr->length++]=x; //añadimos el elemento x al array
    }else{
        std::cout<<"No hay espacio suficiente";
    }
    arr->length++; //aumentamos el tamaño del array
}

int LinearSearch(struct Array *arr, int key) {
    for (int i = 0; i < arr->length; i++) {
        if (arr->A[i] == key) {
            return i; // Devuelve el índice del elemento encontrado
        }
    }
    return -1; // Elemento no encontrado
}

int BinarySearch(struct Array *arr,int key){
    int low=0;
    int high=arr->length-1;
    
    while (low<=high){
        int mid=(low+high)/2;
        if(arr->A[mid]==key){
            return mid;
        }
        else if(arr->A[mid]<key){
            low=mid+1;
        }
        else if(arr->A[mid] >key){
            high=mid-1;
            
        }
    }
    return -1;
}

int main(){ 
    struct Array arr={{1,2,3,4,5},20,5}; //creamos un array
    // insert(&arr,2,5); //insertamos un elemento en el array
    // Add(&arr,10); //añadimos un elemento al array
    // display(arr); //mostramos el array
    // del(&arr,3);
    // display(arr);
    // Add(&arr,30); //añadimos un elemento al array
    // Add(&arr,23); //añadimos un elemento al array
    // Add(&arr,134); //añadimos un elemento al array
    // Add(&arr,10); //añadimos un elemento al array
    // Add(&arr,10); //añadimos un elemento al array
    display(arr); //mostramos el array

    int indiceEncontrado=LinearSearch(&arr, 3);
    std::cout << "El elemento se encuentra en el indice: " << indiceEncontrado << std::endl;

    int indiceEncontrado2=BinarySearch(&arr, 3);
    std::cout << "El elemento se encuentra en el indice: " << indiceEncontrado2 << std::endl;


    return 0;

}