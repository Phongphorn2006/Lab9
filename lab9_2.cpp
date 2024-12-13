#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int a,int b){
	for(int i = 0; i < a ; i++){
		for(int j = 0; j < b; j++){
			cout << "O";
		}
		cout << "\n";
	}
	if(a <= 0)cout << "Invalid input";
	if(b <= 0)cout << "Invalid input";
}

int main(){
	
	printO(2,-1);
	cout << "\n";	
	
	return 0;
}

