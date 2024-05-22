#include <bits/stdc++.h>
using namespace std;

struct myhash
{
    int bucket;
    list<int> *table;

    // Constructor to initialize the hash table with the given number of buckets
    myhash(int b) : bucket(b) {
        table = new list<int>[bucket];
    }

    // Destructor to deallocate the memory used by the hash table
    ~myhash() {
        delete[] table;
    }

    // Function to insert a key into the hash table
    void insert(int key)
    {
        int i = key % bucket;
        table[i].push_back(key);
    }

    // Function to remove a key from the hash table
    void remove(int key)
    {
        int i = key % bucket;
        table[i].remove(key);
    }

    // Function to search for a key in the hash table
    bool search(int key)
    {
        int i = key % bucket;
        for(auto x : table[i])
        {
            if(x == key) return true;
        }
        return false;
    }
};

int main()
{
    int n;
    cin >> n; 
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i]; 

    int bucket_size;
    cin >> bucket_size;  // Read the number of buckets

    myhash h(bucket_size); // Create an instance of myhash with the specified number of buckets

    // Insert all elements into the hash table
    for(int i = 0; i < n; i++) h.insert(v[i]); 

    cout << h.search(v[0]) << " "; // Search for the first element
    h.remove(v[0]); // Remove the first element
    cout << h.search(v[0]) << " "; // Search for the first element again

    return 0;
}
