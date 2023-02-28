#include <iostream>
#include <set>
using namespace std;
 
int main (void)
{
    int n;
    string s;
    cin >> n >> s;
    set<int> c;
    for (int i = 0; i < n; i++)
        c.insert(s[i]);
    if (c.size() == n && n != 1) cout << "No";
    else cout << "Yes";
    return 0;
}