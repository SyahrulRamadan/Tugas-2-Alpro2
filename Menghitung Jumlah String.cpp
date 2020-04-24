#include <iostream>
    #include <string>
    using namespace std;
    int main(){
      string a;
      int jumlah;
      cout << "Masukkan sebuah string: ";
      getline(cin, a);
      jumlah = a.length();
      cout << "Jumlah karakter adalah " << jumlah << endl;
    }
