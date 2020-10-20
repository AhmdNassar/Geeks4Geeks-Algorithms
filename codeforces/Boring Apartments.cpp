#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

#define lo(n) for(int k = 0; k<n; k++)
#define ll long long int
#define ull unsigned long long int


int main()
{
    int testCases, x,sol, firstDigit;
    cin>>testCases;
    while(testCases--)
    {
        cin>>x;
        firstDigit = x%10;
        sol = (firstDigit - 1 ) *  10;
        if(x > firstDigit* 1000) // one digit
            sol+=10;
        else if (x > firstDigit*100) // two digit
            sol += 6;
        else if(x > firstDigit * 10)
            sol += 3;
        else
            sol+=1;
        
        cout<<sol<<endl;
    }
}