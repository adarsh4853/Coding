#include <bits/stdc++.h>
using namespace std;

// Get the elements with more than n/k occurrence

// Here number of answers can not exceed k-1 because k*(n/k + 1) should be less than total number of elements n.

vector<int> occurrences(vector<int> v, int k)
{
    int n = v.size();
    vector<int> ans;
    // Create a empty map
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        if (mpp.find(v[i]) != mpp.end()) // If map contains v[i]
            mpp[v[i]]++;
        else if (mpp.size() < k - 1) // Else if mpp.size()<k-1, then insert element in the map
            mpp[v[i]] = 1;
        else // Else decrease all values in map by one and if value becomes zero then erase it
        {
            vector<int> to_remove;
            for (auto &it : mpp)
            {
                it.second--;
                if (it.second == 0)
                    to_remove.push_back(it.first); // direct erasing may cause issues(SIGTERM) while traversing
            }
            for (int key : to_remove)
                mpp.erase(key);
        }
    }

    // Verify actual counts of potential candidates
    int cnt = 0;
    for (auto it : mpp)
    {
        cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j] == it.first)
                cnt++;
        }
        if (cnt > n / k)
            ans.push_back(it.first);
    }

    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> ans = occurrences(v, k);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}
