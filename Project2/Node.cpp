#include <iostream>
#include <string>
#include "Node.h"

using namespace std;


Node::Node()
{
	row = 0;
	col = 0;
	data = 0;
}

Node::Node(int r, int c, int d) : row(r = 0), col(c = 0), data(d = 0)
{
	Node* ptr = new Node;
	for(int i = 0; i < c; i++)
	{
		ptr = Head;
		Head->nextR = rowHead;
        
		nextR->row++;
        
		colHead = Head->nextC;
		nextC->col++;
		data =+ NULL;
	}
    
	if (r != 0 && c == 0) {
		ptr = rowHead;
        
		if ( rowHead->nextR == NULL) {
			rowHead->nextR = Head;
		} else {
			rowHead = rowHead->nextR;
		}
        
        if ( rowHead->nextC == NULL) {
			rowHead->nextC = rowHead;
		} else {
			rowHead = rowHead->nextC;
		}
        
        nextC->col++;
        data = NULL;
	}
    
	if (r == 0 && c != 0) {
		if (!colHead->nextR) {
			colHead->nextR = colHead;
		} else {
			colHead = colHead->nextR;
		}
        
		if ( colHead->nextC == NULL) {
			colHead->nextC = Head;
		} else {
			colHead->nextC = nextC;
		}
        
        data = NULL;
	}
    
	while ( r && c && d ) {
		Node* ptr = new Node;
        
		if ( ptr->nextR == NULL)
		{
			ptr->nextR = colHead;
		} else {
			ptr = ptr->nextR;
		}
        
		if ( ptr->nextC == NULL)
		{
			ptr->nextC = rowHead;
		} else {
			ptr = ptr->nextC;
		}
	}
}

void Node::printNode()
{
	cout << "Row : " << row << "Column : " << col << "Data : " << data << endl;
}
