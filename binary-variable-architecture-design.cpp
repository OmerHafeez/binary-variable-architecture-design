#include<iostream>
using namespace std;
int main ()
{
	//declaring the variable
int a,b,c,d,e,A;
// taking integer input from the user
cout<<"Enter a number between 0 and 9: ";
cin>>a;

	if(a==0)
	{															//As we calculate it by using the divide and mod rule on paper
		b=a%2;													//taking mod by 2 and store in different variable
		a=a/2;													//dividing by 2 and store in same variable
		c=a%2;													//taking mod by 2 and store in different variable
		a=a/2;													//dividing by 2 and store in same variable
		d=a%2;													//taking mod by 2 and store in different variable
		a=a/2;													//dividing by 2 and store in same variable
		e=a%2;													//taking mod by 2 and store in different variable
		a=a/2;													//dividing by 2 and store in same variable
		cout<<e<<d<<c<<b;
	}
	else if(a==1)												//repeat this step for all the 9 numbers
	{
		b=a%2;
		a=a/2;
		c=a%2;
		a=a/2;
		d=a%2;
		a=a/2;
		e=a%2;
		a=a/2;
		cout<<e<<d<<c<<b;
	}
	else if(a==2)
	{
		b=a%2;
		a=a/2;
		c=a%2;
		a=a/2;
		d=a%2;
		a=a/2;
		e=a%2;
		a=a/2;
		cout<<e<<d<<c<<b;
	}
	else if(a==3)
	{
		b=a%2;
		a=a/2;
		c=a%2;
		a=a/2;
		d=a%2;
		a=a/2;
		e=a%2;
		a=a/2;
		cout<<e<<d<<c<<b;
	}
	else if(a==4)
	{
		b=a%2;
		a=a/2;
		c=a%2;
		a=a/2;
		d=a%2;
		a=a/2;
		e=a%2;
		a=a/2;
		cout<<e<<d<<c<<b;
	}
	else if(a==5)
	{
		b=a%2;
		a=a/2;
		c=a%2;
		a=a/2;
		d=a%2;
		a=a/2;
		e=a%2;
		a=a/2;
		cout<<e<<d<<c<<b;
	}
	else if(a==6)
	{
		b=a%2;
		a=a/2;
		c=a%2;
		a=a/2;
		d=a%2;
		a=a/2;
		e=a%2;
		a=a/2;
		cout<<e<<d<<c<<b;
	}
	else if(a==7)
	{
		b=a%2;
		a=a/2;
		c=a%2;
		a=a/2;
		d=a%2;
		a=a/2;
		e=a%2;
		a=a/2;
		cout<<e<<d<<c<<b;
	
	}
	else if(a==8)
	{
		b=a%2;
		a=a/2;
		c=a%2;
		a=a/2;
		d=a%2;
		a=a/2;
		e=a%2;
		a=a/2;
		cout<<e<<d<<c<<b;
	
	}
	else if(a==9)
	{
		b=a%2;
		a=a/2;
		c=a%2;
		a=a/2;
		d=a%2;
		a=a/2;
		e=a%2;
		a=a/2;
		cout<<e<<d<<c<<b;
	}
																		//We will get the value of binary by printing the value in the order of e d c b
	switch(e==1)
	{
		case 1:															//if the condition is true then 
			{
				A=A+8;													//if the 8 bit is on then add 8 in the number
				break;													//break wiill help in not getting in valid output
			}
		
		case 0:															//in case the condition is false
		break;
		
	}
	switch(d==1)													
	{
		case 1:															//if the condition is true then 
			{
				A=A+4;													//if the 4 bit is on then add 4 in the number
				break;
			}
		
		case 0:
		break;
		
	}
	switch(c==1)
	{
		
		case 1:															//if the condition is true then
		{														
			A=A+2;														//if the 2 bit is on then add 2 in the number
			break;
		}
		
		case 0:
		break;
	}
		
	switch(b==1)													
	{
		case 1:															//if the condition is true then
	{
		A=A+1;															//if the 1 bit is on then add 1 in the number
		break;
	}
		
		case 0:
		break;
	}
	cout<<endl<<"The value of the variable after the conversaion in layer3 is: "<<A;
}