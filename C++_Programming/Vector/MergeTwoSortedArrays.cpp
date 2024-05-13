#include <bits/stdc++.h>
using namespace std;

int main()
{
    int na, nb;
    cin >> na >> nb;
    vector<int> va(na), vb(nb),temp;
    for (int i = 0; i < na; i++)
        cin >> va[i];
    for (int i = 0; i < nb; i++)
        cin >> vb[i];

    int i = 0, j = 0;
    while (i < na && j < nb)
    {
        if(va[i]>=vb[j]) 
        {
            temp.push_back(vb[j]);j++;
        }
        else
        {
            temp.push_back(va[i]);i++;
        }
    }
    while(i<na)
    {
        temp.push_back(va[i]);i++;
    }
    while(j<nb)
    {
        temp.push_back(vb[j]);j++;
    }
    for(int k=0;k<temp.size();k++) cout<<temp[k]<<" ";
    return 0;
}