#ifndef ROBUSTSHAPESFACTORY_H
#define ROBUSTSHAPESFACTORY_H

#include "factory.h"

class robustShapesFactory: public Factory
{
	public:
	Shape* CreateCurveShape()
	{
		return new Ellipse();
	}
	Shape* CreateStraightShape()
	{
		return new Rectangle();
	}
	protected:
};

#endif
