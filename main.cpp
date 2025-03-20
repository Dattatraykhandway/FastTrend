#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main1(int argc, char** argv) {
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			cout<<" * ";		
		}
		cout<<"\n";
	}
	
	return 0;
}

int main2() {
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<" * ";		
		}
		cout<<"\n";
	}
	
	return 0;
}


int main3() {
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j<<"  ";		
		}
		cout<<"\n";
	}
	
	return 0;
}


int main4() {
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<i<<"  ";		
		}
		cout<<"\n";
	}
	
	return 0;
}



int main5() {
	int i,j;
	for(i=1;i<=5;i++)
	{
		char ch='A';
		for(j=1;j<=i;j++)		
		{
			cout<<ch<<"  ";		
			ch++;
		}
		cout<<"\n";
	}	
	return 0;
}



int main6() {
	int i,j;
	char ch='A';
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)		
		{
			cout<<ch<<"  ";					
		}
		ch++;
		cout<<"\n";
	}	
	return 0;
}


int main7() {
	int i,j;
	char ch='A';
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)		
		{
			cout<<ch<<"  ";					
			ch++;
		}
		cout<<"\n";
	}	
	return 0;
}


int main8() {
	int i,j;
	char ch='A';
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)		
		{
			cout<<(i+j)%2<<"  ";					
			ch++;
		}
		cout<<"\n";
	}	
	return 0;
}

int main9() {
	int i,j;

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)		
		{
			cout<<(i+j+1)%2<<"  ";					
		}
		cout<<"\n";
	}	
	return 0;
}

int main10() {
	int i,j;

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=6-i;j++)		
		{
			cout<<"*"<<"  ";					
		}
		cout<<"\n";
	}	
	return 0;
}

int main11()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*"<<"  ";
		}
		for(j=1;j<=6-i;j++)
		{
			cout<<"$"<<"  ";
		}
		cout<<"\n";
	}
	
	return 0;
}

int main12()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=6-i;j++)
		{
			cout<<"  ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"*   ";
		}
		
		cout<<"\n";
	}
	
	return 0;
}


int main13()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"  ";
		}
		for(j=1;j<=6-i;j++)
		{
			cout<<"*   ";
		}
		
		cout<<"\n";
	}
	
	return 0;
}

int main14()
{
	int i,j;
	for(i=1;i<=4;i++)
	{		
		for(j=1;j<=6-i;j++)
		{
			cout<<"  ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"*   ";
		}		
		cout<<"\n";
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"  ";
		}
		for(j=1;j<=6-i;j++)
		{
			cout<<"*   ";
		}		
		cout<<"\n";
	}

	return 0;
}

int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{		
		for(j=1;j<=6-i;j++)
		{
			cout<<"  ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}		
		for(j=i-1;j>=1;j--)
		{
			cout<<j<<" ";		
		}
		cout<<"\n";
	}
	
}

