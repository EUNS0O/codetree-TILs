#include <iostream>
#include <list>
#include<vector>

using namespace std;

int main() {

    list<char> l;
    list<char>::iterator it;
    it = l.end();

    int n;
    int m;
    cin>>n>>m;
    string s;
    cin>>s;

    for (int i=0;i<s.length();i++){
        l.push_back(s[i]);
    }

    string order;
    char x;
    while(m--)
    {
        cin>>order;

        if(order=="L"){

            if(it==l.begin()){
               return 0; 
            }else{
                it--;
            }
            
        }
        else if(order=="R"){

            if(it==l.end()){
               return 0;

            }else{
                it++;
            }
        }
        else if(order=="D"){

            if(it==l.end()){
                return 0;
            }else{

                l.erase(it);
;            }
        }
        else if(order=="P"){

            cin>>x;

            l.insert(it,x);

            
        }
    }

    for(list<char>::iterator it = l.begin(); it !=l.end();it++){
        cout<<*it;
    }
   
    return 0;
}