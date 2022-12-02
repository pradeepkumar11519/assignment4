#include <iostream>
using namespace std;

int main(){
    double data[100],result;
    for(int i=0;i<100;i++){
        data[i] = i + 0.1;
    }
    double min_element = data[0];
    for(int j=0;j<100;j++){
        if(data[j]<min_element){
            min_element = data[j];
        }
    }
    cout<<min_element;
    return 0;
}