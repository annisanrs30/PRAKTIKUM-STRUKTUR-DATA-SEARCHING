#include <iostream>

using namespace std;

int main()
{
        int i,len;
        string str;
        char s_char, r_char;
 
        cout<<"Masukkan sebuah kalimat: ";
        getline(cin,str);
 
        cout<<"Masukkan karakter yang dicaari: ";
        cin>>s_char;
 
        cout<<"karakter pengganti: ";
        cin>>r_char;
 
        len=str.length();
 
        for(i=0 ; i<len ; i++)
        {
                if(str[i]==s_char)
                {
                         str[i]=r_char;
                }
        }
 
        cout<<"\nHasil replace adalah sebagai berikut: "<<str;
 
        return 0;
}
