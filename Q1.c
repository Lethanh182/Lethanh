#include<stdio.h>	
int main() {
	int a;
	
	printf("Nhap vao 1 so nguyen:");
	scanf("%d", &a);
	
int is_prime(int n) {
		if(n <= 1) return 0;
		if(n % 2 == 0 && n > 2) return 0;
		for(int i = 3; i * i <= n; i += 2) {
			if ( n % i == 0)
			return 0;
		}
		return 1;
	}
	int sum_prime_digits(int a) {
		int sum = 0;
		while ( a > 0) {
			int digit = a % 10;
		if( is_prime(digit)) {
			sum += digit;
		}
		a /= 10;
		}
		return sum;
	}

    int s = sum_prime_digits(a);	
	printf("Tong cac chu so nguyen to trong %d la %d\n", a, s);
	return 0;
}	