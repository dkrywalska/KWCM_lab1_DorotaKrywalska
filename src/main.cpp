#include "trygonometria.h"
#include <iostream>

int main()
{
	double sinus = degreemath::sin(30);
	double cosinus = degreemath::cos(30);
	double tangens = degreemath::tan(30);
	double cotan = degreemath::ctg(30);

	std::cout << sinus;
	std::cout << cosinus;
	std::cout << tangens;
	std::cout << cotan;
}