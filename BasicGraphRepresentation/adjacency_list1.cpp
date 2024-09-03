#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    
    // int a[n];   //array declare kore.Normal array. Each index or ghore int thake. =v
    // vector<int> a[n]; //ekhon eta vector.Each index or ghore int er jaygay vector thake....It's adjacency list.
    
    /*   Adjacency List create   */
    vector<int> mat[n];
    while(e--)
    {
        int a,b; // Joto gulo edge totogulo connection input nilam.
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);   // //duiline push korle undirected..ek line hole directed
    }
    /*     ---------------    */

    /*   K kar sathe connected    */
    vector<int> v;
    for(int i=0; i<mat[0].size(); i++)
    {
        cout << mat[0][i] << " ";
    }
    return 0;
}