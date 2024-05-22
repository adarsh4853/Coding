#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 2D vector(Rectangle )
    vector<vector<int>> v2(5, vector<int>(4));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << v2[i][j] << " ";
        }
        cout << '\n';
    }

    // 3D vector(Cuboid)
    vector<vector<vector<int>>> v3(5,vector<vector<int>>(4,vector<int>(3)));

    // 4D vector(Tesseract)
    vector<vector<vector<vector<int>>>> v4(6,vector<vector<vector<int>>>(5,vector<vector<int>>(4,vector<int>(3))));
    return 0;
}