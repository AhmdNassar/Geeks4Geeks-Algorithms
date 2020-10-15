// pro-url: http://codeforces.com/contest/746/problem/B
#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    int n;
    string inp,copy;
    cin>>n>>inp;

    copy = inp;

    int i=n-1,leftIdx = 0, rightIdx = n-1, rightOrLeft=1; // 0 = lef, 1 = right
    while(i>=0)
    {
        if(rightOrLeft)
        {
            copy[rightIdx] = inp[i];
            rightIdx--;
        }
        else
        {
            copy[leftIdx] = inp[i];
            leftIdx++;
        }
        rightOrLeft = !rightOrLeft;
        i--;
    }
    cout<<copy<<endl;
    return 0;
}