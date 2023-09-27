#include <iostream>


struct Student{
    int rolll;
    std::string name;
    std::string department;
    std::string address;
};

int main(){
    Student S;

    std::cout<<"Put your ID number"<<std::endl;
    std::cin>>S.rolll;

    std::cout<<"Put your name"<<std::endl;
    std::cin>>S.name;

    std::cout<<"Put your department"<<std::endl;
    std::cin>>S.department;

    std::cout<<"Put your address"<<std::endl;
    std::cin>>S.address;

    std::cout<<"Your ID number is: "<<S.rolll<<std::endl;
    std::cout<<"Your name is: "<<S.name<<std::endl;
    std::cout<<"Your department is: "<<S.department<<std::endl;
    std::cout<<"Your address is: "<<S.address<<std::endl;

    return 0;
}