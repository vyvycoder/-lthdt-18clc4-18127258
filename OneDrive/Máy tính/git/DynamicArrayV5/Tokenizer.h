#pragma once
#include <string>
#include <vector>
using namespace std;
class Tokenizer
{
public:
	static vector<string> Parse(string line, string seperator);
};

