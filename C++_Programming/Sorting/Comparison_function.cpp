#include <bits/stdc++.h>
using namespace std;
//Leetcode -> Sort array by increasing freqency

struct point
{
    int x, y;
};

bool mycmp(point p1, point p2)
{
    // return (p1.x < p2.x);
    return (p1.y > p2.y);
}

int main()
{
    vector<point> v = {{1, 62}, {9, 62}, {8, 2}, {98, 18}};
    sort(v.begin(), v.end(), mycmp);
    // v.insert(v.end(),5,{0,0}); return elements of certain ferquency at once
    for (int i = 0; i < v.size(); i++)
        cout << "{" << v[i].x << "," << v[i].y << "} ";
    return 0;
}