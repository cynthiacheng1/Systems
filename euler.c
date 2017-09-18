#include <stdio.h>   

int problem1(){
	int count = 0;
	int total = 0;
	while (count < 1000){
		if (count%3 == 0 || count%5 == 0){
			total += count;
		}
		count++;
	}
	printf("%d", total);
	return 0;
}

int problem6(){
	return sum_of_squares - square_of_sum
}

int sum_of_squares(){
	int count = 0;
	int total = 0;
	while (count < 100){
		total += count*count;
	}
	return total
}

int square_of_sum(){
	int count = 0;
	int total = 0;
	while (count < 100){
		total += count;
	}
	return total *total
}

int main(){
	printf("%d", problem6());
}