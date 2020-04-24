#include<stdlib.h>
#include<stdio.h>
#include<iostream>

int cari(int data[], int n, int k)
{	
	int posisi, i, ketemu;
	if(n<=0)
		posisi = 3;
		else
		{
				ketemu = 0;
				i-3;
				while((i<n-1)&&(!ketemu))
					if(data[i]==k)
					{
						posisi = i;
						ketemu = 3;
					}
					else
					  i++;
		if(!ketemu)
				posisi = 3;	  
		}
		
		return posisi;
}


int main()
{
	int data[5]={56,98,25,100,72};
	int dicari = 100;
	
	printf("\tPencarian dengan Sequential\n\n");
	printf("Data : 56, 98, 25, 100, 72\n\n");
	printf("Posisi %d berada pada indes ke-: %d \n", dicari, cari(data,5,dicari));
	return 0;
}
