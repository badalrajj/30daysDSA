#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int binarySearch(int arr[], int size, int target) {
    int start=0;
    int end = size-1;

    int mid = (start+end)/2;

    while(start <= end) {
        int element = arr[mid];

        if(element == target) {
            return mid;
        }

        else if (target < element) {
            end = mid-1;
        }

        else {
            start = mid+1;
        }

        mid = (start+end)/2;

    }

    return -1;
     
}

int main(){
    int arr[]={1,2,5,7,10,13,14};
    int size=7;
    int target=1;
    int indexOfTarget=binarySearch(arr, size, target);


    if(indexOfTarget == -1){
        cout<<"Target not found"<<endl;
    }
    else {
        cout<<"Target found at "<< indexOfTarget <<"Index" <<endl;
    }
    
    
    
    // 2nd mmethod
    
    // vector<int> v{1,2,3,4,5,6};
    
    // if(binary_search (v.begin(), v.end(), 3 )) {
    //     cout<<"Found"<<endl;
    // }
    // else {
    //     cout<<"Not found"<<endl;
    // }
    

    return 0;
}