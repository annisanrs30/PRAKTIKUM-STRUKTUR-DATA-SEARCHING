#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

int pencarian(char st[], char m)
{
	int i, posisi, panjang;
	
	i=0;
	posisi = -1;
	panjang = strlen(st);
	while((i<panjang-1)&&posisi == -1)
	{
		if(st[i]==m)
			posisi = i;
			i++;
	}
	return posisi;
}


int main()
{
	printf("\t Pencarian dengan metodee Binary Search\n\n");
	
	char kalimat[]="Annisa Rusydina Sabila";
	char dicari ='t';
	printf("\nPosisi %c dalam string %s berada pada indeks ke- [%d]\n", dicari, kalimat, pencarian(kalimat,dicari));
	system("PAUSE");
	return 0;
}
