#include <iostream>
#include "autoscp.h"

using namespace std;
extern double warming;

void oil(int x) {
	int texas = 5;
	extern double warming;
	cout << "Hello from autoscp, warming: " << warming << endl;
	warming += x;
	cout << "warming: " << warming << endl;
}