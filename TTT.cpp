#include<iostream>
using namespace std;

char options[3][3] ={ '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char b;
int a;
void table();
void calc();
char winlose();
int main()
{
	char p;
	for(int i=1;i<10;i++)
	{
		table();
		if(i%2==0)
		{
			cout<<"\n Player2 Turn: ";
			cin>>a;
			b='O';
			calc();
			p=winlose();
    	}
		else
		{
			cout<<"\n Player1 Turn: ";
            cin>>a;
            b='X';
            calc();
            p=winlose();
		}
		table();
        if(p=='X')
        {
        cout<<"\n\a Player1 Wins!";
        break;
        }
        else if(p=='O')
        {
        cout<<"\n\a Player2 Wins!";
        break;
        }
    }
    if(p!='X'&&p!='O')
    cout<<"\n Draw!";
  return 0;
}

//Function to prepare the board of Tic Tac Toe

void table()
{
	system("cls");
	cout<<"\n\n\t TIC TAC TOE \n\n Choose any number: \n";
	char pattern[18]={"*----|-----|----*"};
	for(int i=1;i<8;i++)
	{
		if(i%2!=0)
		cout<<pattern<<"\n";
		else
		{
			switch(i)
			{
			case 2: cout << "  " << options[0][0] << "  |  " << options[0][1] << "  |  " << options[0][2] << endl; break;
			case 4: cout << "  " << options[1][0] << "  |  " << options[1][1] << "  |  " << options[1][2] << endl; break;
			case 6: cout << "  " << options[2][0] << "  |  " << options[2][1] << "  |  " << options[2][2] << endl; break;
		    }
		}
	}
}

//Function to mark the given option with respective letter

void calc()
{
	if(a == 1 && options[0][0] == '1')
     options[0][0] = b;
    else if(a == 2 && options[0][1] == '2')
     options[0][1] = b;
    else if(a == 3 && options[0][2] == '3')
     options[0][2] = b;
    else if(a == 4 && options[1][0] == '4')
     options[1][0] = b;
    else if(a == 5 && options[1][1] == '5')
     options[1][1] = b;
    else if(a == 6 && options[1][2] == '6')
     options[1][2] = b;
    else if(a == 7 && options[2][0] == '7')
     options[2][0] = b;
    else if(a == 8 && options[2][1] == '8')
     options[2][1] = b;
    else if(a == 9 && options[2][2] == '9')
     options[2][2] = b;
    else
    {
    cout<<"\n Invalid Input!";
    }
}

//Function to decide the winner of the game

char winlose()
{
	if (options[0][0] == b && options[0][1] == b && options[0][2] == b)
        return b;
    else if (options[1][0] == b && options[1][1] == b && options[1][2] == b)
        return b;
    else if (options[2][0] == b && options[2][1] == b && options[2][2] == b)
        return b;

    else if (options[0][0] == b && options[1][0] == b && options[2][0] == b)
        return b;
    else if (options[0][1] == b && options[1][1] == b && options[2][1] == b)
        return b;
    else if (options[0][2] == b && options[1][2] == b && options[2][2] == b)
        return b;

    else if (options[0][0] == b && options[1][1] == b && options[2][2] == b)
        return b;
    else if (options[2][0] == b && options[1][1] == b && options[0][2] == b)
        return b;
    else return '.';
}
