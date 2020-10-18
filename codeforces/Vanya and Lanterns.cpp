#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std;

#define lo(n) for(int k = 0; k<n; k++)
#define ll long long int
#define ull unsigned long long int


int main()
{
    int numOfLanterns;
    double minRadius, streetLength, maxDistance = 0;

    cin>>numOfLanterns>>streetLength;

    double lanternsPosition[numOfLanterns];

    lo(numOfLanterns)
        cin>>lanternsPosition[k];
    
    sort(lanternsPosition, lanternsPosition + numOfLanterns);

    
    for(int i = 1; i<numOfLanterns; i++)
        maxDistance = max(maxDistance, lanternsPosition[i] - lanternsPosition[i-1]);
    
    minRadius = max(max( lanternsPosition[0],  streetLength - lanternsPosition[numOfLanterns-1]), maxDistance/2.0);

    cout<< std::setprecision(9)<< std::fixed<< minRadius<<endl;
}