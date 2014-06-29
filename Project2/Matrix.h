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
#include <vector>

class Node;
typedef Node* NodePTR;

typedef struct MatrixDimensions
{
    int numRows;
    int numColumns;
    
    MatrixDimensions(int rows, int columns) : numRows(rows), numColumns(columns) {};
    
    bool operator == (const MatrixDimensions& other) const {
        return (this->numColumns == other.numColumns && this->numRows == other.numRows);
    }
    
    bool operator != (const MatrixDimensions& other) const {
        return (this->numColumns != other.numColumns || this->numRows != other.numRows);
    }
    
}MatrixDimensions;

class Matrix
{
    class Node {
        int _row;
        int _column;
        int _data;
        NodePTR nextNode;
    };
    
public:
    Matrix(const MatrixDimensions dimensions, const std::vector<int> elements);
    Matrix* operator + (const Matrix& other) const;
    
    MatrixDimensions dimensions() const;
    
private:
    MatrixDimensions _dimensions;
    std::vector<int> _elements;
};

#endif /* defined(__Project2__Matrix__) */
