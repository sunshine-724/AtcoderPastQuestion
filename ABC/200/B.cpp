#include <iostream>
#include <string>

using namespace std;

int main(){
    long long N,K;
    string strN;

    cin >> N >>  K;

    for(int k=0;k<K;k++){
        if(N % 200 == 0){
            N /= 200;
        }else{
            strN = to_string(N);
            strN = strN + "200";
            N = stoll(strN);
        }
    }

    cout << N << endl;

}