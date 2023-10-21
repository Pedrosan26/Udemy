#include <iostream>
#include <vector> 



int binarySearch(std::vector<int> &v,int key){
    int low=0;
    int high=v.size();

    while(low<high){
        int mid=(low+high)/2;
        if (v[mid]==key){
            return mid;
        }
        else if(v[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    return -1;
}

int main(){
    std::vector<int> v={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,17,21,25,29,65,234,236};
    int binary=binarySearch(v,7);
    std::cout<<"El numero se encontro en la posicion: "<<binary<<std::endl;
}
