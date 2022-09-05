#include <iostream>

using namespace std;

int main(void)
{
	int chess[6] = { 1,1,2,2,2,8 };
	int mine[6];
	for (int i = 0; i < 6; i++) {
		cin >> mine[i];
	}
	for (int j = 0; j < 6; j++) {
		cout << chess[j] - mine[j] << " ";
	}
}