#include <iostream>


class CTextBlock {
public:
	std::size_t length() const;
private:
	char* pText;
	//const std::size_t textLength;
	mutable std::size_t textLength;
	mutable bool lengthIsValid;
};
std::size_t CTextBlock::length() const {
	if (!lengthIsValid) {
		textLength = std::strlen(pText);
		lengthIsValid = true;
	}
	return textLength;
}


int main(int argc, char* argv[]) {

}

