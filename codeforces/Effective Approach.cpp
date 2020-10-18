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
    int n, m, q, temp;
    ll leftCnt = 0, rightCnt = 0;
    cin>>n;

    int numbers[n]{-1};
    fill_n(numbers,n,-1);

    lo(n)
    { 
        cin>>temp;
        numbers[temp] = k + 1;
    }
    cin>>m;
    lo(m)
    {   
        cin>>q;
        leftCnt += numbers[q];
        rightCnt += (n - numbers[q] + 1);

    }

    cout<<leftCnt<<" "<<rightCnt<<endl;
}