#include <iostream>


using namespace std;

int main() {
    int n;
    cin>>n;

    int* arr = new int[n];
    
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=1;i<n;i++){
        int j= i-1;
        while(j>=0&&arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    delete[] arr;
    return 0;
}