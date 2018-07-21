#include<iostream>
#include<ctime>
#include<string.h>
#include<conio.h>
#include<cstdlib>
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
using namespace std;
int guess(char,string,string&);

int lives=8;	
int main()
{
	int  wrong_guesses=0;
	string word;
	int n,p;
	char letter;
	string words[]=
	{
	"india",
	 "england",
	 "france",
	 "croatia",
	 "denmark",
	 "argentina",
	 "brazil",
	 "nigeria",
	 "japan",
	 "russia",
	 "germany",
	 "mexico",
	};
	srand(time(NULL));
	 n=rand()%12;
	word=words[n];
	string unknown(word.length(),'*');
		cout<<"*****************welcome to hangman*****************"<<endl;
	cout<<"\t\tRULES\t\t"<<endl;
	cout<<"objective of this game is to guess the word correctly"<<endl<<"each correct guess is displayed to the corresponding position of the letter in that word"<<endl;
	cout<<"each incorrect guess results in drawing of the hangman. once the hangman is complete u shall LOSSE"<<endl;
	cout<<"you have 8 lives "<<endl;
	cout<<"guess the name of a nation"<<endl;
	while(wrong_guesses<lives)
	{
		cout<<"\n\n"<<unknown;
		cout<<"\n\nguess a letter"<<endl;
		cin>>letter;
	
		if(guess(letter,word,unknown)==0)
		{
			cout<<endl<<"WRONG GUESS!!"<<endl;
			cout<<"\n\n";
			wrong_guesses++;
			p=wrong_guesses;
				if(p>0)
	{
			switch(p)
		{
			case 1:
				cout<<"     |     "<<endl;
				break;
			case 2:
				cout<<"     |     "<<endl;
				cout<<"     |     "<<endl;
				break;
			case 3:
				cout<<"     |     "<<endl;
				cout<<"     |     "<<endl;
				cout<<"     O     "<<endl;
				break;
			case 4:
				cout<<"     |     "<<endl;
				cout<<"     |     "<<endl;
				cout<<"     O     "<<endl;
				cout<<"     |     "<<endl;
				break;
			case 5:
				cout<<"     |     "<<endl;
				cout<<"     |     "<<endl;
				cout<<"     O     "<<endl;
				cout<<"    -|-     "<<endl;
			
				break;
		
			case 6:
				cout<<"     |     "<<endl;
				cout<<"     |     "<<endl;
				cout<<"     O     "<<endl;
				cout<<"    -|-     "<<endl;
				cout<<"    [      "<<endl;
				break;
			case 7:
				cout<<"     |      "<<endl;
				cout<<"     |      "<<endl;
				cout<<"     O      "<<endl;
				cout<<"    -|-     "<<endl;
				cout<<"    [ ]     "<<endl;
				break;
				
				
			case 8:
				cout<<"     |     "<<endl;
				cout<<"     |     "<<endl;
				cout<<"     O     "<<endl;
				cout<<"    -|-    "<<endl;
				cout<<"    [ ]    "<<endl;
				cout<<"___________"<<endl;
				cout<<"|         |"<<endl;
				cout<<"|_________|"<<endl;
				break;
				
								
			
		}
		}
		
				
		}
		else
		{
		
			cout<<endl<<"WOW!! CORRECT GUESS. "<<endl;
		}
		cout<<endl<<"you have "<<lives-wrong_guesses<<" lives remaining"<<endl;
		if(word==unknown)
		{
			cout<<word<<endl;
			cout<<"CONGRATS!!YOU HAVE SURVIVED!!"<<endl;
			break;
		}
	}
	if(lives==wrong_guesses)
	{
		cout<<"opps!!you have been hanged!!";
		cout<<"the word was:"<<word<<endl;
	}
	cin.ignore();
	cin.get();
	return 0;
}

int guess(char letter,string word,string &unknown)
{
	int i,n;
	int match=0;
	n=word.length();
	for(i=0;i<n;i++)
	{
		if(letter ==unknown[i])
		return 0;
		if(letter==word[i])
		{
			unknown[i]=letter;
			match++;
		}
	
	
	}
	
	return match;
	}



