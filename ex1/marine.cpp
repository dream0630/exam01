#include "marine.h"

marine::marine(std::string const& n,int x,int y) : unit(n,"Marine", x, y, 6, 40, 40)
{
	std::cout << "Do you want a piece of me, boy ?" << std::endl;
}
marine::marine(marine const& u) : unit(u.name,u.type,u.posX,u.posY,u.dam,u.cHP,u.mHP)
{
	std::cout << "Do you want a piece of me, boy ?" << std::endl;
}
marine::~marine()
{
	std::cout << "Aaaargh..." << std::endl;
}
marine& marine::operator=(marine const& u)
{
	if(this != &u)
    {
		this->name = u.name;
		this->type = u.type;
		this->posX = u.posX;
		this->posY = u.posY;
		this->dam = u.dam;
		this->cHP = u.cHP;
		this->mHP = u.mHP;
	}
	return *this;
}
void marine::move(int x,int y)
{
	this->posX = x;
	this->posY = y;
	std::cout << "Rock'n'roll !!!" << std::endl;
}
void marine::stimpack()
{
	this->dam += 1;
	this->cHP -= 10;
	std::cout << "Ho yeah..." << std::endl;
}
