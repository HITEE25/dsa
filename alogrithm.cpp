#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> v;

    v.push_back(23);
    v.push_back(34);
    v.push_back(67);
    v.push_back(56);
    v.push_back(22);

    sort(v.begin(),v.end());
    cout << "Search the element 34 " << binary_search(v.begin(),v.end(),34) << endl;
    cout << "Upper bound->" << upper_bound(v.begin(),v.end(),67)-v.begin() << endl;
    cout << "Lower bound->" << lower_bound(v.begin(),v.end(),34)-v.begin() << endl;

    int a = 5;
    int b = 8;

    max(a,b);
    min(a,b);

    int minval = *min_element(v.begin(),v.end());
    cout << "Minimum value is " << minval << endl;

    swap(a,b);

    string s = "abcd";
    reverse(s.begin(),s.end());

    rotate(v.begin(),v.begin() + 2,v.end());
    for(int i:v){
        cout << i << " ";
    }cout << endl;

    sort(v.begin(),v.end());
    for(int i:v){
        cout << i << " ";
    }cout << endl;
}
