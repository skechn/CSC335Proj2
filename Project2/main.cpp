//
//  main.cpp
//  Project2
//
//  Created by reidbelton on 6/26/14.
//  Copyright (c) 2014 Reid Belton. All rights reserved.
//

#include <sstream>
#include <iostream>
#include <string>
#include "Matrix.h"

using namespace std;

// -----------------------------------------------------------------------------------------------------------------------
//   Forward Declarations
// -----------------------------------------------------------------------------------------------------------------------

int promptForNumber(int minAcceptable, int maxAcceptable, std::string prompt);
MatrixDimensions promptForMatrixSize();

// -----------------------------------------------------------------------------------------------------------------------
//   Main
// -----------------------------------------------------------------------------------------------------------------------

int main(int argc, const char * argv[])
{
    MatrixDimensions dimensions = promptForMatrixSize();
    
    std::cout << "You entered " << dimensions.numRows << " rows and " << dimensions.numColumns << " columns." << std::endl;
    
    return 0;
}

// -----------------------------------------------------------------------------------------------------------------------
//   Input
// -----------------------------------------------------------------------------------------------------------------------

int promptForNumber(int minAcceptable, int maxAcceptable, std::string prompt)
{
    std::string input = "";
    int returnNumber = 0;
    
    while (true) {
        std::cout << prompt << "(" << minAcceptable << " - " << maxAcceptable << ")" << std::endl;
        std::getline(std::cin, input);
        
        istringstream stream(input);
        
        if (stream >> returnNumber) {
            if (returnNumber >= minAcceptable && returnNumber <= maxAcceptable) { // We have a winner.
                break;
            }
        }
        
        std::cout << "\n\n\n******** INVALID NUMBER ********\n\n\n";
    }
    
    return returnNumber;
}

MatrixDimensions promptForMatrixSize()
{
    int numRows = promptForNumber(2, 10, "Please enter number of rows: ");
    int numColumns = promptForNumber(2, 10, "Please enter number of columns: ");
    
    return MatrixDimensions(numRows, numColumns);
}
