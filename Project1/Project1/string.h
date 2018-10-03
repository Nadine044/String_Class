//STRING CLASS
#include <string.h>
#include <assert.h>
class String {
private:

	const char* word = nullptr;
	unsigned int allocated_memory = 0u;

public:

	//CONSTRUCTORS

	String() {};
	String(const char* word) :word(word) {
		assert(word != nullptr);
		if (word != nullptr) {
			allocated_memory = strlen(word) + 1;
			this->word = new char[allocated_memory];
		}
	};

	~String() {};

	//FUNCTIONS

	const char* getWord() {
		return word;
	}
};