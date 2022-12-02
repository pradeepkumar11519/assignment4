#include <iostream>
using namespace std;

int main(){
    double data[100],result;
    for(int i=0;i<100;i++){
        data[i] = i + 0.1;
        result = result + data[i];
    }
    cout<<result;
    return 0;
}