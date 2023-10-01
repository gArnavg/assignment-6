//Print the factorials of first ‘n’ numbers
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The Number ";
    cin>>n;
    int i;
    int factorial=1;
    for(int i =1;i<=n;i++)
    {
       factorial *= i;
    }
    cout<<factorial;
}