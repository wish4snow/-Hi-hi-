#include <iostream>
using namespace std;

char toLowerCase (char letter) {
	if (static_cast<int>(letter) >= 65 && static_cast<int>(letter) <= 90) {
		return (static_cast<int>(letter) + 32);
	} 
	return letter;
}

int strcmp_case_insensitive (string first_string, string second_string) {
	int first_length = first_string.size();
	int second_length = second_string.size();
	int limit;
	int stringInt = 0;

	if (first_length == second_length) {
		limit = first_length;

	} else if (first_length > second_length) {
		limit = first_length;

	} else if (first_length < second_length) {
		limit = second_length;

	} // end of if statements

	
	for (int i = 0; i < limit; i++) {
		stringInt += static_cast<int>(toLowerCase(first_string[i])) - static_cast<int>(toLowerCase(second_string[i])); // adds the difference of the letter int values together

	} // end of for loop

	if (stringInt > 0) {
		return 1;

	} else if (stringInt < 0) {
		return -1;

	} // end of if staetments
	
	return 0;
}

