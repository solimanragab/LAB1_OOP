#include<iostream>
#include "../include/position.h"
#include "../include/color.h"
#include "../include/magicSquare.h"


const std::string BLACK = "\033[30m";
const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";
const std::string GREEN  = "\033[32m";
const std::string YELLOW  ="\033[33m";
const std::string BLUE    ="\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN   = "\033[36m";
const std::string WHITE  = "\033[37m";
int main(){



//  int x = 10;
//  char * ptr = &x;
//  std::cout<< *ptr;

/*
toUpper
toLower
string_compare (length, value)
string_copy

*/ 

    setColor(YELLOW);
    setPosition(50,1);
    std::cout<<"Menu\n";
    setColor(RESET);
    setPosition(50,2);
    std::cout<<"One\n";
    setPosition(50,3);
    std::cout<<"Two\n";
    setPosition(50,4);
    std::cout<<"Exit\n";

    setPosition(1,1);
    std::cout<<"\n=======================================\n";

    magic(3);

    std::cout<<"\n";



    return 0;
}