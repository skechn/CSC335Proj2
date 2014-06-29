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
#include <vector>
#include "Matrix.h"

using namespace std;

// -----------------------------------------------------------------------------------------------------------------------
//   Forward Declarations
// -----------------------------------------------------------------------------------------------------------------------

int promptForNumber(const int minAcceptable, const int maxAcceptable, const std::string prompt);
std::vector<int> getNumbersForMatrixDimensions(const MatrixDimensions dimensions);
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

MatrixDimensions promptForMatrixSize()
{
    int numRows = promptForNumber(2, 10, "Please enter number of rows: ");
    int numColumns = promptForNumber(2, 10, "Please enter number of columns: ");
    
    return MatrixDimensions(numRows, numColumns);
}

std::vector<int> getNumbersForMatrixDimensions(const MatrixDimensions dimensions)
{
    std::vector<int> vect(dimensions.numColumns * dimensions.numRows);
    
    for (int currRow = 0; currRow < dimensions.numRows; currRow++)
    {
        for (int currColumn = 0; currColumn < dimensions.numColumns; currColumn++)
        {
            std::ostringstream stream;
            stream << "Please enter a number between 1 - 100 for row " << currRow << ", column " << currColumn;
            promptForNumber(0, 100, stream.str());
        }
    }
    
    return vect;
}

int promptForNumber(const int minAcceptable, const int maxAcceptable, const std::string prompt)
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

