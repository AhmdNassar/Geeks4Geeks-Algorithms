#include<iostream>
#include<string>

using namespace std;

#define ll(n) for(int k = 0; k<n; k++)

int dx[] = { 0, 0, -1};
int dy[] = {-1, 1, 0};

string letters = "IEHOVA";
string road[8];

int letterIdx = 0;
int testCases, n,m,startI, startJ;

bool isValid(int i, int j, int maxI, int maxJ)
{
    if(i>=0 && i<maxI && j>=0 && j < maxJ)
        return true;
    return false;
}

string getDirection(int currI, int currJ, int nextI, int nextJ)
{
    if(currI == nextI)
    {
        if(currJ < nextJ)
            return "right";
        
        
        return "left";
    }

    return "forth";
}

void DFS(int i, int j)
{
    ll(3)
    {
        if(isValid(i+dx[k], j+dy[k], m, n))
        {
            //cout<<road[i+dx[k]][j+dy[k]]<<endl;
            if(letterIdx < 6)
            {
                if(road[i+dx[k]][j+dy[k]] == letters[letterIdx])
                {
                    letterIdx++;
                    i = i+dx[k];
                    j = j+dy[k];
                    cout<<getDirection(i, j, i+dx[k], j+dy[k])<<" ";
                    break;
                }
            }
            else if(road[i+dx[k]][j+dy[k]] == '#')
            {
                cout<<getDirection(i, j, i+dx[k], j+dy[k])<<endl;
                return;
            }
        }
    }
    DFS(i, j);
}

int main()
{

    cin>>testCases;
    while(testCases--)
    {
        letterIdx = 0;
        cin>>m>>n;
        ll(m) 
        {
            cin>>road[k];
            for(int j =0; j<n; j++)
            {
                if(road[k][j]=='@')
                {
                    startI = k; 
                    startJ = j;
                }
            }
        }

        DFS(startI, startJ);

    }
}