#include <iostream>
using namespace std;

int main() {
	int n;
	cout<<"==== POLA PAPAN CATUR ====\n";
	cout<<"\nMasukan Ukuran Pola Papan Catur =";
	cin>>n;
	int i=0;
	while(i<=n){
		int j =1;
		while(j<=n){
			if((i+j)% 2 == 0){
			cout<<"X ";
			}
			else
			cout<<"O ";
		j++;
		}
		i++;
		cout<<endl;
	}
	

return 0;
}

