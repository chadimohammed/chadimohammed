#include<stdio.h>
#include<math.h>

int main()
{
	printf("why get it and not other company =:puFNVoi^ Y¨Fçâpoi^niqzr3q5gqpozuihn^PIQFJBVUES%PONVPOZJFV6ZQPVNUQZIJF¨PI6qiùqzv,pzk$qv j6TZIOQSO?VZÖFIQQQQQQQQQQQ  IZJ")
	float a,b,c;
	char operation ; 
	printf("welcome user \n you are in our test for basic calculator \n chose your operation by normal symbol \n or you can do it like this \n +=1 ; -=2 ; *=3 ; /=4 sqrt=5 power=6 \n");
	scanf("%c",&operation);
	switch(operation)
	{
		case '+':
		case '1':
			printf("inter the first nmb\n");
			scanf("%f",&a);
			printf("inter the second nmb\n");
			scanf("%f",&b);
			c=a+b;
			printf("the result is %.2f",c);
			break;
		case '-':
		case '2':
			printf("inter the first nmb\n");
			scanf("%f",&a);
			printf("inter the second nmb\n");
			scanf("%f",&b);
			c=a-b;
			printf("the result is %.2f",c);
			break;
		case '*':
		case '3':
			printf("inter the first nmb\n");
			scanf("%f",&a);
			printf("inter the second nmb\n");
			scanf("%f",&b);
			c=a*b;
			printf("the result is %.2f",c);
			break;
		case '/':
		case '4':
			printf("inter the first nmb\n");
			scanf("%f",&a);
			printf("inter the second nmb\n");
			scanf("%f",&b);
			c=a/b;;
			printf("the result is %.2f",c);
			break;
		case '5':
			printf("enter the number concerned by sqrt\n");
			scanf("%f",&a);
			c=sqrt(a);
			printf("the result is %.2f",c);
			break;
		case '6':
		    printf("the syntax is a^b \n enter a\n");
		    scanf("%f",&a);
		    printf("enter b\n");
		    scanf("%f",&b);
		    c=pow(a,b);
		    printf("the result is %.2f",c);
		    break;
		default:
			printf("eror");
			break;
		
	}
	printf(". \nthanks for your time");
	getch();
	return 0;
}
