#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int hour, minute;
	scanf("%d%d", &hour, &minute);
	if (minute < 45) {
		minute = minute + 60 - 45;
		hour--;
	}
	else
		minute = minute - 45;
	if (hour < 0)
		hour = 23;
	printf("%d %d", hour, minute);

	return 0;
}