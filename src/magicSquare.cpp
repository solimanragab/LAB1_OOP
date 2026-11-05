#include<iostream>
#include "../include/position.h" 
int magic(int x) {
    //int theSum = (x * (x * x + 1)) / 2;

    // if(i%x == 0){

    //     setPosition(x*4 + column , row);
    //     std::cout<<i; 
    //     ++row;
    // }
    // else{

    // setPosition(i%x *4+ column , row);
    // std::cout<<i;  

    // }

    for (int row = 0; row < x; row++) {
        for (int column = 0; column < x; column++) {

            int value = x * ((row + column + x - 1) % x) + ((row + 2 * column + 1) % x)+ 1;

            setPosition(column * 4 + 5, row + 5);
            std::cout << value;
        }
     
    }

    return 0;
}

    

    
