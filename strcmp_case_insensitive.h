#include <iostream>
using namespace std;


int strcmp_case_insensitive (string first_string, string second_string) {
	int first_length = first_string.size();
	int second_length = second_string.size();
	int limit;
	int value = 0;

	if (first_length == second_length) {
		limit = first_length;

	} else if (first_length > second_length) {
		limit = first_length;

	} else if (first_length < second_length) {
		limit = second_length;

	} // end of if statements

	
	for (int i = 0; i < limit; i++) {
		value += static_cast<int>(first_string[i]) - static_cast<int>(second_string[i]);
		
		//cout << "hi" << endl;


	} // end of for loop

	

	return value;
}

