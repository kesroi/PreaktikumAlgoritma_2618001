#include <iostream>
using namespace std;

int main() {
	string nama;
	int nilai, nim;
	
	cout<<"nama	:";
	getline(cin, nama);
	cout<<"NIM	:";
	cin>>nim;	
	cout<<"masukkan nilai :" ; cin >> nilai;
	
	switch (nilai){
		case 80 ... 100:
			cout<< "grade :A"<<endl;
			break;
			
		case 70 ... 79:
			cout<< "grade :B";
			break;
			
		case 60 ... 69:
			cout<< "grade :C";
			break;
			
		case 50 ... 59:
			cout<< "grade :D";
			break;
			
		case 0 ... 49:cout<< "grade :E";
			break;
		default:
			cout<<"nilai tidak valid"<<endl;		
	
	}return 0;}

