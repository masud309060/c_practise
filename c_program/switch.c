#include <stdio.h>


int main() 
{
	int day = 10;
	
	switch(day) {
		case 1: 
		printf("Sunday");
		break;
		
		case 2: 
		printf("Monday");
		break;
		
		case 3: 
		printf("Tuesday");
		break;
		
		default:
		printf("No day found");
	}
	return 0;
}


