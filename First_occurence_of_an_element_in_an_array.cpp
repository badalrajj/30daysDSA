#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int firstOccurence(vector<int>arr, int target) {
    int start=0;
    int end=arr.size()-1;
    int ans=-1;
    int mid=(start+end)/2;
    
    while(start<=end) {
        if(arr[mid]==target) {
            ans=mid;
            end=mid-1;
            
        }
        
        else if(target<arr[mid]) {
            end=mid-1;
        }
        
        else if (target>arr[mid]) {
            start=mid+1;
            
        }
        
        mid=(start+end)/2;
    }
    return ans;
}

int main() {
    vector<int> arr{1,2,3,4,4,4,4,5,6,7,8};
    int size=11;
    int target=4;
    int indexOfOcc=firstOccurence(arr, target);
    cout<<indexOfOcc<<endl;
    
    return 0;
    
}