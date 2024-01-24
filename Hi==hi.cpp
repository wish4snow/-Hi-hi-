#include <iostream>
#include "strcmp_case_insensitive.h"
using namespace std;


int main() {

	cout << strcmp_case_insensitive("PPPPP", "ppppp") << endl;
	//cout << static_cast<int>('b');

	return 0;
}