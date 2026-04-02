#include<iostream>
using namespace std;
void print_numbers(int n,int m)
{
    if(n<=m)
    {
        cout<<n<<" ";
        print_numbers(n+1,m);
    }
}
int main()
{
   print_numbers(1,10);
}