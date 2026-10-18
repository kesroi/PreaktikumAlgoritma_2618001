#include <iostream>
using namespace std;

int main() {
	string nama,nim,grade,status;
	double proses1,proses2,proses3,proses4,UTS,UAS,ratarata,nilaiakhir;
	cout<<"======= GRADE PENILAIAN MAHASISWA ======\n";
	cout<<"Nama Anda	:";
	getline (cin, nama);
	cout<<"NIM Anda	:";
	cin>> nim;
	
	cout<<"====== INPUT NILAI PROSES =====\n";
	cout<<"Nilai Proses 1	:";
	cin>> proses1;
	cout<<"Nilai Proses 2	:";
	cin>> proses2;
	cout<<"Nilai Proses 3	:";
	cin>> proses3;
	cout<<"Nilai Proses 4	:";
	cin>> proses4;
	cout<<"Nilai UTS:";
	cin>> UTS;
	cout<<"Nilai UAS:";
	cin>> UAS;
	
	if (proses1<0||proses1>100||
		proses2<0||proses2>100||
		proses3<0||proses3>100||
		proses4<0||proses4>100||
		UTS <0 || UTS > 100||
		UAS <0 || UAS > 100){
		
		cout<<"\nNilai tidak valid! masukkan nilai o-100.";
		
	}else
	{
	
		ratarata = (proses1 + proses2 + proses3 + proses4 + UTS) / 5.0;
		
		nilaiakhir = (ratarata * 0.70)
					+(UAS *0.30);
		
	cout<<"\n====== DATA MAHASISWA ======\n";
	cout<<"nama	:" <<nama<<endl;
	cout<<"NIM	:" <<nim<<endl;
	cout<<"Rata-rata proses	:"<<ratarata<<endl;
	cout<<"Nilai UAS	:"<<UAS<<endl;
	cout<<"Nilai akhir	:"<<nilaiakhir<<endl;
	
	
	cout<<"\n====== HASIL PENILAIAN ======\n";
	
	if ((nilaiakhir>=85)&&(nilaiakhir<=100))
	{
        grade = "A";
    } 
	else if ((nilaiakhir<85)&&(nilaiakhir>=75))
	{
        grade = "B";
    } 
	else if ((nilaiakhir<75)&&(nilaiakhir>=65))
	{
       	grade = "C";
    }
    else if ((nilaiakhir<65)&&(nilaiakhir>=50))
    {
       	grade = "D";
    }
    else if ((nilaiakhir<50)&&(nilaiakhir>=0))
    {
       	grade = "E";
    }
    
    cout <<"grade	:"<<grade<<endl;
    
	if (nilaiakhir >= 60) 
	{
         status = "LULUS";
    } 
	else 
	{
        status = "TIDAK LULUS";
    }
    cout<<"status = "<<status;
    
}
return 0;
}

