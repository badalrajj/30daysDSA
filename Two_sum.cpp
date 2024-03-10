#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[80];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the target sum"<<endl;
    cin>>target;

    // two sum

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<", "<<arr[j]<<endl;
                break;
            }
        }
    }

    return 0;

}
