#include <iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    cin>>n;

    int* arr = new int[n];
    int x;

    
    for(int i=0;i<n;i++){
            cin>>x;
            arr[i]=x;
    }
    
    for(int i=0;i<n;i++){
        int j = i+1;
        while(j>0&&(arr[j-1]>arr[j])){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}