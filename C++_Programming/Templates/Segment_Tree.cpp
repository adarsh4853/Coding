#include <bits/stdc++.h>
using namespace std;

template <typename T>
struct segtree
{
    T zeroSum = 0;

    int size,n;

    T calc(T a, T b)
    {
        return a + b;
    }

    vector<T> t;

    void build(int i, int l, int r, vector<T> &a)
    {
        if (l == r)
        {
            t[i] = a[l - 1]; // array is 0-indexed
            return;
        }
        int mid = (l + r) / 2;
        build(2 * i, l, mid, a);
        build(2 * i + 1, mid + 1, r, a);
        t[i] = calc(t[2 * i], t[2 * i + 1]);
    }

    segtree(vector<T> a)
    {
        n = a.size();
        size = 1;
        while (size < n) size *= 2;
        t.assign(2 * size, zeroSum);
        build(1, 1, n, a);
    }

    void update(int i, int l, int r, int ind, T val)
    {
        if (ind < l || ind > r) return;
        if (l == r)
        {
            t[i] = val;
            // a[l-1]=val;//For change in array also
            return;
        }
        int mid = (l + r) / 2;
        update(2 * i, l, mid, ind, val);
        update(2 * i + 1, mid + 1, r, ind, val);
        t[i] = calc(t[2 * i], t[2 * i + 1]);
    }

    T query(int i, int l, int r, int lq, int rq)
    {
        if (l > rq || r < lq) return zeroSum;
        if (lq <= l && r <= rq) return t[i];
        int mid = (l + r) / 2;
        return calc(query(2 * i, l, mid, lq, rq), query(2 * i + 1, mid + 1, r, lq, rq));
    }

    void update(int i, T val) { update(1, 1, n, i, val); }

    T query(int l, int r) { return query(1, 1, n, l, r); }
};

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    segtree<int> st(v);
    int m = 1;
    while (m)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int ind, val;
            cin >> ind >> val;
            st.update(1, 1, n, ind, val);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            cout << st.query(1, 1, n, l, r) << '\n';
        }
    }
    return 0;
}