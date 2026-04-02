#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>
enum rewaa{room=1,paper=2,scissors=3};
void print_choices()
{
    cout<<"*****************************************************\n";
    cout<<"(1). Room\n(2). Paper\n(3). Scissors\n";
    cout<<"*****************************************************\n";
}
int read_number()
{
    int number_user;
    cout<<"Enter your choice (1, 2, or 3): ";
    cin>>number_user;
    while(number_user<1 || number_user>3)
    {
        cout<<"Invalid choice! Please enter 1, 2, or 3: ";
        cin>>number_user;
    }
    return number_user;
}
int read_rawend()
{
    int rawend;
    cout<<"Enter the number of rounds you want to play: ";
    cin>>rawend;
    return rawend;
}
int random_number()
{
    int number_PC=rand()%3+1;
    return number_PC;
}
void determine_winner(int number_user,int number_PC ,int rawend)
{
    for(int i=1;i<=rawend;i++)
    {
        cout<<"Round "<<i<<":\n";
        number_user=read_number();
        number_PC=random_number();
    if(number_user==number_PC)
    {
        cout<<"It's a tie!\n";
    }
    else if((number_user==room && number_PC==scissors) || (number_user==paper && number_PC==room) || (number_user==scissors && number_PC==paper))
    {
        cout<<"Congratulations! You win!\n";
    }
    else
    {
        cout<<"Sorry! You lose!\n";
    }
}
}
int main()
{
    srand(time(0));
     int rawend=read_rawend();
    print_choices();
    int number_user=read_number();
    int number_PC=random_number();
    
    determine_winner(number_user,number_PC,rawend);
    return 0;
}