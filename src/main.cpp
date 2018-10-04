#include <iostream>
#include <vector>
#include <string>
#include "coordin.h"
#include "chap9/autoscp.h"

using namespace std;
double warming = 0.2;

int main(int argc, char const *argv[])
{
	/* code */
	vector<int> gl;

	for (int i = 0; i <= 5; ++i)
	{
		gl.push_back(i);
	}

	cout << "Size: " << gl.size() << endl;
	cout << "Capacity : " << gl.capacity() << endl;
	cout << "Max_size : " << gl.max_size() << endl;

	cout << "Output of begin and end.";
	for (auto i = gl.begin(); i != gl.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;

	cout << "Output of begin and end.";
	for (auto i = gl.cbegin(); i != gl.cend(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;

	rect rplace;
	polar pplace;

	cout << "Enter the x and y values: \n";
	while(cin >> rplace.x >> rplace.y){
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next 2 numbers (q to quit): ";
	}

	cout << "Bye!" << endl;
	oil(5);
	return 0;
}