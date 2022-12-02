#include <iostream>
using namespace std;

void fn(int size){
	double array[size];
	int num;
	cout<<"Enter your integers between -100 and 100:\n";
	for(int i=0; i<size; i++){
		cin>>num;
		
	
		if(num>101 || num<-101){
			cout<<"ERROR\n";
			cout<<"Please enter an integer between -100 and 100:\n";
			i--;
			}
			
		else {
			array[i]=num;
		     }
		
	} 
	cout<<"Your entered integers are:\n";
	for(int i=0; i<size; i++){
		cout<<array[i]<<endl;
		}
	}
	

int main(){
	int size;
	cout<<"Enter the size of ARRAY:";
	cin>>size;
	

	fn(size);
	
return 0;
}