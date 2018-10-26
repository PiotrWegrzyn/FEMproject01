#include "Grid.h"

Grid::Grid(double gridHeight,double gridWidth,double nodesInHeightQuantity,double nodesInWidthQuantity)
{
	this->gridHeight = gridHeight;
	this->gridWidth = gridWidth;
	this->nodesInHeightQuantity= nodesInHeightQuantity;
	this->nodesInWidthQuantity= nodesInWidthQuantity;
	this->elementsInHeightQuantity = nodesInHeightQuantity-1;
	this->elementsInWidthQuantity = nodesInWidthQuantity-1;
	createNodes();
	createElements();

}

Node ** Grid::createNodes()
{
	double dx = gridWidth / (nodesInWidthQuantity-1);
	double dy = gridHeight / (nodesInHeightQuantity-1);
	this->nodes = new Node*[nodesInWidthQuantity];
	for (int i = 0; i < nodesInWidthQuantity; i++) nodes[i] = new Node[nodesInHeightQuantity];
	for (int i = 0; i < nodesInWidthQuantity; i++)
	{
		for (int j = 0; j < nodesInHeightQuantity; j++)
		{
			nodes[i][j] = Node((i*nodesInHeightQuantity)+j+1,i*dx,j*dy,21.37);
		}
	}

	return nullptr;
}

Element ** Grid::createElements()
{
	this->elements = new Element*[elementsInWidthQuantity];
	for (int i = 0; i < elementsInWidthQuantity; i++) elements[i] = new Element[elementsInHeightQuantity];
	for (int i = 0; i < elementsInWidthQuantity; i++)
	{
		for (int j = 0; j < elementsInHeightQuantity; j++)
		{
			elements[i][j] = Element(i*elementsInHeightQuantity + j +1,nodes[i][j], nodes[i+1][j], nodes[i+1][j+1], nodes[i][j+1]);

		}
	}


	return nullptr;
}

void Grid::printGrid()
{
	for (int i = 0; i < elementsInWidthQuantity; i++) {
		for (int j = 0; j < elementsInHeightQuantity; j++) {
			elements[i][j].printElement();
		}
	}
}
