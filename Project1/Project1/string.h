//STRING CLASS
#include <string.h>
#include <assert.h>
class String {
private:

	char* word = nullptr;
	unsigned int allocated_memory = 0u;

public:

	//CONSTRUCTORS

	String() {};
	String(const char* word) {
		assert(word != nullptr);
		if (word != nullptr) {
			allocated_memory = strlen(word) + 1;
			this->word = new char[allocated_memory];
			strcpy_s(this->word, allocated_memory, word);
		}
	};

	String(const char* toCopy, const char* copied) {
		
		const char* aux;
		toCopy = aux;
		aux = copied;
	}

	~String() {
		if (word != nullptr) {
			delete[] word;
			word = nullptr;
			allocated_memory = 0u;
		}
	};

	//FUNCTIONS

	const char* getWord() {
		return word;
	}

	void MakeWord(unsigned int size, char* ch) {
		for (int i = 0; i < size; ++i) {
			word[i] = ch[i];
		}
	}
};