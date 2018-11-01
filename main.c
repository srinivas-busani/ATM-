#include"my_header.h"
//#include<conio.h>
int final_balance=10000;
//int _100s=100,_200s=50,_500s=50,_2000s=22;
void main()
{
	short unsigned int user_server_pin=1234;
	short unsigned  int cust_pin,user_option;
	int withdraw_amount;
	//int final_balance=10000;
	printf("enter your pin\n");
	scanf("%hu",&cust_pin);
	//system("clear");
	//clrscr();
	if(cust_pin!=user_server_pin)
	{
		printf("invalid pin\n");
		;
		return ;
	}
	else
	{
		printf("1.withdrawl 2.deposit 3.balance enquiry 4.aadhar card updation \n");
		printf("enter your option");
		scanf("%hu",&user_option);
		//system("clear");
		switch(user_option)
		{
			case 1:		
						printf("enter the amount that you want to with draw\n");
						scanf("%d",&withdraw_amount);
						withdraw(withdraw_amount);
						break;
			case 2:
						//deposit();
						break;

		}
		//clrscr();

		//printf("1.banking;\n");
	}

}













