#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    int n=0;
    string order;
    cin>>n;
    int x=0;
    while(n--){
        cin>>order;
        if(order=="push_back"){
            cin>>x;
            v.push_back(x);
        }
        else if(order=="get"){
            cin>>x;
            cout<<v[x+1]<<endl;
        }
        else if(order=="pop_back"){
            v.pop_back();
        }
        else if(order=="size"){
            cout<<v.size()<<endl;
        }
    }
    return 0;
}