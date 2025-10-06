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
		Black	30	40
		Red	31	41
		Green	32	42
		Yellow	33	43
		Blue	34	44
		Magenta	35	45
		Cyan	36	46
		White	37	47
		Default	39	49
	};

	namespace color {
		
	}

}