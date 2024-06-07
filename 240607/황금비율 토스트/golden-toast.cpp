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
    string first[5];
    cin>>first;
    for (int i=0;i<5;i++){
        l.insert(first[i],i);
    }
    string order;
    int x;
    while(m--)
    {
        cin>>order;

        if(order=="L"){

            if(it==l.begin()){
               return; 
            }else{
                it--;
            }
            
        }
        else if(order=="R"){

            if(it==l.end()){
               return;

            }else{
                it++;
            }
        }
        else if(order=="D"){

            if(it==l.end()){
                return;
            }else{

                l.erase(it);
;            }
        }
        else if(order=="P"){

            cin>>x;

            l.insert(it,x);

            it++;
        }
    }
   
    return 0;
}