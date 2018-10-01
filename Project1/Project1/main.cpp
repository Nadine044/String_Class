#include <iostream>
#include "string.h"

using namespace std;

int main() {

	String a;
	String b = "hello";
	String c(b);
	
	cout << b.getB() << endl;

	cout << c.getC() << endl;

	a = "bye";

	cout << a.getA() << endl;

	system("pause");
	return 0;
}