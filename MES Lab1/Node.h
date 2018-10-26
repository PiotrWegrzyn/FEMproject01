#pragma once
#include <iostream>
#include <stdlib.h>



class Node {
public:
	double id, x, y, temp;
	Node() {};
	Node(int, double, double, double);
	void printNode();

};