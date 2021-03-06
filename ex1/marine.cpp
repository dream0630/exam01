#include "marine.h"

marine::marine(void)
	: unit("Jim","Marine", 0, 0, 6, 40, 40)
{
	std::cout << "Do you want a piece of me, boy ?" << std::endl;
}

marine::marine(std::string Name, int x, int y)
	: unit(Name,"Marine", x, y, 6, 40, 40)
{
	std::cout << "Do you want a piece of me, boy ?" << std::endl;
}

marine::marine(marine const &src)
	: unit(src)
{
	std::cout << "Do you want a piece of me, boy ?" << std::endl;
}

marine::~marine(void)
{
	die();
}

void			marine::die(void)
{
	unit::die();
	std::cout << "Aaaargh..." << std::endl;
}

void			marine::move(int x, int y)
{
	unit::move(x, y);
	std::cout << "Rock'n'roll !!!" << std::endl;
}

void			marine::stimpack(void)
{
	if (_hp < 11)
		return ;
	_damage += 1;
	_hp -= 10;
	std::cout << "Ho yeah..." << std::endl;
}

marine			&marine::operator=(marine const &rhs)
{
	unit::operator=(rhs);
	return (*this);
}
