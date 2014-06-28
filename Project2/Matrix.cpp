//
//  Matrix.cpp
//  Project2
//
//  Created by reidbelton on 6/27/14.
//  Copyright (c) 2014 Reid Belton. All rights reserved.
//

#include "Matrix.h"
#include "Node.h"

Matrix::Matrix(MatrixDimensions dimensions)
{
    for (int currentColumn = 0; currentColumn < dimensions.numColumns; currentColumn++) {
        for (int currentRow = 0; currentRow < dimensions.numRows; currentRow++) {
            Node newNode = Node(currentRow, currentColumn, arc4random() % 9); // Assigning random value to each node for testing
        }
    }
}
