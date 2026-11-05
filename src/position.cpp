#include<iostream>
#ifdef _WIN32
    #include <windows.h>
#endif
void setPosition(int x, int y){
    #ifdef _WIN32

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD position;
    position.X = static_cast<SHORT>(x - 1);
    position.Y = static_cast<SHORT>(y - 1);

    SetConsoleCursorPosition(hConsole, position);


    #else

    std::cout << "\033[" << y << ";" << x << "H";


    #endif
}