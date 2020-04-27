#include<iostream>

using namespace std;
int main ()
{
  int i;
  int n;
  int temp;
  int cari,ketemu=0;
  int angka[100];

 cout<<"========================================="<<endl;
 cout<<"	PROGRAM BINARY SEARCH C++ 	"<<endl;
 cout<<"========================================="<<endl;
 
 cout<<endl;
 cout<<"Masukan jumlah data : ";
 cin>>n;

 for(int i=1; i<=n; i++)
 {
  cout<<"Angka ke - "<<i<<" = ";
  cin>>angka[i];
 }
 
 cout<<endl; 
 cout<<"\n Masukan angka yang dicari : ";
 cin>>cari;

 cout<<endl; 
  for(i=0;i<=n;i++)
  {
	  if (angka[i]==cari)
	  {
		  ketemu=1;
 cout<<"Angka " <<cari<< " ditemukan pada posisi ke "<<i;
 }
  }
  if (ketemu==0)
  {
  	cout<<"Angka tidak ditemukan";
  }
  return 0;
}
