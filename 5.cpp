#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream f ("test.txt");
    int lk=0;
    int wk=0;
    int sk=0;
    while (f){
        string s;
        getline(f, s);
        wk=1;
        sk=s.length();
        if (sk>0){
            for (int i=0;i<sk;++i){
                if (s[i]==' ')
                {
                    ++wk;
                }
            }
            ++lk;
            cout << "Number of words: " << wk << "; Number of symbols: " << sk << endl;
            continue;
        }
    }
    cout << "Number of lines: " << lk << endl;
}
