#include <iostream>

void swap (int*x,int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}

int main(){
    int num1=10,num2=20;
    swap(&num1,&num2);

    std::cout<<"Primer numero "<<num1<<" "<<"SEgundo "<<num2;

    return 0;
}