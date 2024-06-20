#include <iostream>
#include<vector>

using namespace std;
vector<int> arr={0};
void insertionSort(arr[]){
int size=arr.size();
for(int i=1;i<size;i++){
    int j = i -1;
    int key = arr[i];
    while(j>=0&&arr[j]>key){
        arr[j+1]=arr[j];
        j--
    }
    arr[j+1]=key;
}
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}

}


int main() {
    
    int n;
    cin>>n;
    vector<int> arra={0};
    int x;
    while(n--){
        cin>>x;
        arra.push_back(x);
    }
    insertionSort(arra);
    return 0;
}