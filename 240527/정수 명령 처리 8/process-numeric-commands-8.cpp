#include <iostream>
#include<list>

using namespace std;

int main() {
    list<int> s;
    int N;
    cin>>N;
    string order;
    int x;
    while(N--){
        cin>>order;
        if(order=="push_back"){
            cin>>x;
            s.push_back(x);

        }
        else if(order=="push_front"){
            cin>>x;
            s.push_front(x);
        }
        else if(order=="pop_front"){
            cout<<s.front()<<endl;
            s.pop_front();
        }
        else if(order=="pop_back"){
            cout<<s.back()<<endl;
            s.pop_back();
        }
        else if(order=="size"){
            cout<<s.size()<<endl;
        }else if(order=="empty"){
            if(s.empty()){
                cout<<1<<endl;
            }else{
                cout<<0<<endl;
            }
        }else if(order=="front"){
            cout<<s.front()<<endl;
        }else if(order=="back"){
            cout<<s.back()<<endl;
        }
    }
    return 0;
}