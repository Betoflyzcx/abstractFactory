#ifndef SIMPLESHAPESFACTORY_H
#define SIMPLESHAPESFACTORY_H

#include "factory.h"

class simpleShapesFactory: public Factory
{
	public:
	Shape* CreateCurveShape() { //need to parenthesize function
	return new Circle;
	}
	Shape* CreateStraightShape(){ //need to parenthesize function
	return new Rectangle;	
	}	
		
	protected:
	
};

#endif
