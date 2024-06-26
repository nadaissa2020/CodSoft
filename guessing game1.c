#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int possibilities=6;
	int guess;
	int randnum;
	
	srand(time(0));
	randnum=rand()%25;
	cout<<"welcome to the number guessing game\n";
	cout<<"i think of a random number between 0 and 25,in 6 possibilities ";
	for (int i=0;i<possibilities;i++)
	{ cout<<"guess"<<i+1<<":";
	cin>>guess;
	if(guess!=randnum)
	{ if (guess<randnum)
	cout<<"its too low\n";
	else 
	cout<<"its too high\n";
	
	}
	else
	 {
	cout<<"its a correct number";
	break;
	}
}
	return 0;
} 

	
