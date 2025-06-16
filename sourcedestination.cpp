#include<iostream>
using namespace std;

void srcDest(int src,int dest){
    cout << "source " << src << " Destination " << dest << endl;
    if(src == dest){
        cout << "Home reached " << endl;
        return ;
    }
    src++;
    srcDest(src,dest);
}

int main(){
    int src = 0;
    int dest = 10;

    cout << "Answer " << endl;
    srcDest(src,dest);
}