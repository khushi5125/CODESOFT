#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    cout<<"\n\t\t \t\t\t Welcome to Guessing Number Game"<<endl<<endl;
    cout<<"\n\t\t\t\t\t\tINSTRUCTIONS"<<endl;

    cout<<"\n\t\tEnter you want to guess number between 1 to 100:"<<endl;
    cout<<"\t \tyou will get limited chances based on difficulty level you select:"<<endl;

               while(true)
            {
                cout<<"\nDifficulty Levels\n";
                cout<<"\n1 for easy level!!\t";
                cout<<"\n2 for medium level!!\t";
                cout<<"\n3 for difficult level!!\t";
                cout<<"\n0 for ending the game!!\n"<<endl;

                //choose your difficulty

                int level;
                cout<<"Enter the difficulty level number: ";
                cin>>level;

                srand(time(0));
                int randumNumber= (rand() % (100-1)) + 1;
                int guess;

             if(level==1)
            {
                    cout<<"you will get 8 choices for finding random number between 1 to 100.";
                    int leftchances=8;
                    for(int i=1; i<=8 ; i++)
                {
                    //Asking the player to guess number

                    cout<<"\n\nEnter the number: ";
                    cin>>guess;
                    if(guess==randumNumber)

                    {

                        cout<<"ohhh! You guessed the right number";
                        break;

                    }
                    else if(guess>randumNumber)
                    {
                        cout<<guess<<" is higher than the random number";
                    }
                    else
                    {
                        cout<<guess<<" is lower than the random number";
                    }
                     leftchances--;
                    if(leftchances==0)
                    {
                        cout<<"\n Beter luck next time"<<endl;
                        cout<< randumNumber <<"\t is the number";
                    }
                }

            }
            else if(level==2)
            {
                    cout<<"you will get 6 choices for finding random number between 1 to 100.";
                    int leftchances=6;
                    for(int i=1; i<=6 ; i++)
                {
                    //Asking the player to guess number

                    cout<<"\n\nEnter the number: ";
                    cin>>guess;
                    if(guess==randumNumber)

                    {

                        cout<<"ohhh! You guessed the right number";
                        break;

                    }
                    else if(guess>randumNumber)
                    {
                        cout<<guess<<" is higher than the random number";
                    }
                    else
                    {
                        cout<<guess<<" is lower than the random number";
                    }
                     leftchances--;
                    if(leftchances==0)
                    {
                        cout<<"\n Beter luck next time"<<endl;
                        cout<<randumNumber <<"\tis the number";
                    }
                }

            }
            else if(level==3)
            {
                    cout<<"you will get 4 choices for finding random number between 1 to 100.";
                    int leftchances=4;
                    for(int i=1; i<=4 ; i++)
                {
                    //Asking the player to guess number

                    cout<<"\n\nEnter the number: ";
                    cin>>guess;
                    if(guess==randumNumber)\

                    {

                        cout<<"ohhh! You guessed the right number";
                        break;

                    }
                    else if(guess>randumNumber)
                    {
                        cout<<guess<<" is higher than the random number";
                    }
                    else
                    {
                        cout<<guess<<" is lower than the random number";
                    }
                    leftchances--;
                    if(leftchances==0)
                    {
                        cout<<"\n Beter luck next time"<<endl;
                        cout<<randumNumber <<"\tis the number";
                    }
                }

            }
            else if(level==0)
            {
                exit(0);
            }
            else
            {
                cout<<"Kindle select between (0,1,2,3)"<<endl;
            }
            }
            return 0;
}

