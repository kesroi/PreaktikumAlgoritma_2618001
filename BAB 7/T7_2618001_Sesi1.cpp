#include <iostream>
using namespace std;

int main() {
	int n1;
	cout<<"1. Membuat Kotak Angka Diagonal\n";
	cout<<" Masukkan ukuran kotak: ";
	cin>>n1;
	for (int i = 1; i <= n1; i++) {
		for (int j = 1; j <= n1; j++) {
			if (i == j) {
				cout<<"1 ";
			}else{
				cout<<"0 ";
			}
		}
	cout<<endl;
	}
	cout<<endl;
	
	
	int n2;
	cout<<"2. Membuat Segitiga Terbalik Genap\n";
	cout<<"Masukan ukuran segitiga:";
	cin>>n2;
	int i2=n2;
	while(i2>=1){
		int j2=1;
		int genap=2;
		while(j2<=i2){
			cout<<genap<<" ";
			genap += 2;
			j2++;
		}
		cout<<endl;
		i2--;
	}
	cout<<endl;
	
	
	int n3;
	cout<<"3. Membuat Segitiga Siku-Siku Huruf\n";
	cout<<"Masukan Ukuran Segitiga Siku-Siku:";
	cin>>n3;
	
	if(n3>0){
		int i3=1;
		do{
			int j3=1;
			char huruf= 'A';
			do{
				cout<<huruf<<" ";
				huruf++;
				j3++;
			}
			while(j3<=i3);
			cout<<endl;
			i3++;
		}
		while(i3<=n3);
	}

return 0;
}

