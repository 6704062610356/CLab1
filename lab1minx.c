#include <stdio.h>

int main() {
	int FirstNumber,SecondNumber;
	printf("Enter First number: ");
    scanf("%d", &FirstNumber);
    printf("Enter Second number: ");
    scanf("%d", &SecondNumber);
	if(FirstNumber>SecondNumber){
	printf("First number is greater than Second Number");
	} else{
		printf("Second Number is greater than First Number");
	}
}
