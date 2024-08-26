#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    for(int k=0;k<3;k++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    for(int k=0;k<v.size();k++){
        for(int j = 0;j<=k;j++){
            v.swap(v[k],v[j]);
             if(v[2] - v[1] == v[3] - v[2]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
        }
    }
}