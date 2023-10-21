#include <iostream>

int main(){
    int n;
    std::cout<<"Include the size of the array"<<std::endl;
    std::cin>>n;
    int A[n];

    for(int i=0;i<n;i++){
        std::cout<<"Include the value of the array"<<std::endl; 
        std::cin>>A[i]; //read the value of the array n times and include it in the array
    }

    std::cout<<"The values of the array are"<<std::endl;
    std::cout<<"--------------------------"<<std::endl;

    for (int i=0;i<n;i++){
        std::cout << i << " - " <<A[i]<<std::endl;
    }

    //complexity O(n)

}