#include <iostream>
#include "string.h"

using namespace std;

int main() {

	String a;
	String b = "hello";
	String c(b);
	
	cout << b.getWord() << endl;

	cout << c.getWord() << endl;

	b = "bye";

	cout << b.getWord() << endl;

	system("pause");
	return 0;
}