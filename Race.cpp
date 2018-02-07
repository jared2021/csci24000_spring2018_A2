#include <iostream>
#include <stdlib.h>
#include <ctime>

#define RACE_LENGTH 50

void advanceTortoise(int* ptrTortoise);
void advanceHare(int* ptrHare);
void printPosition(int* ptrTortoise, int* ptrHare);

int main()
{int *ptrHare=0;
 int *ptrTortoise=0;
//we'll be doing essentially the same thing as in the first assignment except instead of using an array we will be using a pointer	
	while (*ptrHare,*ptrTortoise <49){
		advanceHare( ptrHare);{
//advanceHare function
			srand(time(NULL));
			int randH=rand()%10+1;
			if (randH<4){
				*ptrHare=*ptrHare+2;
			}
			if (randH=4,5,6){
				*ptrHare=*ptrHare+3;
			}
			if (randH=7){
				*ptrHare=*ptrHare+1;
			}
			if (randH=8){
				*ptrHare=*ptrHare-2;
			}
			if (randH=9,10){
				*ptrHare=*ptrHare=3;
			}
		}
//advanceHare function ends here
		advanceTortoise( ptrTortoise );{
//advanceTortoise function
			srand(time(NULL));
			int randT=rand()%10+1;
			if (randT<7){
				*ptrTortoise=*ptrTortoise+1;
			}
			if (randT=7){
				*ptrTortoise=*ptrTortoise+2;
			}
			if (randT=8){
				*ptrTortoise=*ptrTortoise+3;
			}
			if (randT>8){
				*ptrTortoise=*ptrTortoise;
			}
		}
//advanceTortoise function ends here
//if statements to enforce rules for the race	
		if (*ptrHare>50){
			*ptrHare=50;
		}
		if (*ptrTortoise>50){
			*ptrTortoise=50;
		}
		if (*ptrHare<0){
			*ptrHare=0;
		}
		if(*ptrTortoise<0){
			*ptrTortoise=0;
		}
		if (*ptrHare=*ptrTortoise){
			*ptrTortoise=*ptrTortoise-1;
//if statements ends
		printPosition(ptrHare,ptrTortoise);{
				
			}
		}

}
}
