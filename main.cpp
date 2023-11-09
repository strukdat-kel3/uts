#include "data-structure/customer.h"
#include "data-structure/kendaraan.h"
#include "data-structure/pekerjaan.h"
#include <iostream>
using namespace std;

auto *customerHead{new customer::Node};
auto *vehicleHead{new kendaraan::Node};
auto *jobHead{new pekerjaan::Node};

void customers(){
    char pil;
    int a;

    customer::init(customerHead);
    kendaraan::init(vehicleHead);
    pekerjaan::init(jobHead);

    cout<<"Tambah Data [Y/N] :";
    cin>>pil;
    cin.ignore(); 

    while (pil == 'Y')
    {
        customer::append(customerHead);
        kendaraan::append(vehicleHead);
        pekerjaan::append(jobHead);
        cout<<"Tambah Data [Y/N] :";
        cin>>pil;
        cin.ignore();
        if (pil == 'N')
        {
            break;
        }
         
    }

}

void customerView(){
    customer::view(customerHead);
}

void vehicleView(){
    kendaraan::view(vehicleHead);
}

void jobView(){
    pekerjaan::view(jobHead);
}

void reports(){
    customer::view(customerHead);
    kendaraan::view(vehicleHead);
    pekerjaan::view(jobHead);
    cout<<"========================================="<<endl;
    cout<<endl;
}

int main()
{
    int a;

    do
    {
        cout << "\nProgram Bengkel UTS"<< endl;
        cout <<"1. Input Pelanggan Service"<< endl;
        cout <<"2. Data Pelanggan"<< endl;
        cout <<"3. Data Kendaraan"<< endl;
        cout <<"4. Data Service"<< endl;
        cout <<"5. Laporan"<< endl;
        cout <<"6. Exit"<< endl;
        cout << "Masukkan inputan: ";
        cin >> a;
        cin.ignore();

        switch (a)
        {
        case 1:
            customers();
            break;
        case 2:
            customerView();
            break;
        case 3:
            vehicleView();
            break;
        case 4:
            jobView();
            break;
        case 5:
            reports();
        default:
            break;
        }
    } while (a < 6);

    system("cls");

    cout<<"\n\nMuhammad Bariq Athallah Hardianto 20081010119"<<endl;
    cout<<"Achmad Arbi Hanafi                20081010104"<<endl;
    cout<<"Clara Diva Paramitha              20081010097"<<endl;
    cout<<"Dinda Friska Oktaviana            20081010121"<<endl;
    cout<<"Julio Cahya Prayoga               20081010122"<<endl;
    cout<<"Cinta Ramayanti                   22081010002"<<endl;
    cout<<"Indah Ayu Putri Mashita Cahyani   22081010048"<<endl;
    cout<<"Dela Puspita Lasminingrum         22081010209"<<endl;
    cout<<"Zalfa Ibtisamah Arishandy         22081010296"<<endl;

    return 0;
}