#include "Node.h"

Node::Node(int id, double x, double y, double temp)
{
	this->id = id;
	this->x = x;
	this->y = y;
	this->temp = temp;

}

void Node::printNode()
{
	std::cout << "Node id: " << this->id << " ( " << this->x << " ; " << this->y << " ) Temp: " << this->temp<<"K"<<std::endl;
}
