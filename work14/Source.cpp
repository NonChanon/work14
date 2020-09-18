#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int score;
	scanf("%d", &score);
	if (score < 0 || score > 100) {
		printf("ERROR");
	}
	if (score >= 0 && score < 50) {
		printf("GRADE : F");
	}
	if (score >= 50 && score <= 59) {
		printf("GRADE : D");
	}
	if (score >= 60 && score <= 69) {
		printf("GRADE : C");
	}
	if (score >= 70 && score <= 79) {
		printf("GRADE : B");
	}
	if (score >= 80 && score <= 100) {
		printf("GRADE : A");
	}
}