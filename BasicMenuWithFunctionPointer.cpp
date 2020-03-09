/*
  Write a computer program that make certain operations on an array according 
  to the choice entered by the user of the programmer.
  The choices are :
  1=>Enter the elements of the array
  2=>Find max
  3=>Find min
  4=>Reverse
  coded by Berkay Gürbüz github: https://github.com/berkaygurbuz
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//User enter the number with this function
void EnterNumbers(int *array){
	int i;
	int a;
	
	for(int i=0;i<4;i++){
		printf("\nEnter the [%d]. number: ",i);
		scanf("%d",array+i);
	}
	
}
//This function uses for finding the maximum number
void Max(int *array)
{
	int i;
	int max=*array;
	for (i = 1; i < 4; i++) {
        if (*(array+i) > max) 
        {
            max = *(array+i); 
        }
    }
	printf("Largest number is : %d",max);
}
//this function uses for finding minimum number
void  Min(int *array)
{
	int i;
	int min=*array;
	for (i = 1; i < 4; i++) {
	
        if (*(array+i) < min) 
        {
            min = *(array+i); 
        }
    }
	printf("Minimum number is : %d",min);

}
//this function uses for reverse the array
void Reverse(int *array)
{
	//https://github.com/berkaygurbuz
	int Temp,j;
	int i=4;
    j = i - 1;   // Assigning j to Last array element
    i = 0;       // Assigning i to first array element
 
   while (i < j) 
   {
      Temp = *(array+i);
      *(array+i) = *(array+j);
      *(array+j) = Temp;
      i++;             
      j--;         
   }
   printf("------reverse array------ \n");
   for(i=0;i<4;i++){
   	printf("%d ",*(array+i));
   }
}




int main(int argc, char *argv[]) {
	
	int array[4];
	void (*op[])(int *)={EnterNumbers,Max,Min,Reverse};		//funtion pointer uses for selecting menu operation.
	int menu;
	printf("1 => EnterNumbers\n2 => Max\n3 => Min\n4 =>Reverse");
	while(1){
	do
	{
	fflush(stdin);
	printf("\nChoose operation: ");
	scanf("%d",&menu);
	}while(menu<1 || menu>4);
	op[menu-1](array);
	}
	return 0;
}

