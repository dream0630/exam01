#ifndef MARINE_H
#define MARINE_H
#include "unit.h"
class marine : public unit
{
	public:
		marine(std::string const& n,int x,int y);
		marine(marine const& u);
		~marine();
		marine& operator = (marine const& u);
		void move(int x,int y);
		void stimpack();
	
	private:
	
	
};

#endif
