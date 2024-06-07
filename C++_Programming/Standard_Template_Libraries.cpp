#include <bits/stdc++.h>
using namespace std;

// size,begin,end,empty-> O(1)

int main()
{
    // array
    array<int, 4> a;
    a = {1, 2, 3, 4};
    int size = a.size(); // gives size of array

    cout << a.at(4) << " " << a[3] << endl; // gives element at second index,a[i] gives garbage value and a.at(i) terminates after throwing a error

    cout << "Empty or not: " << a.empty(); // tells whether array is empty or not by giving boolean expression

    cout << "First element: " << a.front(); // gives first element

    cout << "Last elemnt: " << a.back(); // gives last element

    // Pairs
    pair<int, int> p = {2, 3};
    cout << "Pairs : " << p.first << " " << p.second << endl;

    // Inserting at random index(assuming capacity is not full) -> O(n)
    // Search -> O(n) for Unsorted, O(log n) for Sorted
    // Delete at random index -> O(n)
    // Get and update i-th element -> O(1)

    // Vectors
    vector<int> v1;
    vector<double> v2{5, 1.6}; // means v2={1.6,1.6,1.6,1.6,1.6}
    v1.push_back(3);           // adds one space in vector and fills the desired value in that space(v1[0]=3)
    v1.push_back(7);           // doubles its size(because enough space was not there) and stores 7 at index 1
    v2.push_back(9.1);         // v2[5]=9.1

    vector<pair<int, int>> v3{2, {0, 0}}; // vector containing elements of data type pair
    v3.push_back({6, 4});                 // v3[2]={6,4}:v3[2].second=4

    vector<int> v4(v1); // copy the vector v1 into v4

    int capacity = v1.capacity(); // gives how much space is given to the elements,use this to find current capacity of vector

    v1.pop_back(); // deletes last element

    v1.clear(); // clears the array(make size 0 but not capacity)

    cout << *max_element(v2.begin(), v2.end()); // for maximum element // Remember this gives pointer
    cout << *min_element(v2.begin(), v2.end()); // for minimum element // Time complexity -> O(n)

    // Average Time Complexity of inserting a element(push_back) in vector -> O(n)

    // v.front(),v.back(),v.empty(),v.at(i)

    // Deque
    deque<int> d = {3, 6, 4, 7}; // insertion and deletion can be done from front or end(in vector,only from end)

    d.push_back(1);  // adds element at the end
    d.push_front(2); // adds element at the start

    // d.pop_back();//deletes element from last
    // d.pop_front();//deletes element from start

    d.erase(d.begin() + 1, d.end() - 2); // erases the elements from a to b(**[a,b))
    d.erase(d.begin() + 3);              // erases single element
                                         // v.begin()-> iterator to the first element,v.end()-> iterator to the last element

    for(auto it:d)
    {
        cout << d.at(i) << '\n';
    }

    for (int i = 0; i < d.size(); i++)
    {
        cout << d.at(i) << '\n';
    }
    auto it=d.begin();
    it++;
    d.insert(it,83);

    // d.front(),d.back(),d.empty()

    // list

    list<int> l;
    // operations are slower than deque but more easier to implement
    // push_back,push_front,pop_back,pop_front,erase,size,copy,intialisations like vectors

    // stack
    // last in-first out,ex-stack of plates
    stack<string> s; // a stack of string type

    s.push("hello");
    s.push("blow");
    s.push("buffalo");

    cout << "Top Elmement: " << s.top() << endl; // buffalo

    s.pop(); // pops the last in element i.e. "buffalo"

    cout << "Size of stack: " << s.size() << endl; // 3

    cout << s.empty() << '\n';
    //push,pop,top,size,empty all are O(1) independent of whether they are implemented on list,vector or deque.
    //By default they are implemented using deque

    // queue
    // first in-first out,ex-a line of humans
    queue<float> q;

    q.push(1);
    q.push(3.9);
    q.push(7.4);

    cout << "first element: " << q.front() << endl; // 1.000000
    cout << "last element: " << q.back() << endl; // 7.400000
    q.pop();                                        // pops first element i.e. 1

    // size,empty
    // All operations has O(1) TC if queue is implemented using list or deque(vector doesn't provide pop_front in O(1))
    // By default it is implemented using deque

    // priority queue
    // gives maximum or minimum element
    priority_queue<int> pq_max;                            // a pq which will give maximum element
    priority_queue<int, vector<int>, greater<int>> pq_min; // min_heap

    pq_max.push(3);
    pq_max.push(6);
    pq_max.push(4);
    pq_max.push(7);

    pq_min.push(3);
    pq_min.push(6);
    pq_min.push(4);
    pq_min.push(7);

    // for printing
    priority_queue<int> temp(pq_max); // copies pq_max in temp
    int n = temp.size();
    for (int i = 0; i < n; i++)
    {
        cout << temp.top() << " "; // prints elemens in descending form
        temp.pop();
    }
    cout << endl; // 7 6 4 3

    priority_queue<int, vector<int>, greater<int>> temp1(pq_min); // copies pq_max in temp
    int n1 = temp1.size();
    for (int i = 0; i < n1; i++)
    {
        cout << temp1.top() << " "; // prints elemens in descending form
        temp1.pop();
    }
    cout << endl; // 3 4 6 7

    // empty

    // set
    // inserts unique element and ggives element in a ordered way

    set<int> s1 = {1, 1, 1, 2, 2, 1, 2, 3, 2, 2, 1, 2, 1};

    s1.insert(4);
    s1.insert(4);
    s1.insert(7); // s={1,2,3,4,7}

    s1.erase(s1.begin()); // only one element erased//s.begin+i is not working

    set<int>::iterator it = s1.begin(); // iterator to the first element
    it++;                               // it=it+1 is not supported in set and map
    advance(it, 2);                     // use this instead of it=it+2
    s1.erase(it);                       // s={2,3,4}

    // for printing
    for (auto it = s1.begin(); it != s1.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl; // 2 3 4

    s1.erase(3);                    // 2 4
    s1.erase(s1.begin(), s1.end()); // Erases the set of element

    cout << "-8 is present or not: " << s1.count(-8) << endl; // gives a element is present in set or not in boolean expression

    auto itr = s1.find(6); // s1.find(6) returns the iterator to that element if found,else returns s1.end()
    cout << "3 is present at itr : " << *itr << endl;

    // insert,find,erase,count-> O(log n)
    // map

    map<float, string> m1;
    map<string, int> m2;

    m1[1.2f] = "hello";   // 1.1f called key
    m1[2.6f] = "buffalo"; // 2.6 is treated as double thats why use 2.6f where f represents float

    m2["hello"] = 6;
    m2["blow"] = 2;
    m2["world"] = 3724;

    m1.insert({9.1f, "flow"});

    // for printing
    for (auto i : m2)
    {
        cout << i.first << " " << i.second << endl;
    }

    m1.erase(2.6); // erases element at key 2.6
    for (auto i : m1)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "finding blow: " << m2.count("blow") << endl; // only key can be inside the brackets e.g m2.cout(2) is not allowed

    // insert,erase,find,count-> O(log n)

// Unordered Set

    unordered_set<int> us;

    // Insert elements
    us.insert(5);
    us.insert(2);
    us.insert(8);
    us.insert(3);
    us.insert(1);

    // Print elements
    cout << "Elements in the unordered set: ";
    for (const auto &element : us)
    {
        cout << element << " ";
    }
    cout << endl;

    // Size of the unordered set
    cout << "Size of the unordered set: " << us.size() << endl;

    // Check if an element is present
    int key = 3;
    if (us.count(key) > 0)
    {
        cout << key << " is present in the unordered set." << endl;
    }
    else
    {
        cout << key << " is not present in the unordered set." << endl;
    }

    // Erase an element
    us.erase(2);
    auto it=us.find(8);
    us.erase(*it);

    // Print elements after erasing
    cout << "Elements in the unordered set after erasing: ";
    for (const auto &element : us)
    {
        cout << element << " ";
    }
    cout << endl;

    // Clear the unordered set
    us.clear();

    // Check if the unordered set is empty
    if (us.empty())
    {
        cout << "The unordered set is empty." << endl;
    }
    else
    {
        cout << "The unordered set is not empty." << endl;
    }
    //insert,erase,count,find,size -> O(1) on average
    return 0;
}
