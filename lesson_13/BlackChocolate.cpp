#include "BlackChocolate.h"

BlackChocolate::BlackChocolate(): Chocolate<std::string>(id){}

bool BlackChocolate::validId(std::string id) {
	char c;
	int length = id.length();
	for (int i = 0; i < length; i++) {
		c = id[i];
		if ((c >= 'a' && c <= 'z') || (c >= 'A'&& c <= 'Z')) {
			continue;
		}
		else {
			return false;
		}
		return true;
	}
}
