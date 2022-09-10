#include<iostream>
#include<vector>

using namespace std;

//basic syntax how to use a vector and its initialising
//for vecotr u must have an c++ version of 11 or greater than  that 
//also use of some functions of vector 

int main(){
    vector<int> arr={1,2,3,4,5};

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }

    cout<<endl;
    arr.push_back(16);

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    return 0;
}