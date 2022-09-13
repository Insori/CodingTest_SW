#include <iostream>

using namespace std;

int main(void)
{
	int H, M;	//H = ½Ã, M = ºÐ
	int i = 1;
	cin >> H;
	cin >> M;
	while (i <= 45) {
		M--;
		if (M < 0) {
			H--;
			M = 59;
		}
		if (H < 0) {
			H = 23;
		}
		i++;
	}
	cout << H << " " << M;
		
	return 0;
}