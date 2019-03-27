#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
class Shape
{
	public:
	Shape(){   // still don't understand static variables that well
	total ++; // total is static so, it's value is forever held
	id = total; 
	}
	//functions
	virtual void draw()=0;
	
	protected: // difference between protected and private?
	int id;
	static int total;
	
};

#endif
