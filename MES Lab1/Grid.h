#pragma once
#include <iostream>
#include <stdlib.h>
#include "Node.h"
#include "Element.h"

class Grid {
public:
	double gridHeight;
	double gridWidth;
	double nodesInHeightQuantity;
	double nodesInWidthQuantity;
	double elementsInHeightQuantity;
	double elementsInWidthQuantity;
	Node ** nodes;
	Element ** elements;
	Grid() {};
	Grid(double, double, double, double);
	Node ** createNodes();
	Element ** createElements();
	void printGrid();
};