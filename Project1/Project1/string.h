//STRING CLASS

class String {
private:

	const char* a;
	const char* b;
	const char* c;

public:

	//CONSTRUCTORS

	String() {};
	String(const char* word) :a(word), b(word), c(word) {};

	~String() {};

	//FUNCTIONS

	const char* getA() {
		return a;
	}

	const char* getB() {
		return b;
	}

	const char* getC() {
		return c;
	}


};