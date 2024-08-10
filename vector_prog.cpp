#include<iostream>
#include<vector>
using namespace std;
int main()
{
    const int size=4,c=100;
    vector<int> vi(size,5);
    for(int i=1;i<=3;i++)
        vi.push_back(c+i);
    vi.resize(12,99);
    vi.resize(10);
    for(int i=0;i<vi.size();i++)
    {
        cout<<vi[i]<<" ";
    }
    return 0;
}