#include <iostream>
using namespace std; 

int main(void)
{ 
	int cariin,temp,data[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int i,j,low,higt,mid,jum = 10; 
    bool got = false; 
    cout<<"\nPENCARIAN BINARI\n";  
    cout<<"====================\n";  
    cout<<"\nData : \t";  
    for(i=0;i<jum;i++)
	{ 
        cout<<" "<<data[i]<<" ";
    }
    cout<<endl;
    cout<<"\nMasukan Data yang dicari : "; 
    cin>>cariin;
    for(i=0;i<jum;i++)
	{
        for(j=0;j<jum-i-1;j++){
            if(data[j] > data [j+1]){
                temp = data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    cout<<endl;
    cout<<"Data Di Sorting : ";
    for(i=0;i<jum;i++)
	{
        cout<<" "<<data[i]<<" ";
    }
    cout<<endl;
    low = 0;
    higt = (jum - 1);
    while(low<=higt){
        mid = (low + higt)/2;
        if(cariin == data[mid])
		{
            got = true;
            break;
        }
		else if(cariin < data[mid])
		{
            higt = mid - 1;
        }
		else
		{
            low = mid + 1;
        }
    }
    cout<<endl;

    if(!got)
	{
        cout<<"Data tidak ditemukan";
    }
	else
	{
        cout<<"Data "<< cariin <<" ditemukan index ke : "<<mid ;
    }
    return 0;
}


