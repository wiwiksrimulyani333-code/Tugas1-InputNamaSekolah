#include <iostream>
using namespace std;
int main() {  
         string nama;
         string ulang;
    do{
    cout<<"masukkan nama" ;
    cin>>nama;
    cout<<"namamu adalah" ;
    cout<<nama;
    cout<<" apakah anda mengulang tekan y atau ";      cout<<" Y ";   
    cin>>ulang;
    }
    while(ulang=="y" || ulang=="Y");
    system("pause");
     return 0;
}
