//WAP to print the sum of all the even digits of a given number.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The Number ";
    cin>>n ;

    int count = 0;
    int a = n;

    int lastdigit = 0;
    int sum = 0;

    while (n > 0) 
    {
        int ld = n % 10;
        sum += (ld % 2 == 0 ? ld : 0);
        n /= 10;
    }
    cout<<sum;
}