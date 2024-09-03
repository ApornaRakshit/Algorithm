#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    int mat[n][n];
    memset(mat, 0 , sizeof(mat));
    while(e--)
    {
        int a, b; 
        cin >> a >> b;
        // step 2 : matreix er cell a input value 1 neya

        mat[a][b] = 1;
        mat[b][a] = 1;
    }
    // step 3 : mat er loop check
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }  
    return 0;
}

// Output: 
6 6
0 1 
0 3
0 4
1 5  
3 4
 4 2
0 1 0 1 1 0 
1 0 0 0 0 1 
0 0 0 0 1 0 
1 0 0 0 1 0 
1 0 1 1 0 0 
0 1 0 0 0 0
