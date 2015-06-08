/*
 * main implementation: use this 'C' sample to create your own application
 *
 */
/*Erick Roldán Hernández Fonseca 
 5/27/2015*/



#define Pi 3.1416
#define Yes 1
#define No 0
#include "derivative.h" /* include peripheral declarations */

int CalculateSquareArea (int iSide);
int CalculatePerimeter (int iRadius);
int isEven (int Number);
int isPrime (int iNumber);
void ShowFibonacci (void);



int main(void)
{
	int counter = 0;
	
	
	for(;;) {	   
	   	counter++;
	}
	
	return 0;
}

 int CalculateSquareArea (int iSide)
		
 	 	 {
	   int iSquareArea = (iSide*iSide);
	     return iSquareArea;
		 }
 
 int CalculatePerimeter (int iRadius)
 	 	 
 	 	 {
	   int iPerimeter = (2*Pi*iRadius);
	     return iPerimeter;	 
 	 	 } 
 
 int isEven (int Number)
 	 	 
 	 	 	 {
	 	 	 if (Number%2==0)
	 	 	 {
	 	 		 return 1;
	 	 	 }
	 	 	 else
	 	 	 {
	 	 		return 0; 
	 	 	 }
	 
 	 	 }
 
 int isPrime (int iNumber)
 	 	 {
	   int Value=0;
	   int iPrime;
	   int N;
	   
	   for (N=0; N<iNumber; N++)
	   {
		   if (iNumber%N==0)
			   Value++;		   
	   }
	   
	   if (Value==2)
	   {
		 iPrime = Yes;  
		   
	   }
	   else
	   {
		  iPrime = No; 
		   
	   }
	   return iPrime; 
 	 	 }
 
 void ShowFibonacci (void)
 	 	 {
	 int iFirstNumber = 1;
	 int iLastValue = 0;
	 int iNewNumber = 0;
	 
	 for (;;)
	 {
		 iNewNumber=iLastValue+iFirstNumber;
		 iLastValue=iFirstNumber;
		 iFirstNumber=iNewNumber;
		 
	 }
	 
 	 	 }
 
 
 
