#include <iostream>
#include<stack>

using namespace std;

int main() {
    stack<int> s;
   int N;
   cin>>N;
   string command;
   int A;
   while(N--){
    cin>>command;
    if(command=="push"){
        cin>>A;
        s.push(A);
    }
    else if(command=="pop"){
        int t = s.top();
        s.pop();
        cout<<t<<endl;
    }
    else if(command=="size"){
        cout<<s.size()<<endl;
    }
    else if(command=="empty"){
        if(s.empty()){
            cout<<1<<endl;
        }else{
            cout<<0<<endl;
        }
    }
    else if(command=="top"){
        cout<<s.top()<<endl;
    }
   }
    return 0;
}