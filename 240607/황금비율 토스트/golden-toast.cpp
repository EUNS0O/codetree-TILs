#include <iostream>
#include <list>
#include<string>

using namespace std;


int main() {

   

    int n;
    int m;
    cin>>n>>m;
    string s;
    cin>>s;

    list<char> l;
    for (int i=0;i<s.length();i++){
        l.push_back(s[i]);
    }

    list<char>::iterator it=l.end();

    while(m--){
        char order;
        cin>>order;

        if(order=='L'){

            if(it!=l.begin()){
                it--;
            }
            
        }
        else if(order=='R'){

            if(it!=l.end()){
                it++;
            }
        }
        else if(order=='D'){

            if(it!=l.end()){
                it = l.erase(it);
;            }
        }
        else if(order=='P'){
            char x;
            cin>>x;

            l.insert(it,x);

            
        }
    }

    for(list<char>::iterator it = l.begin(); it !=l.end();it++){
        cout<<*it;
    }
   
    return 0;
}