#include <iostream>
using namespace std;
//a program to tell the largest among three input numbers
int main() {

	int numbers[3], largest, smallest;

for(int i=0; i<3; i++){

    cout << "Enter number at position "<<i<<endl;
    cin >>numbers[i];
}
largest = numbers[0];
smallest = numbers[0];

for(int i=0;i<3;i++){
if(numbers[i]>largest){
	largest=numbers[i];
}else if(numbers[i]<smallest){

	smallest=numbers[i];
}}
cout<<"Largest number is "<<largest<<endl;
if(largest%2==0){
	cout<<largest<<" is even"<<endl;
}else{
cout<<largest<<" is odd"<<endl;
}

cout<<"Smallest number is "<<smallest<<endl;
if(largest%2==0){                                                       cout<<smallest<<" is even"<<endl;
}else{
cout<<smallest<<" is odd"<<endl;
}
return 0;
}
