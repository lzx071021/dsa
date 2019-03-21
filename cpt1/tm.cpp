#include <stdio.h>
#include <string>
#include <stdexcept>

string tm(string s) {
	string str = s;
	if (str.length() == 8) {

	}
	else
		throw length_error("You must input a 8-length string!");
	
	return str;
}

int main() {
	string s;
	scanf("%s", &s);
	printf("%s\n", tm(s));
	return 0;
}
