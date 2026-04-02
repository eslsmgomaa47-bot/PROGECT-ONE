#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
enum oprations {addition=1,subtraction=2,multiplication=3,division=4,max0=5};
enum level{easy=1,medium=2,hard=3,};
void print_levels()
{
    cout<<"*****************************************************\n";
    cout<<"(1). Easy\n(2). Medium\n(3). Hard\n";
    cout<<"*****************************************************\n";
}
int read_level()
{
    int level_user;
    cout<<"Enter the level of difficulty (1 for easy, 2 for medium, 3 for hard): ";
    cin>>level_user;
    while(level_user<1 || level_user>3)
    {
        cout<<"Invalid choice! Please enter 1, 2, or 3: ";
        cin>>level_user;
    }
    return level_user;
}
void print_oprations()
{
    cout<<"*****************************************************\n";
    cout<<"(1). Addition\n(2). Subtraction\n(3). Multiplication\n(4). Division\n(5). All Operations\n";
    cout<<"*****************************************************\n";
}
char read_opration()
{
    char opration_user;
    cout<<"Enter the opration you want to perform (+, -, *, /): ";
    cin>>opration_user;
    while(opration_user!='+' && opration_user!='-' && opration_user!='*' && opration_user!='/'&& opration_user!='max')
    {
        cout<<"Invalid choice! Please enter +, -, *, or / or max for all operations: ";
        cin>>opration_user;
    }
    return opration_user;
}
int how_many_questions()
{
    int questions;
    cout<<"Enter the number of questions you want to answer: ";
    cin>>questions;
    return questions;
}
int rand_number(int from, int to)
{
      int number=rand()%(to-from+1)+from;
    return number;
}
char rand_opration()
{
    char oprations[] = {'+', '-', '*', '/'};
    int index = rand() % 4;
    return oprations[index];
}
void chose_level(int level,int &from,int &to)  
{
  if(level==easy)
  {
      from=1;
      to=100;
  }
  else if(level==medium)
  {
      from=1;
      to=10000;
  }
  else if(level==hard)
  {
      from=1;
      to=100000;
  }
}
 
    
void chose_answer(char opration_user ,int from,int to,char opration,int how_many_questions_user)
{
    int num1,num2;
    opration=rand_opration();
    num1=rand_number(from,to);
    num2=rand_number(from,to);
    how_many_questions_user=how_many_questions();
    int answer;
    int correct_answer=0;
      
    if(opration_user=='+')
    {
        for(int i=0;i<how_many_questions_user;i++)
        {
        cout<< num1<<" + "<<num2<<"\n";
        cin>>answer;
        if(answer==num1+num2)
        {
            cout<<"Correct!\n";
            correct_answer++;
        }
        else
        {
            cout<<"Incorrect! The correct answer is: "<<num1+num2<<"\n";
        }
         cout<<"You got "<<correct_answer<<" out of "<<how_many_questions_user<<" questions correct.\n";
    }
    }
    else if(opration_user=='-')
    {
            for(int i=0;i<how_many_questions_user;i++)
            {
                cout<< num1<<" - "<<num2<<"\n";
                cin>>answer;
        if(answer==num1-num2)
        {
            cout<<"Correct!\n";
            correct_answer++;
        }
        else
        {
            cout<<"Incorrect! The correct answer is: "<<num1-num2<<"\n";
        }
         cout<<"You got "<<correct_answer<<" out of "<<how_many_questions<<" questions correct.\n";
    }
    }
    else if(opration_user=='*')
    {
            for(int i=0;i<how_many_questions_user;i++)
            {
                cout<< num1<<" * "<<num2<<"\n";
                cin>>answer;
        if(answer==num1*num2)
        {
            cout<<"Correct!\n";
            correct_answer++;
        }
        else
        {
            cout<<"Incorrect! The correct answer is: "<<num1*num2<<"\n";
        }
            cout<<"You got "<<correct_answer<<" out of "<<how_many_questions<<" questions correct.\n";
    }
    }
    else if(opration_user=='/')
    {
            for(int i=0;i<how_many_questions_user;i++)
            {
                cout<< num1<<" / "<<num2<<"\n";
                cin>>answer;
        if(answer==num1/num2)
        {
            cout<<"Correct!\n";
            correct_answer++;
        }
        else
        {
            cout<<"Incorrect! The correct answer is: "<<num1<<opration<<num2<<"\n";
        }
            cout<<"You got "<<correct_answer<<" out of "<<how_many_questions<<" questions correct.\n";
    }
}
}

int main()
{
    srand((unsigned)time(NULL));
    srand(time(0));
    print_levels();
    int level=read_level();
    print_oprations();
    char opration=read_opration();
    int how_many_questions_user=how_many_questions();
    int from,to;
    chose_level(level,from,to);
    chose_answer(opration,from,to,opration,how_many_questions_user);
    return 0;
}