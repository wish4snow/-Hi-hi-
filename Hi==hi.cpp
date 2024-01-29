#include <iostream>
#include <cassert>
#include "strcmp_case_insensitive.h"
using namespace std;


int main() {

	cout << "starting..." << endl;
	assert(strcmp_case_insensitive("", "") == 0); 
	assert(strcmp_case_insensitive("s", "s") == 0);
	assert(strcmp_case_insensitive("string ONE", "string two") == -1);
	assert(strcmp_case_insensitive("string one", "string oNe") == 0);
	assert(strcmp_case_insensitive("string two", "string one") == 1);
	assert(strcmp_case_insensitive("string two with more stuff", "string one") == 1);

	assert(strcmp_case_insensitive("string two with more stuff", "string one with even more stuff") == -1);
	cout << "done" << endl;

	return 0;
}