#include <iostream>
#include <vector>
using namespace std;

int peakElement(vector<int>v) {
    int s = 0;
    int e = v.size()-1;
    int mid = s + (e-s)/2;

    while(s<e) {
        if(v[mid] < v[mid+1]) {
            s=mid+1;
        }

        else {
            e=mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main() {

    vector<int>v{0,1,0};
    cout<<peakElement(v)<<endl;

    return 0;

}