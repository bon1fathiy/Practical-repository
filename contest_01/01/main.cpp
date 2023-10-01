#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a = sqrt(12);
	float b = 1/(3*3.0);
	float c = 1/(5*3*3.0);
	float d = 1/(7*3*3*3.0);
	float e = 1/(9*3*3*3*3.0);
	float f = 1/(11*3*3*3*3*3.0);

	float g = a*(1-b+c-d+e-f);

	cout << g;
