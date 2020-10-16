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
    return a.second > b.second;
}
int main()
{
    ull numOfTargetMatchboxes, containerMatchboxes, sol = 0, currMatchboxes = 0, tempInp;
    int numOfcontainers, matchesInMacthbox, tempInp2, idx = 0;

    vector<pair<ull,int>> containers;
    cin>>numOfTargetMatchboxes>>numOfcontainers;

    while(idx<numOfcontainers)
    {
        cin>>tempInp>>tempInp2;
        containers.push_back({tempInp,tempInp2});
        idx++;
    }

    idx = 0 ;
    
    sort(containers.begin(), containers.end(), sortPairs);

    while(currMatchboxes < numOfTargetMatchboxes && idx<numOfcontainers)
    {
        //cout<<containers[idx].second<<endl;
        tempInp2 = min(numOfTargetMatchboxes - currMatchboxes, containers[idx].first);
        //cout<<"temp = "<<tempInp2<<endl;
        sol += tempInp2 * containers[idx].second;
        currMatchboxes += tempInp2;
        idx++;
    }

    cout<<sol<<endl;
}