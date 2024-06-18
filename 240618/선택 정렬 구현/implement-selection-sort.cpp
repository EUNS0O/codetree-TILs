#include <iostream>
#include<vector>
using namespace std;

#define max = 100;
int n
int arr[max];


void SelectionSor(){
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=1;j<n;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
int main() {

    cin>>n;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}