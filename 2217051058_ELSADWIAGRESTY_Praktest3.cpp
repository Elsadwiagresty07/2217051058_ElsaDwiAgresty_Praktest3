#include <iostream>
using namespace std;

int main(){
	int A , B;
	cin >> A >> B;
	for(int i = 0 ; i <= B ; i+=A){
		cout << i << " ";
	} 
	cout<< endl;
	
	return 0;
}
