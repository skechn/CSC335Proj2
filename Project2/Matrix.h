//
//  Matrix.h
//  Project2
//
//  Created by reidbelton on 6/27/14.
//  Copyright (c) 2014 Reid Belton. All rights reserved.
//

#ifndef __Project2__Matrix__
#define __Project2__Matrix__

#include <iostream>

typedef struct MatrixDimensions
{
    int numRows;
    int numColumns;
    
    MatrixDimensions(int rows, int columns) : numRows(rows), numColumns(columns) {};
    
}MatrixDimensions;

class Matrix
{
public:
    Matrix(MatrixDimensions dimensions);
};

#endif /* defined(__Project2__Matrix__) */
