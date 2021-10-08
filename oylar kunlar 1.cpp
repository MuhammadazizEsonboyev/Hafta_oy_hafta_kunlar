#include <stdio.h>

int main(){ 
	int days;
	int day2;
	int day1;
	int day3 = 7;
	int kun = 365;
	int day4;
	int oy = 30;
	int oy1;
	printf("kunlar sonini kiriting:");
    scanf("%d", &days);  
	if(days <= 365){
	 		oy1 = days / oy;
			printf("\n| %d oy ", oy1);
    }  
    if(days){
    	day1 = days / kun;
		day4 = days / day3;
		printf("| %d yil | %d hafta |", day1 , day4);
	}
	if(days < kun){
    		day2 = days;
    		printf(" %d kun |", day2);
	}
	
	return 0;
	}
	



// Kun kiritsa nechchi oy va haftasini korsatsin
