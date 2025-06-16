//Q-1
#include<iostream>
using namespace std;

int main(){
    int a,b = 1;
    a = 10;
    if(++a)
      cout << b;
    else
      cout << ++b;

      int c = 1;
      int d = 2;
  
      if(c-- > 0 && ++d > 2){
          cout << "Stage1 - Inside if\n";
      }
      else{
          cout << "stage2 - Inside else\n";
      }
      cout << c << " " << d << endl;

      if(c-- > 0 || ++d >2){
        cout << "Stage - Inside if " << endl;
      }
      else{
        cout << "Stage - Inside else " << endl;
      }

      int number = 3;
      cout << (25 * (++number) ) << endl;

      int x = 1;
      int y = x++;
      int z = ++x;
      cout << y;
      cout << z;
}

