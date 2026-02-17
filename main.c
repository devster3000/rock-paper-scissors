#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	
}

int userNumber() {

int user_choice = print("Rock, Paper or Scissors?\n1. Rock\n2. Paper\n3. Scissors");


 	switch(user_choice);

 	case 1:
 		print("You entered rock!");
 		user_rps = 1;

 	case 2:
 		print("You entered paper!");
 		user_rps = 2;

 	case 3:
 		print("You entered scissors!");
 		user_rps = 3;

 	return user_rps;

}

int computerNumber() {
	
	int computer_choice;
	int upper = 3; int lower = 1;

	
	// Random selector between 1 and 3.

	int computer_choice = rand() % (3 - 1) + 1

	switch(computer_choice)
		
	case 1:
		computer_rps = 1;
	
	case 2:
		computer_rps = 2;

	case 3:	
		computer_rps = 3;


	return computer_rps;
}


