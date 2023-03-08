#include "math.h"
#include <math.h>

long long s21_abs(long long x) {
	if (x < 0) {
		x *= -1;
	}
	return x;
}

long double s21_fabs(long double x) {
	if (x < 0) {
		x *= -1;
	}
	return x;
}
long double s21_ceil(double x) {
	long long result = 0;
	if (x < 0){
		for(; result > x; --result);
		result++;
	} else {
		for(; result < x; ++result);
	}
	return result;
}

long double s21_floor(double x) {
	long long result = 0;
	if (x < 0){
		for(; result > x; --result);
	} else {
		for(; result < x; ++result);
		result--;
	}
	return result;
}
long double s21_sin(double x) { // синус разложить в ряд тейлора!
}


int main(){
	double x;
	scanf("%lf", &x);
	printf("%Lf\n", s21_ceil(x));
	printf("%Lf\n", s21_floor(x));
	printf("%Lf\n", s21_sin(x));
	printf("%lf\n", sin(x));
}