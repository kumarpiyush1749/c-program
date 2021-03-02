#include<stdio.h>
/*main()
{
 int i;
printf("press 0");
 scanf("%d",&i);
 	 if(i==0)
	 {
	 	printf("zero is pressed");
	 }
	 else
	  printf("zero is not pressed"); 
}
main()
{
	int unit,bill_amt;
	printf("enter unit");
	scanf("%d",&unit);
	if(unit<=100)
	{
		bill_amt=unit*3;
	}
	else
	 bill_amt=unit*5;
	printf("bill amount is %d",bill_amt); 
}
main()
{
   int n;
   scanf("%d",&n);
   if(n<=10)
   {
   	printf("no is less than equal to 10");
   }
   else
   {
   	printf("no is  greater");
   	
   }
}
#include<stdio.h>
main()
{
	int n1,n2;
	char ch;
	printf("enter two no");
    scanf("%d%d\n",&n1,&n2);
	
	printf("add=+\n");
	printf("subtract=-\n");
	printf("mul=*\n");
	printf("div=/\n");
	printf("modulo=%\n");
	
	printf("enter your choice=\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':
			printf("add =%d",n1+n2);
		    break;
		case '-':
		  printf("sub=%d",n1-n2);
		  break;
		 
		case '*':
		  printf("multiply=%d",n1*n2);
	      break;
		 
		case '/':
		 printf("division=%d",n1/n2);
		break;
		
		case '%':
		 printf("modulo=%d",n1%n2);
		 break;
		 
		default:
		 printf("invalid choice");   	
	}
}
#include<stdio.h>
main()
{
	int id;
	printf("enter your id");
	scanf("%d",&id);
	switch(id)
	{
		case 7:
		case  19:
		case 41:
		 printf("hr\n");
		  break;
		case 11:
		case 28:
		case 66:
		 printf("developer\n");
		 break;
		  
		default :
		 printf("invlid id");  	
	}

main()
{
	int i=0;
	label:
		printf("enter 1 to end program");
		scanf("%d",&i);
		
		if(i!=1)
		{
			printf("you enter %d carry on",i);
			goto label;
		}
		printf("end of program");
}
main()
{
	int n,i=1;
	printf("enter the no to print its  table:");
	scanf("%d",&n);
	label:
		if(i<=10)
		{
			printf("%d\n",n*i);
			i++;
			goto label;
		}
}
main()
{
	int n;
	label:
		
	 printf("enter a no=press 0 to exit");
 	 scanf("%d",&n);
		if(n!=0)
		{
			printf("square of %d is %d",n,n*n);
			goto label;
		}
		else
		 printf("end of program");
}
main ()
{
	int i;
	label:
		printf("enter no 1 to 10 press 0 to exit");
		scanf("%d",&i);
		if(i>=1&& i<=10)
		{
			printf("square of %d is %d ",i,i*i);
			goto label;
		}
		else if(i>10)
		{
			printf("try again");
			goto label;
		}
		else
		{
			printf("end of program");
		}
}
main()
{
	int i;
	for(i=0;i<=10;i++)
	{
		printf("square of %d is %d\n",i,i*i);
	}
}
main(){
	int i;
	printf("enter even no 1 to 25");
	for(i=1;i<=25;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
}
main()
{
	int i=0,n;
	scanf("%d",&n);
	while(n<=10)
	{
		printf("square of %d is %d",n,n*n);
		n++;
	}
}
main()
{
	int n,m;
	int ch;
	scanf("%d",&n);
	scanf("%d",&m);
	do
	{
		printf("\n 1 for add");
		printf("\n 2 for sub");
		printf("\n 3 for mul");
		printf("\n 4 for divide");
		printf("\n 5 for modulo");
		printf("\n 6 for end");
		printf("\n enter your choice=");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n add is %d",n+m);
				break;
			case 2:
			 printf("\n sub is %d",n-m);
			 break;
			case 3:
			 printf("\n multiply is %d ",n*m);
			 break;
			case 4:
			 printf("\n divide is %d",n/m);
			  break;
			case 5:
			  printf("\n modulo is %d",n%m);
			   break;
		    case 6:
			  printf("end of program");
			  break;
			default:
				printf("invalid choice");
		}
		
	}while(ch!=6);
}
main()
{
	int n;
	while(1)
	{
		printf("enter any no");
		printf("press 0 to exit\n");
		printf("%d",&n);
	    if(n==0)
	    {
	    	printf("end\n");
	    	break;
		}
		else if(n>100)
		{
			printf("try again\n");
			continue;
	    }
	}
	printf("\n square of %d is %d\n",n,n*n);
}
main(int argc,char*argv[])
{
	printf("program name %s\n",argv[0]);
	if(argc==2)
	{
		printf(" argument supplied is %s\n",argv[1]);
	}
	else if(argc>2)
	{
		printf("too many argument\n");
	}
	else
	{
		printf("one argument expected\n");
	}
}*/

























