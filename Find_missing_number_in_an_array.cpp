#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0; i<n-1; i++){
        sum=sum+arr[i];
    }

    int int_sum=(n*(n+1))/2;
    int missing_number=int_sum-sum;

    cout<<"Missing no. is : "<<missing_number<<endl;

    return 0;
}