//
//  Matrix.cpp
//  Project2
//
//  Created by reidbelton on 6/27/14.
//  Copyright (c) 2014 Reid Belton. All rights reserved.
//

#include "Matrix.h"
#include "Node.h"

Matrix::Matrix(const MatrixDimensions dimensions, const std::vector<int> elements) : _dimensions(dimensions), _elements(elements)
{
    // Create nodes at appropriate rows and columns
}

Matrix* Matrix::operator + (const Matrix& other) const
{
    if (this->dimensions() != other.dimensions())
    {
        std::cout << "Two matrices are not of same dimensions!";
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
