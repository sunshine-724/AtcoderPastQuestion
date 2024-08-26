#include <iostream>
using namespace std;

int main(){
    int year;
    cin >> year;

    int Q = year % 100;
    int ans = year / 100;

    if(Q != 0){
        ans ++;
    }

    cout << ans << endl;
    return 0;
}