#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

vector<int> arr(100000);

vector<int> t(400000);

void build(int ind,int l,int r)
{
    if(l==r)
    {
        t[l]=arr[l];
        return;
    }
    int mid=(l+r)/2;
    build(ind*2,l,mid);
    build(ind*2+1,mid+1,r);
    t[ind]=t[2*ind]+t[2*ind+1];
}

void update(int ind,int l,int r,int pos,int val)
{
    if(pos<l || pos>r) return;
    if(l==r)
    {
        t[ind]=val;
        arr[l]=val;
        return;
    }
    int mid=(l+r)/2;
    update(ind*2,l,mid,pos,val);
    update(ind*2+1,mid+1,r,pos,val);
    t[ind]=t[2*ind]+t[2*ind+1];
}

int sumQuery(int ind,int l,int r,int lq,int rq)
{
    if(l>rq || r<lq) return 0;
    if(lq>=l && r<=rq) return t[ind];
    int mid=(l+r)/2;
    return sumQuery(ind*2,l,mid,lq,rq)+sumQuery(ind*2+1,mid+1,r,lq,rq);
}

template <typename T>
struct segtree {

    T zeroSum = 0;

    T calc(T a, T b) {
        return a + b;
    }

    vector<T> sums;

    int size;

    void set(int i, T x, int n, int L, int R) {
        if (R == L + 1) {
            sums[n] = x;
            return;
        }
        int M = (L + R) >> 1;
        if (i < M) {
            set(i, x, 2 * n + 1, L, M);
        } else {
            set(i, x, 2 * n + 2, M, R);
        }
        sums[n] = calc(sums[2 * n + 1], sums[2 * n + 2]);
    }

    T sum(int l, int r, int n, int L, int R) {
        if (l >= R || L >= r) return zeroSum;
        if (L >= l && R <= r) return sums[n];
        int M = (L + R) >> 1;
        return calc(sum(l, r, 2 * n + 1, L, M), sum(l, r, 2 * n + 2, M, R));
    }

    segtree(int n) {
        size = 1;
        while (size < n) size *= 2;
        sums.assign(2 * size, zeroSum);
    }

    segtree(vector<T> a) {
        int n = a.size();
        // init(n);
        size = 1;
        while (size < n) size *= 2;
        sums.assign(2 * size, zeroSum);
        for (int i = 0; i < n; i++) {
            sums[size - 1 + i] = a[i];
        }
        for (int i = size - 2; i >= 0; i--) {
            sums[i] = calc(sums[2 * i + 1], sums[2 * i + 2]);
        }
    }

    void set(int i, T x) { set(i, x, 0, 0, size); }

    T sum(int l, int r) { return sum(l, r, 0, 0, size); }
};

void runCase(int &testcase)
{
    int n;
    cin>>n;
    build(1,0,n-1);
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    for (int i = 1; i <= tests; i++)
    {
        // cout << "Case #" << i << ": \n";
        runCase(i);
    }
    return 0;
}