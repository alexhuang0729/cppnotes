//I'm back lol
#include <iostream>
#include "add.h"
#include "getInput.h"
using namespace std;

int main()
{
	float result;
	float valueFirst = getNums();
	float valueSecond = getNums();
	char operation = getOp();
	switch (operation) {
		case '+' :
			result = valueFirst + valueSecond;
			break;
		case '-':
			result = valueFirst - valueSecond;
			break;
		case '/':
			result = valueFirst / valueSecond;
			break;
		case '*':
			result = valueFirst * valueSecond;
			break;
	}
	cout << valueFirst << " " << operation << " " << valueSecond << " " << "=" << " " << result;
}
