#include <stdio.h> 
#define MAX 100 

int main()
{
	int N = 123;

	int arr[MAX];
	int i = 0;
	int j, r;

	while (N != 0) {
		r = N % 10;

		arr[i] = r;
		i++;

		N = N / 10;
	}

	int out = 0;
	for (j = i - 1; j > -1; j--) {
		out += arr[j];
	}

	printf("%u %s", out, out % 2 == 0 ? "true" : "false");

	getchar();
	return 0;
}
