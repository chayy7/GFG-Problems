#include <bits/stdc++.h>
using namespace std;


bool func(int d, int m, int y){
    if(d < 1 || d > 31) return false;
    if(m < 1 || m > 12) return false;
    if(y < 1800 ||  y> 9999) return false;
    
    bool leap = (y% 4 == 0 && y%100 != 0) || (y%400 == 0);
    
    vector<int> days = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(leap) days[1] = 29;
    
    if(d > days[m-1]) return false;

    return true;
}
int main() {
    int d, m, y;
    cin >> d >> m >> y;

    // code here
    cout << boolalpha<<func(d,m,y) <<endl;
}