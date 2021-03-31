#include<math.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int StringToInt(const string input)
{
	/*if (input.find(".") < 0)
	{
		//std::cerr << "Wrong type input\n";
		exit(-1);
	}*/
	return atoi(input.c_str());
}

double ThrowException()
{
	int i[1];
	return i[-1];
}