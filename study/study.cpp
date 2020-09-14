#include<stdio.h>
#include<math.h>

int main() {
	int num;
	scanf_s("%d", &num);
	root(num);
}

int root(int x) {
	int re;
	re = sqrt(x);
	if (re * re == x) {
		printf("perfect square");
	}
	else {
		printf("not perfect square");
	}
}