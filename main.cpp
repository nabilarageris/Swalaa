#include <iostream>
#include "tubes1.h"

using namespace std;

   mhs mahasiswa;

      address inputdata() {
            cout<<"NIM : ";
            cin>> mahasiswa.NIM;
            cout<<"nama mahasiswa : ";
            cin>> mahasiswa.Nama;
            cout<<"nama ayah : ";
            cin>> mahasiswa.NmAyah;
            cout<<"nama ibu : ";
            cin>> mahasiswa.NmIbu;
            cout<<"kode mata kuliah : ";
            cin>> mahasiswa.KMK;
            cout<<"nama mata kuliah : ";
            cin>> mahasiswa.NMK;
            cout<<"semester : ";
            cin>> mahasiswa.Sem;
            cout<<"nilai mahasiswa : ";
            cin>> mahasiswa.Nilai;
            cout<<"IPK mahasiswa : ";
            cin>> mahasiswa.IPK;

            return allocate(mahasiswa);
      }

int main() {
   int pil;
      list L, L1, L2, L3;
      address P;
         cout<<"----------Selamat Datang di Tubes----------"<<endl;
    cout<<"Menu pilihan : "<<endl;
    cout<<" 1. Input data "<<endl;
    cout<<" 2. Add first "<<endl;
    cout<<" 3. Add mid "<<endl;
    cout<<" 4. Add last "<<endl;
    cout<<" 5. Delete first "<<endl;
    cout<<" 6. Delete mid "<<endl;
    cout<<" 7. Delete last "<<endl;
    cout<<" 8. Edit data "<<endl;
    cout<<" 9. Search info "<<endl;
    cout<<"10. Split "<<endl;
    cout<<"11. Merge "<<endl;
    cout<<"12. Print info "<<endl;
    while (pil != 0) {
        cout<<"Enter your choice : ";
        cin>>pil;
    switch (pil) {
case 1 :
        inputdata();
        break;
case 2 :
        addfirst(L,P);
        break;
case 3 :
        addmid(L,P);
        break;
case 4 :
        addlast(L,P);
        break;
case 5 :
        deletefirst(L,P);
        break;
case 6 :
        deletemid(L,P);
        break;
case 7 :
        deletelast(L,P);
        break;
case 8 :
        editinfo(L,P);
        break;
case 9 :
        searchlist(L, mahasiswa);
        break;
case 10 :
        splitlist(L1,L2,L3);
        break;
case 11 :
         merge(L,P);
         break;
case 12 :
         printinfo(L);
         break;
        }
    }
}
