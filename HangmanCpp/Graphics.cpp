#include "Graphics.h"
#include <iostream>

using namespace std;

void Graphics::print(int attempts_left) {
	switch (attempts_left)
	{
	case 6:
		cout << "Attempts left 6" << endl;
		break;
	case 5:
		cout << "Attempts left 5" << endl;
		break;
	case 4:
		cout << "Attempts left 4" << endl;
		break;
	case 3:
		cout << "Attempts left 3" << endl;
		break;
	case 2:
		cout << "Attempts left 2" << endl;
		break;
	case 1:
		cout << "Attempts left 1" << endl;
		break;
	default:
		cout << "Вы проиграли" << endl;
		break;
	}
}