#ifdef _WIN32
    #include<windows.h>

    void setColor(std::string color){
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    
    SetConsoleTextAttribute(hConsole, color );

}
#else
#include<iostream>

void setColor(std::string color){
 
    //using ANSI escape sequance For Linux
    
    std::cout<<color ;

}
#endif