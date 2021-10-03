#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int a;
	int comp;
	cout<<"\n \t ROCK PAPER SCISSORS \n\n";
	char pattern[16]={"*-*-*-*-*-*-*-*"};
	
	//To display the respective options against the choices
	
	for(int i=1;i<8;i++)
	{
		if(i%2!=0)
		cout<<"\t\t"<<pattern<<"\n";
		else
		{
			switch(i)
			{
			case 2: cout << "\t\t| 1 - ROCK    |" << endl; break;
			case 4: cout << "\t\t| 2 - PAPER   |" << endl; break;
			case 6: cout << "\t\t| 3 - SCISSORS|" << endl; break;
		    }
		}
	}
	cout<<"\n\n CHOOSE YOUR RESPECTIVE OPTION: \n\n 1 for Rock \t 2 for Paper \t 3 for Scissors\n -> ";
	cin>> a;
	
	//To generate computer's choice
	
	srand(time(0));
	comp = rand() % 3 + 1;
	
	//To display the choices
	
	cout<<"\n You Choose: ";
	if(a==1)
		cout<<"Rock";
	else if(a==2)
		cout<<"Paper";
	else if(a==3)
		cout<<"Scissors";
	else cout<<"Invalid Choice";
	
	cout<<"\n Computer Chooses: ";
	if(comp==1)
		cout<<"Rock";
	else if(comp==2)
		cout<<"Paper";
	else if(comp==3)
		cout<<"Scissors";
		
	//To display the winner
	
	if(a==1&&comp==2)
	cout<<"\n\a Computer Wins!";
	else if(a==2&&comp==3)
	cout<<"\n\a Computer Wins!";
	else if(a==3&&comp==1)
	cout<<"\n\a Computer Wins!";
	else if(a==comp)
	cout<<"\n\a Draw!";
	else if(a==2&&comp==1)
	cout<<"\n\a You Win!";
	else if(a==3&&comp==2)
	cout<<"\n\a You Win!";
	else if(a==1&&comp==3)
	cout<<"\n\a You Win!";
	else cout<<"\n Invalid Choice! Please Play Again with correct input";
	
	return 0;
}
