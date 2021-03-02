
 /*main()
{
	int i,sq,n,sum=0;
	printf("enter any no:");
	scanf("%d",&n);
	sq=n*n;
	while(sq>0)
	{
		sum=sum+sq%10;
		sq=sq/10;
	}
	if(sum==n)
	 printf("neon no");
	else
	 printf("not");
}
#include<stdio.h>

int checkAutomorphic(int num)
{
    int square = num * num;
    
    while (num > 0)
    {
        if (num % 10 != square % 10)
            return 0;
        
        // Reduce N and square
        num = num / 10;
        square = square / 10;
    }
    return 1;
}

int main()
{
    //enter value
    int num;
    scanf("%d",&num);
    
    //checking condition
    if(checkAutomorphic(num))
        printf("Automorphic"); 
    else
        printf("Not Automorphic");
    return 0;
}
#include<stdio.h>
main()
{
	int d,n,sum=0,prod=1;
	printf("enter a no");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		sum=sum+d;
		prod=prod*d;
		n=n/10;
		
	}
	if(sum==prod)
	 printf("spy no");
	else
	 printf("not spy"); 
}
#include<stdio.h>
main()
{
	int n,t,sum=0;
	printf("enter a no");
	scanf("%d",&n);
	while(sum!=1&&sum!=4)
	{
		sum=0;
		while(n>0)
		{
			t=n%10;
			sum=sum+(t*t);
			n=n/10;
		}
		n=sum;
	}
	if(sum==1)
	  printf("happy no");
    else
	  printf("not "); 
}
#include<stdio.h>
#include<math.h>
main()
{
	int n;
	double x;
	printf("enter any no");
	scanf("%d",&n);
	x=(sqrt(n+1));
	if((int)x==x)
	 printf("sunny no");
	else
	 printf("not"); 
}
#include<stdio.h>
int isfascinating(int);
main()
{
	int num,freq;
	printf("enter a 3 digit no");
	scanf("%d",&num);
	if(isfascinating(num)==1)
	 printf("%d is fascinating no",num);
	else
	 printf("not"); 
}
int isfascinating(int n)
{
	int n2=n*2;
	int n3=n*3;
	int i;
	int freq[11]={0};
	while(n!=0)
	{
		freq[n%10]++;
		n/=10;
	}
	while(n2!=0)
	{
		freq[n2%10]++;
		n2/=10;
	}
	while(n3!=0)
	{
		freq[n3%10]++;
		n3/=10;
	}
	for(i=1;i<=9;i++)
	{
		if(freq[i]!=1)
		return 0;
	}
	return 1;
}
#include<stdio.h>
#include<math.h>
main()
{
	int n,t;
	int sum=0,count=0,r;
	printf("enter a no");
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		t=t/10;
		count++;
	}
	t=n;
	while(t!=0)
	{
		r=t%10;
		sum=sum+pow(r,count);
		t=t/10;
		count--;
	}
	if(sum==n)
	 printf("disarium no");
	else
	 printf("not"); 
}
#include<stdio.h>
main()
{
	int n,num;
	int flag=0;
	printf("enter a no:");
	scanf("%d",&num);
	for(n=0;n<=num;n++)
	{
		if(n*(n+1)==num)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	 printf("pronic no");
	else
	 printf("not"); 
	
}
#include<stdio.h>
main()
{
	int n;
	int flag=1;
	long cube;
	printf("enter a no");
	scanf("%d",&n);
	cube=n*n*n;
	while(n!=0)
	{
		if(n%10!=cube%10)
		{
			flag=0;
			break;
		}
		n=n/10;
		cube/=10;
	}
	if(flag==1)
	 printf("trimorphic no");
	else
	 printf("not");
}
#include<stdio.h>
main()
{
	int n,count=0;
	printf("enter any no");
	scanf("%d",&n);
	while(n!=0)
	{
		if(n%2==1)
		 count++;
		
		n=n/2; 
	}
	if(count%2==0)
	 printf("evil no");
	else
	 printf("odious no"); 
}
#include<stdio.h>
main()
{
	int n,cn,i,j;
	long int fact;
	printf("enter a number");
	scanf("%d",&n);
	printf("factorial of no bwn 1 to %d",n);
	printf("number: factorial\n");
	for(i=1;i<=n;i++)
	{
		cn=i;
		fact=1;
		for(j=1;j<=cn;j++)
		{
			fact=fact*j;
		}
		printf("%5d  :   %ld\n",cn,fact);
	}
}
#include<stdio.h>
main()
{
	int i,j,cn,n,count=0;
	printf("enter any no");
	scanf("%d",&n);
	printf(" prime no bwn 1 to %d ",n);
	for(i=1;i<=n;i++)
	{
		cn=i;
		count=0;
	
		for(j=1;j<=cn;j++)
		{
			if(cn%j==0)
			{
				count++;
			}
		}
		if(count==2)
		 printf("%d\n",cn);
	
	}
}*/
#

