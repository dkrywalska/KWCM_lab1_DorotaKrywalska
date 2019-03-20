#include "LaborkaConfig.h"
#include <iostream>

#ifdef USE_TRIGONOMETRY_DEGREE
	#include "trygonometria.h"
#endif

int main()
{
#ifdef USE_TRIGONOMETRY_DEGREE
	double sinus = degreemath::sin(30);
	double cosinus = degreemath::cos(30);
	double tangens = degreemath::tan(30);
	double cotan = degreemath::ctg(30);
#else
	double sinus = sin(30);
	double cosinus = cos(30);
	double tangens = tan(30);
	double cotan = 1/tan(30);
#endif
	std::cout << sinus << std:endl;
	std::cout << cosinus << std:endl;
	std::cout << tangens << std:endl;
	std::cout << cotan << std:endl;
}