#pragma once
#include <iostream>
#include <stdlib.h>
#include "Node.h"



class Element {
public:
	int id;
	double  x, y, temp;
	Node* nodes;
	Element() {};
	Element(int,Node,Node,Node,Node);
	void printElement();
};