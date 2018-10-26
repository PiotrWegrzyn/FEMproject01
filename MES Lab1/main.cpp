#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <iomanip>
#include "Node.h"
#include "Element.h"
#include "Grid.h"


using namespace std;


int main() {

	int a = 0;
	string * lines = new string[100];
	std::string::size_type sz;
	ifstream myfile("test.txt");
	if (myfile.is_open())
	{
		while (getline(myfile,lines[a]))
		{
			a++;
		}
		myfile.close();
	}
	double gridHeight= std::stod(lines[0], &sz); 
	double gridWidth= std::stod(lines[1], &sz);
	double nodesInHeightQuantity= std::stod(lines[2], &sz);
	double nodesInWidthQuantity= std::stod(lines[3], &sz);
	Grid g1 = Grid(gridHeight,gridWidth,nodesInHeightQuantity,nodesInWidthQuantity);
	
	
	g1.printGrid();




	system("pause");
	return 0;
}