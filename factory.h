#ifndef FACTORY_H
#define FACTORY_H

#include "shapes.h"

class Factory  // interace
{
	public:
	//remember since function of type object
	//has to reutrn an object
	virtual Shape* CreateCurveShape()=0; // finish wer're making shape objects
					// for universally making any type of
					// shape. (circle rectangle ect.)
	// will return object type since is object function.
	virtual Shape* CreateStraightShape()=0; //don't know what this means
 	protected:
	
};

// figure out if I can set the object function equal to Null outside of the class
// and if so how would I do it since it is a pointer function. Also figure out
// how to call pointer functions outside of their respective classes in 'General'


#endif
