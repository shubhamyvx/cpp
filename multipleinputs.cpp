//Take an integer, a floating-point number, and a character as input and display them.
#include<iostream>
int main(){
    int num;
    float dec;
    char alpha;
    std::cout<<"Enter integer number"<<std::endl;
    std::cin>>num;
    std::cout<<"Enter float number"<<std::endl;
    std::cin>>dec;
    std::cout<<"Enter character"<<std::endl;
    std::cin>>alpha;

    std::cout<<"Entered integer number"<< num<<std::endl;
    std::cout<<"Entered float number"<< dec<<std::endl;
    std::cout<<"Entered character"<< alpha<<std::endl;
    return 0;
}