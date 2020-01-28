//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> 
#include <cmath>
using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    float Mean;
    float sum2;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline))
    {
        sum += atof(textline.c_str());
        sum2 += pow(atof(textline.c_str()),2);
        count++;
    }
    Mean = sum/count;
    cout <<"Number of data = "<<count<<"\n";
    cout << "Mean = "<< sum/count<<"\n";
    cout << "Standard deviation = " << sqrt((sum2/count)-pow(Mean,2));
    
    source.close();
    return 0;
}
