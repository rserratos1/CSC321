//Raquel Serratos
//CSC-321


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>

int main(void){
	int x = 0;
	double d = 0.0;
	float f = 0.00f;
	char c = '\n';

	while(getchar() != '\n');

	printf("Scary movies are fun.\n\n Enter t (for true) or f (for false): ");
        scanf("%c", &c);

        if(c == 't'){
                printf("Boo");
        }
        else if(c == 'f'){
                printf("I don't like scary movies either\n\n");
        }
        else{
                printf("not sure yet huh?\n\n");
        }
	


	while(getchar() != '\n');
	
	printf("Enter an integer: ");
	scanf("%d", &x);

	if(x < 100){
		printf("Your guess is too low\n\n");
	}
	else if(x == 100){
		printf("You won the raffle\n\n");
	}
	else{
		printf("You overshot your guess\n\n");
	}

	
	
	while(getchar() != '\n');

	printf("Enter the amount you want to withdraw from your checking account: ");
	scanf("%lf", &d);

	if(d >= 1.00){
		printf("Insufficient Funds\n\n");
	}
	else if(d < 1.00 && d > 0.00){
		printf("The ATM does provide funds under 1.00\n\n");
	}
	else{
		printf("Try again\n\n");
	}

	
	
	while(getchar() != '\n');

	printf("Guess the price for a bag of M&Ms at a gas station: $");
	scanf("%f", &f);

	if(f == 3.75){
		printf("Correct. Ridiculous I know!\n\n");
	}
	else if(f < 3.75){
		printf("Incorrect. It's no longer that cheap :(\n\n");
	}
	else{
		printf("Incorrect. I'm sure it'll cost that much soon enough\n\n");
	}

	return EXIT_SUCCESS;
}

