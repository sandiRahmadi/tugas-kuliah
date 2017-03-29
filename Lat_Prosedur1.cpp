#include <iostream>
#include <conio.h>
using namespace std;

void judul()
{
	cout<<endl;
	cout<<"+================================+"<<endl;
	cout<<"| PROGRAM HITUNG RATA-RATA NILAI |"<<endl;
	cout<<"+================================+"<<endl<<endl;
}

void rata_nilai ()
{
	int data;
	cout<<"Masukan Banyaknya Nilai : ";
	cin>>data;
	
	int d[data], i;
	float jumlah, rata2;
	
	jumlah=0;
	for(i=0;i<data;i++)
	{
		cout<<"Masukan Nilai ke - "<<i<<" : ";
		cin>>d[i];
		jumlah=jumlah+d[i];
		rata2=jumlah/data;
	}
	cout<<endl;
	cout<<"Jumlah nilai : "<<jumlah<<endl;
	cout<<"Rata2 Nilai : "<<rata2<<endl;
}

main(){	
	char ul;
	
	atas:
	judul();
	rata_nilai();
	
	cout<<"Ingin mencoba kembali [Y/N]? ";
	cin>>ul;
	if(ul=='Y' || ul=='y')
			goto atas;
	getch();
}