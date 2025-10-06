#include <iostream>
using namespace std;

#include "./../../global_libaries/formatText/formatText.h"

int main() {
	cout << "test diese 1" << endl;
	cout << formatText::bold("test diese 2") << endl;
	string text = formatText::colorF("testtext", formatText::COLORS::RED);
	cout << text << endl;
	cout << formatText::underline("test diese 1") << endl;
	return 0;
}