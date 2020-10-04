// pro-url: http://codeforces.com/contest/102/problem/B
#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    int n, tempN, numOfSpell = 0;
    string inp;
    cin>>inp;
    if(inp.size()>1)
    {
        n = 0;
        int idx = inp.size();
        while(idx-- && idx>=0)
        {
            n += inp[idx] - '0' ;
        }

        numOfSpell ++;

        while(n>=10)
        {
            tempN = 0;
            numOfSpell++;
            while(n)
            {
                tempN += n%10;
                n /= 10;
            }
            n = tempN;
        }
    }
        
    
    cout<<numOfSpell<<endl;
    return 0;
}