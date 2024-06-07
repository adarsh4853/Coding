#include <bits/stdc++.h>
using namespace std;

// AS -> O(n)

// struct mystack
// {
//     stack<int> ms;//main stack
//     stack<int> as;//auxillary stack
//
//     void push(int x)
//     {
//         ms.push(x);
//         if(as.empty() || x<as.top()) as.push(x);
//     }
//     int pop()
//     {
//         int temp=ms.top();
//         ms.pop();
//         if(temp==as.top()) as.pop();
//         return temp;
//     }
//     int getmin()
//     {
//         return as.top();
//     }
// };

// AS-> O(1)
//Do a dry run

struct mystack
{
    stack<int> ms;
    int min = INT_MAX;

    void push(int x)
    {
        if (ms.empty())
        {
            min = x;
            ms.push(x);
        }
        else if (x <= min)//Here 2*x-min will be always less than x because x+(x-min)<=x
        {
            ms.push(2*x-min);
            min = x;
        }
        else
            ms.push(x);
    }

    int pop()
    {
        int temp = ms.top();
        if (temp <= min)
        {
            int ans=min;
            min = 2*min - temp;
            ms.pop();
            return min;
        }
        ms.pop();
        return temp;
    }

    int getmin()
    {
        return min;
    }
    int peek()
    {
        int temp=ms.top();
        return (temp<=min)? min : temp;
    }
};

int main()
{
    mystack st;
    st.push(45);
    st.push(73);
    st.push(73);
    st.push(31);
    st.push(23);
    cout << st.getmin() << " ";
    st.pop();
    cout << st.getmin() << " ";
    st.pop();
    cout << st.getmin() << " ";
    return 0;
}