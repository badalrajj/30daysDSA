#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[100];
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int> duplicate;

    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (arr[i]==arr[j]){
                duplicate.push_back(arr[i]);
            }
        }
    }

    for(int i : duplicate)
        cout<<duplicate[i]<<" ";


    return 0;
}