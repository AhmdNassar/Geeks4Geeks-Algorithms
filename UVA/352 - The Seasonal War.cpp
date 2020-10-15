#include<iostream>
#include<vector>

using namespace std;

int n;
void dfs(int i, int j, vector<string> &matrix, vector<vector<bool>> &visited)
{
    if(!visited[i][j])
    {
        visited[i][j] = true;

        if(i-1 >=0 && j-1 >=0 && matrix[i-1][j-1] == '1') dfs(i-1,j-1,matrix,visited); 
        if(i-1 >=0 && matrix[i-1][j] == '1') dfs(i-1,j,matrix,visited); 
        if(i-1 >=0 && j+1 <n && matrix[i-1][j+1] == '1') dfs(i-1,j+1,matrix,visited); 

        if( j-1 >=0 && matrix[i][j-1] == '1') dfs(i,j-1,matrix,visited); 
        if( j+1 <n && matrix[i][j+1] == '1') dfs(i,j+1,matrix,visited); 

        if(i+1 <n && j-1 >=0 && matrix[i+1][j-1] == '1') dfs(i+1,j-1,matrix,visited); 
        if(i+1 <n && matrix[i+1][j] == '1') dfs(i+1,j,matrix,visited); 
        if(i+1 <n && j+1 <n && matrix[i+1][j+1] == '1') dfs(i+1,j+1,matrix,visited); 
    }
    

}
int main()
{
    int sol = 0, imgNumber = 0;

    while(cin>>n)
    {
        sol = 0;
        imgNumber ++;
        vector<string> matrix(n);
        vector<vector<bool>> visited(n,vector<bool>(n,false));

        for(int i=0; i<n;i++)
        {
            cin>>matrix[i];
        }
        for(int i=0; i<n;i++)
        {
            for(int j=0; j<n; j++)
            {
                if(matrix[i][j] == '1' && !visited[i][j])
                {
                    sol++;
                    dfs(i,j,matrix,visited);
                }
            }
        }
        cout<<"Image number "<<imgNumber<<" contains "<<sol<<" war eagles."<<endl;
    }

    
}
