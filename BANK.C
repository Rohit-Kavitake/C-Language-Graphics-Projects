#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20]="user",b[20]="pass",c[20],d[20],r=121;
	int balance =10000,x,y,i,amt;
	clrscr();
	printf("enter username:");gets(c);
	printf("\n Enter password:"); gets(d);
	if(strcmp(c,a)== 0 && strcmp(d,b)==0)
	{       clrscr();
		printf("-------------------------------------------------------------------");
		printf("\n Welcome user1");
		printf("\n--------------------------------------------------------------------");
		while(r==121)
		{
		printf("\n1.check Balance\n 2.withdraw money\n 3.depposit money\n 4.Exit");scanf("%d",&i);
		switch(i)
		{case 1:
			printf("Balance = %d",balance);
			break;
		case 2:
			printf("Enter withdrawal Amount");scanf("%d",&amt);
			balance-=amt;
			printf("Remainiing Balance = %d",balance);
			break;
		case 3:
			printf("Enter Depposit Amount");scanf("%d",&amt);
			balance+=amt;
			printf("Updated  Balance = %d",balance);
			break;
		}
		printf("Want to continue(y/n)");
		scanf("%c",&r);
		}

	}
	else
	{
		printf("\n incorrect credentials");
	}
	getch();
	return 0;
}