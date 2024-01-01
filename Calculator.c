#include<stdio.h>
int main()
{
int choice,n;
float answer;
printf("Select the operation to perform: \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n ");
scanf("%d",&choice);
switch(choice)
 {
	case 1:                                                                         //Performing addition
		{
		printf("Enter the numbers to add: ");
		scanf("%d",&n);
		float arr[n];
		for(int i=0;i<n;i++)
		{
			printf("Enter %d value: ",i+1);
			scanf("%f",&arr[i]);
			answer+=arr[i];
		}
		printf("Sum of %d numbers are : %f",n,answer);
		break;
	    }
    case 2:                                                                      //Performing subtraction
    	{
    	printf("Enter the numbers to subtract: ");
		scanf("%d",&n);
	 	
	 	printf("Enter the 1 value: ");
	 	scanf("%f",&answer);
	 	
		for (int i = 2; i <= n; ++i) {
        int num;
        printf("Enter the %d value: ", i);
        scanf("%d", &num);
        answer -= num;
        }
		
		printf("Difference of %d numbers are : %f",n,answer);
		break;
	   }
	case 3:                                                                   //Performing nultiplication
    	{
		printf("Enter the numbers to Multiply: ");
		scanf("%d",&n);
		float arr[n];
		answer=1;
		for(int i=0;i<n;i++)
		{
			printf("Enter %d value: ",i+1);
			scanf("%f",&arr[i]);
			answer*=arr[i];
		}
		printf("Product of %d numbers are : %f",n,answer);
		break;
    	}
    case 4:                                                                         //Performing division
		{
			float a,b;
			printf("Enter the values: ");
			scanf("%f%f",&a,&b);
			answer=a/b;
			printf("Quotient of %d numbers are : %f",n,answer);
			break;
		}
 }
}
