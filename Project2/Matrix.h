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
    Node* head;
    
    class Node {
    private:
        int _row;
        int _column;
        int _data;
        Node* _nextNode;
        
    public:
        Node(int row, int column, int data) : _row(row), _column(column) {}
        int row() {return _row;}
        int column() {return _column;}
        int data() {return _data;}
        
        void setNextNode(Node* next) {_nextNode = next;}
    };
    
public:
    Matrix(const MatrixDimensions dimensions, const std::vector<int> elements);
    Matrix* operator + (const Matrix& other) const;
    
    MatrixDimensions dimensions() const;
    
private:
    MatrixDimensions _dimensions;
    std::vector<int> _elements;
};

#endif
