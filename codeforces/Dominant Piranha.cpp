#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

#define lo(n) for(int k = 0; k<n; k++)
#define ll long long int
#define ull unsigned long long int

bool sortPairs(pair<ull,int> a, pair<ull,int> b)
{
    return a.first > b.first;
}

int main()
{
    long int testCases, numOfItems, maxSize, idxOfMax, currIdx, temp;
    bool  equalFlag;

    cin>>testCases;
    while(testCases--)
    {
        cin>>numOfItems;
        vector<int> items;

        maxSize = 0;
        currIdx = 1;
        equalFlag = true;

        while(currIdx <= numOfItems)
        {
            cin>>temp;
            if(maxSize && equalFlag && temp != maxSize) equalFlag = false;
            items.push_back(temp);
            if(temp>maxSize)
            {
                maxSize = temp;
                idxOfMax = currIdx;
            }
            currIdx++;
        }
        if(!equalFlag)
        {
            if(idxOfMax - 2 >=0 && items[idxOfMax-2] < maxSize)
                cout<<idxOfMax<<endl;
            else if(idxOfMax < numOfItems && items[idxOfMax] < maxSize)
                cout<<idxOfMax<<endl;
            else
            {
                currIdx = 0;
                while(currIdx<numOfItems)
                {
                    if(items[currIdx] == maxSize && currIdx + 1 != idxOfMax)
                    {
                        if(currIdx - 1 >=0 && items[currIdx-1] < maxSize)
                            {
                                cout<<currIdx+1<<endl;
                                break;
                            }
                        else if(currIdx + 1 < numOfItems && items[currIdx+1] < maxSize)
                            {
                                cout<<currIdx+1<<endl;
                                break;
                            }
                    }
                    currIdx++;
                }
            }
        }
        else
            cout<<-1<<endl;
        
         
    }
}
