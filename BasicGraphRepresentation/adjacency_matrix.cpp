#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;

    // step 2: matrix banabo. Matrix tw ektai hobe tai loop er baire. Matrix er size depend kore n er upor...

    int mat[n][n];
    memset(mat, 0 , sizeof(mat));  // memset (Function){(kake access korbo oitar nam=>mat, koto diye korbo, oitar size )}

    //step 3: again loop for matrix

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }  
    //Step 1: input nisi a, b (6 6)

    // for(i=0; i < e; i++)  // akhane i er kono kaj nai. e bar loop cholbe
    // {}
    while(e--) // e er value joto tobobar loop cholbe...
    {
        int a, b;  //6 6
        cin>>a>>b;
    }

    return 0;
}

//Output :
6 6
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0