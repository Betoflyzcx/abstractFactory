#include "robustshapesfactory.h"
#include "simpleshapesfactory.h"
#define LineSkip std::cout<<"\n"

int main()
{
	Factory* Simpfactory = new simpleShapesFactory();
	Factory* Robfactory = new robustShapesFactory();

	Shape* shapes[3];

	shapes[0]= Simpfactory->CreateCurveShape(); // create circle
	shapes[1]= Robfactory->CreateStraightShape(); //create rect
	shapes[2] = Robfactory->CreateCurveShape(); // create ellipse

	LineSkip;
	for(int i=0; i< 3; i++)
	{
		shapes[i]->draw();
	}
	LineSkip;

	delete Simpfactory;
	delete Robfactory;	
}

