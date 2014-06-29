//
//  Matrix.cpp
//  Project2
//
//  Created by reidbelton on 6/27/14.
//  Copyright (c) 2014 Reid Belton. All rights reserved.
//

#include "Matrix.h"


Matrix::Matrix(const MatrixDimensions dimensions, const std::vector<int> elements) : _dimensions(dimensions), _elements(elements)
{
    // Create nodes at appropriate rows and columns
    int currentColumn = 0;
    int currentRow = 0;
    int currentElement = 0;
    
    // Set "previous" initially to first node
    Node* prev = new Node(0, 0, elements[0]);

    for (int i = 0; i < elements.size(); i ++)
    {
        if (currentColumn > _dimensions.numColumns) { // Go to next row
            currentColumn = 0;
            currentRow++;
        }
        
        Node *next = new Node(currentRow, currentColumn, elements[currentElement]);
        prev->setNextNode(next);
        prev = next;
        
        currentColumn++;
        currentElement++;
    }
}

Matrix* Matrix::operator + (const Matrix& other) const
{
    if (this->dimensions() != other.dimensions())
    {
        std::cout << "Matrices are not of same dimensions!";
        return NULL;
    }
    
    std::vector<int> newElements;
    // Calculate each element appropriately here

    // Create and return resulting matrix
    return new Matrix(this->dimensions(), newElements);
}

MatrixDimensions Matrix::dimensions() const
{
    return _dimensions;
}
