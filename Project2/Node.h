#ifndef __NODE_H
#define __NODE_H

typedef struct MatrixDimensions
{
    int _numRows;
    int _numColumns;
    
    MatrixDimensions(int numRows, int numColumns) : _numRows(numRows), _numColumns(numColumns) {};
    
}MatrixDimensions;

class Node {
    
    private:
    
    int row, col, data;
    Node* nextR;
    Node* nextC;
    Node* Head;
    Node* rowHead;
    Node* colHead;
    
    public:
    
    Node();
    Node(int r, int c, int d);
    void printNode();
    
};


#endif