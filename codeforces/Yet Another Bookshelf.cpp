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
    int testCases, numOfPlaces, sol, leftIdx, temp, idxCnt = 0;
    cin>>testCases;
    while(testCases--)
    {
        leftIdx = -1;
        idxCnt = 0;
        cin>>numOfPlaces;
        sol=0;
        while(numOfPlaces--)
        {
            cin>>temp;
            idxCnt ++;
            if(temp)
            {
                
                if(leftIdx == -1)
                    leftIdx = idxCnt;
                else
                {
                    sol += idxCnt - leftIdx - 1;
                    leftIdx = idxCnt;
                }
                
            }
        }
         cout<<sol<<endl;
        
    }

}
