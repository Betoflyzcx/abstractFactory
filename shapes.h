#ifndef SHAPES_H
#define SHAPES_H

#include "shape.h"

int Shape::total = 0; // sets total equal to zero, not sure if necessary


class Circle:public Shape
{
	public:
	void draw() {std::cout <<"a circle has been drawn\t"<<id << " :draw"<<std::endl; }

	private:

};
class Ellipse : public Shape
{
	public:
	void draw(){std::cout<<"an ellipse has been drawn\t"<<id<< " :draw"<<std::endl; } 
	protected:
};

class Rectangle: public Shape
{
	public:
	void draw(){
	std::cout << "a rectangle has been drawn "<< id<<" :draw"<< std::endl;
	}

	private:
};

class Triangle: public Shape
{
	public:
	void draw(){
	std::cout<<"a triangle has been drawn "<<id<<" :draw"<< std::endl;
	}

	private:
};

#endif
