#include <bits/stdc++.h>
using namespace std;

// Linear Probing
// -1 represents that slot is empty and -2 represents that the element in that slot is deleted
// Libraries make a dummy node and store the reference to that dummy node to check if element is deleted

struct myhash
{
    int *arr;
    int cap, size;

    myhash(int c)
    {
        cap = c;
        size = 0;
        for (int i = 0; i < cap; i++)
            arr[i] = -1;
    }

    int hash(int key)
    {
        return key % cap;
    }

    bool insert(int key)
    {
        // Check if array is size is equal to maximum limit
        if (size == cap)
            return false;

        int i = hash(key);

        // Find a empty or deleted location, also check if key is present alredy
        while (arr[i] != -1 && arr[i] != -2 && arr[i] != key)
            i = (i + 1) % cap;

        // If key is already present then return false because we was unsuccessful in inserting
        if (arr[i] == key)
            return false;
        // Else insert the key, increament the size and return true as we successfully inserted the key
        else
        {
            arr[i] = key;
            size++;
            return true;
        }
    }
    bool search(int key)
    {
        int h = hash(key);
        int i = h;
        // If a empty location is found then key is not present in the array because if key had present in the array then it should be present at that location
        while (arr[i] != -1)
        {
            if (arr[i] == key) // Return true if key found
                return true;
            i = (i + 1) % cap;
            if (i == h) // Return false if we traversed the whole array and came back to same location
                return false;
        }
        return false;
    }
    bool remove(int key)
    {
        int h = hash(key);
        int i = h;
        while (arr[i] != -1)
        {
            if (arr[i] == key)
            {
                arr[i] = -2;
                return true;
            }
            i = (i + 1) % cap;
            if (i == h)
                return false;
        }
        return false;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    myhash h();
    return 0;
}