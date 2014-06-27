//
//  main.cpp
//  Project2
//
//  Created by reidbelton on 6/26/14.
//  Copyright (c) 2014 Reid Belton. All rights reserved.
//

#include <iostream>
#include "Node.h"

#pragma mark - User Input

MatrixDimensions promptForMatrixSize()
{
    int numRows = 0;
    int numColumns = 0;
    
    std::cout << "Please enter number of rows (1-30): " << std::endl;
    std::cin >> numRows;
    
    if (numRows < 1 || numRows > 30) {
        promptForMatrixSize();
    }
    
    std::cout << "Please enter number of columns (1-30) " << std::endl;
    std::cin >> numColumns;
    
    if (numColumns < 1 || numColumns > 30) {
        promptForMatrixSize();
    } else {
        std::cout << "\n\n\n";
    }
    
    return MatrixDimensions(numRows, numColumns);
}


#pragma mark - Main

int main(int argc, const char * argv[])
{
    MatrixDimensions dimensions = promptForMatrixSize();
    
    return 0;
}



