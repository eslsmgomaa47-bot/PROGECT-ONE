#include<iostream>
using namespace std;
// void print_numbers(int n,int m)
// {
//     if(n<=m)
//     {
//         cout<<n<<" "<<endl;
//         print_numbers(n+1,m);
//     }
// }
// int main()
// {
//    print_numbers(1,100);
// }
void print_number(int x,int y)
{
    if(x>=y)
    {
        cout<<x<<" "<<endl;
        print_number(x-1,y);
    }
}
    int main()
    {
        print_number(100,1);
        return 0;
    }