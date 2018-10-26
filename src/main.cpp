#include <iostream>
#include <vector>
#include <string>
#include "coordin.h"
#include "chap9/autoscp.h"
#include "template/stack.h"
#include "template/vect.h"

using namespace std;
double warming = 0.2;

int main(int argc, char const *argv[])
{
	/* code */
	using namespace std;
	using namespace VECTOR;
	srand(time(0));

	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Enter targer distance (q to quit): ";
	while(cin >> target){
		cout << "Enter step lenght: ";
		if(!(cin >> dstep))
			break;

		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps ++;
		}

		cout << "After " << steps << " steps, the subject has the following location";
		cout << result << endl;
		result.polar_mode();
		cout << "or " << result << endl;
		cout << "Average outward distance per step = " << result.magval() / steps << endl;

		steps = 0;
		result.reset(0.0, 0.0);
	}

	cout << "bye \n";
	while(cin.get() != '\n')
		continue;
	return 0;
}