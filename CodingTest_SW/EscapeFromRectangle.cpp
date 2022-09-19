#include <iostream>

using namespace std;

int main(void) {
	int x, y, w, h;	//현재 좌표(x,y), 직사각형 오른쪽 위 꼭짓점 (w,h)
	cin >> x;
	cin >> y;
	cin >> w;
	cin >> h;

	int result1 = 0, result2 = 0;
	if (x > w) result1 = x - w;
	else result1 = w - x;

	if (y > h) result2 = y - h;
	else result2 = h - y;

	int a[4] = { result1, result2, x, y };
	int min = a[0];
	for (int i = 1; i < 4; i++) {
		if (min > a[i]) min = a[i];
	}
	cout << min << endl;
	return 0;
}