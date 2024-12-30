// Aqdas Juya , 04/09/2024 ,≈ ajuya@pdx.edu ,  program # 1 , cs 162
// This program will test fundamental math skills. The user will be given simple math questions of a fundamental math problem (addition, subtraction, or multiplication). 
// They can make up to three attempts per question. You will begin with 5 tokens, and if you fail to answer a problem within three attempts, you will lose one token.
// The game will continue until you decide to quit or run out of tokens. ; 

#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;
int main() 
{	
	int input{0};
	const int YES {1};
	const int NO {2};
	int  num1 {0};
	int  num2 {0};
	char operation;
	int rightAnswer {0};
	int tokens = 5;
	int op {0};
	int attempts = 0;
	int answer {0};

	srand(time(0));
	//welcom the user

	cout<<"\nWelcome to the Math Skill Game!\n "<<endl;
	cout<<"This program will test your Fundamental Math Skills."
	    <<" You will be given simple math questions of a Fundamental Math Problem (addition, subtraction, or multiplication)."
	    << "You are only allowed to display two numbers between 0 and 20." 
            <<" You can make up to three attempts per question. You will begin with 5 tokens,"
	    <<" and if you fail to answer a problem within three attempts, you will lose one token." 
	    <<" The game will continue until you decide to quit by entering 2 to quite after every question or run out of tokens.\n";
	cout<<endl;

	cout <<"In this math game, I would ask you a question, such as '3 + 5 = (your answer goes here)'."
	     <<" If you enter the wrong answer, you will be asked the same question up to three times until you get it right."
	     <<" For example, if you answer '3 + 5 = 34', that's incorrect. However, if you provide the correct answer, like '3 + 5 = 8', you will receive a different question.\n";
	cout << endl;

  	cout<<"Would you like to continue?" << endl;
        cout<<"Enter 1 for 'Yes' and 2 for 'No': ";
	cin >> input;
	while (input != 1 && input != 2)
	{
		cout << "Please only enter 1 for 'Yes' and 2 for 'No' : ";
		cin >> input;
	}


	while (tokens > 0 && input != 2) {

		attempts = 0;
		num1 = rand() % 21;
		num2 = rand() % 21;
		op = rand() % 4;


       		if (op == 0)
		{
       		  	operation = '+';
        	  	rightAnswer = num1 + num2;
     	    	} else if (op == 1)
		{
       		  	operation = '-';
        	  	rightAnswer = num1 - num2;
     	    	} else if (op == 2)
		{
        	  	operation = '*';
	          	rightAnswer = num1 * num2;
         	}
		while(attempts < 3 && input == 1 && answer != rightAnswer)
		{
			cout<<"\nSolve: "<< num1 << " "<< operation << " " << num2 << " :" << " ";
			cin>>answer;

			if (answer == rightAnswer)
			{
				cout <<"\nYour answer is correct\n" <<  endl;
			attempts = 4;
			}

			else
			{
				attempts += 1;
				if(attempts < 3)
				{
					cout <<"\nYour answer is not correct, please try again\n" << endl;
				}
				else
				{
					cout <<"\nYour answer is not correct\n" << endl;
				}
			}

                        cout<<"Would you like to continue? Please enter 1 for 'Yes' and 2 for 'No': ";
                        cin >> input;
                        while (input != 1 && input != 2)
                        {
                                 cout << "Please only enter 1 for 'Yes' and 2 for 'No': ";
                                 cin >> input;
                        }

		}
		if (attempts == 3)
		{
			tokens -= 1;
			cout << "\nYou have " <<tokens<< " tokens left" << endl;
		}

	}
	cout<<"\nGame Over. Thank you for using the game. \n"<<endl;
	return 0;
}

