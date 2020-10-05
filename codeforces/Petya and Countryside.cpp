#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int cur, MAX = 0;
    for(int i=0; i<n; i++)
    {
        cur = 1;
        int idx = i;
        int next = i + 1;

        while(next<n)
        {
            if(arr[next]<=arr[idx])
            {
                cur++;
                next++;
                idx++;
            }
            else
                break;
        }
        idx = i;
        int pre = idx -1 ;
        while(pre>=0)
        {
            if(arr[pre]<=arr[idx])
            {
                pre--;
                idx--;
                cur++;
            }
            else
                break;
        }
        MAX = max(cur,MAX);
    }
    cout<<MAX<<endl;
}