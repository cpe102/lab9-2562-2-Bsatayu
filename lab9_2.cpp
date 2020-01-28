//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream source;
    source .open("C:\\Users\\ASUS\\Documents\\Compro\\lab9-2562-2-Bsatayu\\cheerbook.txt");
    ofstream source1;
    source1 .open("C:\\Users\\ASUS\\Documents\\Compro\\lab9-2562-2-Bsatayu\\cheerbook_copy.txt");
    string textline;
    source1 << "------------------------------------------SOTUS ------------------------------------------"<<"\n";
    while(getline(source,textline)){
        source1 << textline <<"\n";
    }
    source1 << "------------------------------------------SOTUS ------------------------------------------";

    return 0;
}