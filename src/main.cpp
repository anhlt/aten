#include <iostream>
#include <vector>
#include <string>
#include <ATen/ATen.h>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	int i;
	std::vector<std::string> vec;
	vec.push_back("Hello");
	vec.push_back("Hello2");
	cout << "abc:";
	cin >> i;
	cout << i << endl;
	cout << vec[0] << std::endl;
	return 0;
}