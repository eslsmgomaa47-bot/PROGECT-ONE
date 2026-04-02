#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>
enum rewaa{stone=1,paper=2,scissors=3};
void print_choces()
{
    cout<<"*****************************************************\n";
    cout<<"(1).stone\n(2). Paper\n(3). Scissors\n";
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
int random_number()
{
    int number_PC=rand()%3+1;
    return number_PC;
}
int read_round()
{
    int rawend;
    cout<<"Enter the number of rounds you want to play: ";
    cin>>rawend;
    return rawend;
}
void determine_winner(int number_user,int number_PC ,int rawend)
{
    int user_wins=0, pc_wins=0, ties=0;
    for(int i=1;i<=rawend;i++)
    {
        cout<<"___________________[Round] "<<"["<<i<<"]___________________"<<":\n";
        number_user=read_number();
        number_PC=random_number();
        cout<<"Computer chose: ";
        switch(number_PC)
        {
            case stone:
                cout<<"stone\n";
                break;
            case paper:
                cout<<"paper\n";
                break;
            case scissors:
                cout<<"scissors\n";
                break;
        }
        cout<<"You chose: ";
        switch(number_user)
        {
            case stone:
                cout<<"stone\n";
                break;
            case paper:
                cout<<"paper\n";
                break;
            case scissors:
                cout<<"scissors\n";
                break;
        }
    if(number_user==number_PC)
    {
        cout<<"It's a tie!\n";
        ties++;
    }
    else if((number_user==stone && number_PC==scissors) || (number_user==paper && number_PC==stone) || (number_user==scissors && number_PC==paper))
    {
        cout<<"Congratulations! You win!\n";
        user_wins++;
    }
    else
    {
        cout<<"Sorry! You lose!\n";
        pc_wins++;
    }
}
cout<<"************************************************************\n";
    cout<<"Final Results:\n";
    cout<<"You won "<<user_wins<<" round(s).\n";
    cout<<"Computer won "<<pc_wins<<" round(s).\n";
    cout<<"Ties: "<<ties<<" round(s).\n";
    if(user_wins>pc_wins)
    {
        cout<<"Overall Winner: You!\n";
    }
    else if(pc_wins>user_wins)
    {
        cout<<"Overall Winner: Computer!\n";
    }
    else
    {
        cout<<"Overall Result: It's a tie!\n";
}

}
void again_geme()
{
    char play_again;
    cout<<"Do you want to play again? (y/n): ";
    cin>>play_again;
    while(play_again=='y' || play_again=='Y')
    {
        int rawend=read_round();
        print_choces();
        int number_user=read_number();
        int number_PC=random_number();
        determine_winner(number_user,number_PC,rawend);
        cout<<"Do you want to play again? (y/n): ";
        cin>>play_again;
    }
    cout<<"Thank you for playing! Goodbye!\n";
}
int main()
{
    srand(time(0));
     int raund=read_round();
    print_choces();
    int number_user=read_number();
    int number_PC=random_number();
    
    determine_winner(number_user,number_PC,raund);
    again_geme();
    return 0;
}
