#include<iostream>
#include<array>

using namespace std;

int main(){
    int basic[] = {1,2,3};

    array<int,5> arr = {3,9,7,6,9};
    int size = arr.size();

    cout << "Element at index 3rd is " << arr.at(3) << endl;
    cout << "Check if array empty or not " << arr.empty() << endl;
    cout << "First element of array " << arr.front() << endl;
    cout << "Last element of array " << arr.back() << endl;
}