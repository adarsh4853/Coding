#include <bits/stdc++.h>
using namespace std;

//size,begin,end,empty-> O(1)

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

    for (int i = 0; i < d.size(); i++)
    {
        cout << d.at(i) << '\n';
    }

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

    // s.empty()

// queue
    // first in-first out,ex-a line of humans
    queue<float> q;

    q.push(1);
    q.push(3.9);
    q.push(7.4);

    cout << "first element: " << q.front() << endl; // 1.000000
    q.pop();                                        // pops first element i.e. 1

    //size,empty

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
    for(int i=0;i<n;i++)
    {
        cout<<temp.top()<<" ";//prints elemens in descending form
        temp.pop();
    }
    cout<<endl;//7 6 4 3 

    priority_queue<int, vector<int>, greater<int>> temp1(pq_min); // copies pq_max in temp
    int n1 = temp1.size();
    for(int i=0;i<n1;i++)
    {
        cout<<temp1.top()<<" ";//prints elemens in descending form
        temp1.pop();
    }
    cout<<endl;// 3 4 6 7

    //empty

//set
    //inserts unique element and ggives element in a ordered way

    set<int> s1={1,1,1,2,2,1,2,3,2,2,1,2,1};

    s1.insert(4);
    s1.insert(4);
    s1.insert(7);//s={1,2,3,4,7}

    s1.erase(s1.begin());//only one element erased//s.begin+i is not working

    set<int>::iterator it=s1.begin();//iterator to the first element
    it++;//it=it+1 is not supported in set and map
    advance(it,2);//use this instead of it=it+2
    s1.erase(it);//s={2,3,4}
    
    //for printing
    for (auto it = s1.begin(); it != s1.end(); ++it) {
        cout << *it << " ";
    }
    cout<<endl;//2 3 4
    
    cout<<"-8 is present or not: "<<s1.count(-8)<<endl;//gives a elemment is present in set or not in boolean expression
    
    auto itr=s1.find(6);//s1.find(3) returns the iterator to that element if found,else returns s1.end()
    cout<<"3 is present at itr : "<<*itr<<endl;//??idk

    //insert,find,erase,count-> O(log n)
//map

    map<float,string> m1;
    map<string,int> m2;

    m1[1.2f]="hello";//1.1f called key
    m1[2.6f]="buffalo";//2.6 is treated as double thats why use 2.6f where f represents float
    
    m2["hello"]=6;
    m2["blow"]=2;
    m2["world"]=3724;

    m1.insert({9.1f,"flow"});

    //for printing
    for(auto i:m2)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }    
    
    m1.erase(2.6);//erases element at key 2.6
    for(auto i:m1)
    {
        cout<<i.first<<" "<<i.second<<endl;
    } 

    cout<<"finding blow: "<<m2.count("blow")<<endl;//only key can be inside the brackets e.g m2.cout(2) is not allowed
    
    //insert,erase,find,count-> O(log n)
    return 0;
}