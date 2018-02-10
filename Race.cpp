#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <iomanip>
#define RACE_LENGTH 50

void advanceTortoise(int* ptrTortoise);
void advanceHare(int* ptrHare);
void printPosition(int* ptrTortoise, int* ptrHare);

int main()
{srand(time(NULL));	
 int H=0;//these variables are going to be used just to give my ptrHare and ptrTortoise variables the value 0
 int T=0;
 int* ptrHare=&H;
 int* ptrTortoise=&T;
//we'll be doing essentially the same thing as in the first assignment except instead of using an array we will be using a pointer	
	while (*ptrHare<50&&*ptrTortoise <50){
		advanceHare(ptrHare);
		advanceTortoise(ptrTortoise);
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
		if (*ptrHare==*ptrTortoise){
			*ptrTortoise=*ptrTortoise-1;
		}
//if statements ends
		printPosition(ptrHare,ptrTortoise);
		}
	if (*ptrHare==50){
		std::cout<<"The Hare won the race.";
	}
	else if (*ptrTortoise==50){
		std::cout<<"The Tortoise won the race.";
	}
	else{
		std::cout<<"One eternity later...no one made it to the finsih line.";
	}
	
}
//main function ends
 void advanceHare(int* ptrHare){
//advanceHare function
			int randH;//variable used to store the random number generated for the probabililty of the dice rolling and to compare what it is to see how ptrHare is affected
			randH=rand()%10+1;
			if (randH<4){
				*ptrHare=*ptrHare+2;
			}
			if (randH==4||randH==5||randH==6){
				*ptrHare=*ptrHare+3;
			}
			if (randH==7){
				*ptrHare=*ptrHare+1;
			}
			if (randH==8){
				*ptrHare=*ptrHare-2;
			}
			if (randH==9||randH==10){
				*ptrHare=*ptrHare-3;
			}
		}
//advanceHare function ends here
void advanceTortoise(int* ptrTortoise ){
//advanceTortoise function
			int randT;//randT is a variable used to hold the random number generated to be used for the probability of rolling the dice and to compare that number to see what ptrTortoise gets
			randT=rand()%10+1;
			if (randT<7){
				*ptrTortoise=*ptrTortoise+1;
			}
			if (randT==7){
				*ptrTortoise=*ptrTortoise+2;
			}
			if (randT==8){
				*ptrTortoise=*ptrTortoise+3;
			}
			if (randT>8){
				*ptrTortoise=*ptrTortoise;
			}
		}
//advanceTortoise function ends here
//printPosition function starts
void printPosition(int* ptrHare,int* ptrTortoise){
	//printPosition function will see whether ptrHare or ptrTortoise is bigger to determine how it should print out the places of the Tortoise and the Hare
	if(*ptrHare>*ptrTortoise){
		std::cout<<std::setw(*ptrTortoise)<<'T';
		std::cout<<std::setw(*ptrHare-*ptrTortoise)<<'H';
		std::cout<<std::setw(RACE_LENGTH-*ptrHare+1)<<'|'<<'\n';
	}
	else if(*ptrTortoise>*ptrHare){
		std::cout<<std::setw(*ptrHare)<<'H';
		std::cout<<std::setw(*ptrTortoise-*ptrHare)<<'T';
		std::cout<<std::setw(RACE_LENGTH-*ptrTortoise+1)<<'|'<<'\n';
	}
			}
//printPosition function ends		


