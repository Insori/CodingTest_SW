#include <stdio.h>

int main(void) {
	int nums[8] = { 1,2,3,4,5,6,7,8 };
	int cnt1 = 0, cnt2 = 0;
	scanf_s("%d %d %d %d %d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4], &nums[5], &nums[6], &nums[7]);
	if (nums[0] == 1) {
		for (int i = 1; i < 8; i++) {
			if (nums[i] == i + 1) cnt1++;
		}
	}
	else if (nums[0] == 8) {
		for (int i = 1; i < 8; i++) {
			if (nums[i] == 8 - i) cnt2++;
		}
	}
	if (cnt1 == 7) printf("ascending");
	else if (cnt2 == 7) printf("descending");
	else printf("mixed");

	return 0;
}