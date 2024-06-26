#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	cout<<"_____calculator_____\n";
	float number1,number2;
	char operation;
	
	cout<<"please enter the first number";
	cin>>number1;
	cout<<"choose any operation(+,-,*,/):";
	cin>>operation;
	cout<<"please enter the seconed number";
	cin>>number2;
	
	switch(operation){ 
	case'+':cout<<number1<<"+"<<number2<<"="<<number1+number2;
	break;
	case'-': cout<<number1<<"-"<<number2<<"="<<number1-number2;
	break;
	case'*': cout<<number1<<"*"<<number2<<"="<<number1*number2;
	break;
	case'/': { if(number2==0)
		cout<<"ERRoR";
	cout<<number1<<"/"<<number2<<"="<<number1/number2;	
   }
	break;
	
	default:
cout<<"not correct";
}
return 0;
}

		

	
	
	
	
	
