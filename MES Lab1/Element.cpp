#include "Element.h"

Element::Element(int id, Node n1, Node n2, Node n3, Node n4)
{
	this->id = id;
	this->temp = (n1.temp + n2.temp + n3.temp + n4.temp) / 4;
	this->x = n1.x;
	this->y = n2.y;
	nodes = new Node[4];
	nodes[0] = n1;
	nodes[1] = n2;
	nodes[2] = n3;
	nodes[3] = n4;
}

void Element::printElement()
{
	std::cout << "Element id: " << this->id << " ( " << this->x << " ; " << this->y << " ) Temp: " << this->temp <<"K Nodes:"<< std::endl;
	for (int i = 0; i < 4; i++) nodes[i].printNode();
}
