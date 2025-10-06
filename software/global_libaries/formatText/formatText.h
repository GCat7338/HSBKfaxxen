#pragma once
#include <string>
using std::string;

namespace formatText {

	string FORMAT(int index, string text) {
		int esc = index + 20;
		if (index == 1) esc++;
		string ret = "\033[" + std::to_string(index)
			+ "m"
			+ text
			+ "\033["
			+ std::to_string(esc)
			+ "m";
		return ret;
	}

	string bold(string text) { return FORMAT(1, text); }
	string dim(string text) { return FORMAT(2, text); }
	string italic(string text) { return FORMAT(3, text); }
	string underline(string text) { return FORMAT(4, text); }
	string blinking(string text) { return FORMAT(5, text); }
	string inverse(string text) { return FORMAT(6, text); }
	string hidden(string text) { return FORMAT(7, text); }
	string strikethrough(string text) { return FORMAT(8, text); }

	enum COLORS {
		BLACK = 30,
		RED = 31,
		GREEN = 32,
		YELLOW = 33,
		BLUE = 34,
		MAGENTA = 35,
		CYAN = 36,
		WHITE = 37,
		DEFAULT = 39
	};

	string colorFB(string text, COLORS foreground, COLORS background) {
		string ret = "\033[" + std::to_string(foreground)
			+ ";"
			+ std::to_string(background + 10)
			+ "m"
			+ text
			+ "\033[m";
		return ret;
	}
	string colorF(string text, COLORS foreground) {
		return colorFB(text, foreground, COLORS::DEFAULT);
	}
}