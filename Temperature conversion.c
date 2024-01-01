#include<stdio.h>
int main()
{
float temp,result;
int choice;

printf("Temperature Convertor !!\n1.Celcius to farenheit \n2.Farenheit to Celcius\nSelect your choice: ");
scanf("%d",&choice);

switch(choice)
 {
	case 1:                                                    //celcius to farenheit
		{
		printf("Enter the temperature in celcius: ");
		scanf("%f",&temp);
		printf("Temperature in farenheit is %f",(temp*1.8+32));
		break;
	    }
	case 2:                                                     //farenheit to celciue
	   {
	   	printf("Enter the temperature in farenheit: ");
		scanf("%f",&temp);
		printf("Temperature in Celcius is %f",((temp-32)*(1/1.8)));
		break;
	   }    	    
 }
}

