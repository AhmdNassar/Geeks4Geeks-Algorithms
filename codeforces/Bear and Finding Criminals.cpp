#include<iostream>
#include<string>

using namespace std;

#define ll(n) for(int k = 0; k<n; k++)

int main()
{
    int numOfCities, policeLocation, sol = 0;
    cin>>numOfCities>>policeLocation;

    int arr[numOfCities];
    ll(numOfCities) cin>>arr[k];

    policeLocation--; // to be 0 based index 
    sol += arr[policeLocation];

    int left = policeLocation - 1;
    int right = policeLocation + 1;

    while(left>=0 && right <numOfCities)
    {
        if(arr[left] && arr[right])
            sol+=2;
        left--;
        right++;
    }
    while(left>=0)
    {
        if(arr[left]) sol++;
        left--;
    }

    while(right<numOfCities)
    {
        if(arr[right]) sol++;
        right++;
    }

    cout<<sol<<endl;
}