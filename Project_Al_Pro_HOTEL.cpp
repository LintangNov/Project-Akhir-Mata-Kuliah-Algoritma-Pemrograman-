#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

string nama,cp,nik;

//DATA=====================================

string username="ARIZ",username1,password="yaboku88",password1;

string namaPelanggan[21] = {"","Asep","Haryadi","Lisa","Nurul","Mukaromah","Paiz","Kardi","Reja","Gerald","Raja","","","","","","","","","",""};
int idPelanggan[21] = {0, 1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,0,0,0,0,0,0,0,0,0,0};
int NIK[21] = {0, 1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,0,0,0,0,0,0,0,0,0,0};
string contact[21] = {"","08123456781","08123456782","08123456783","08123456784","08123456785","08123456786","08123456787","08123456788","08123456711","08123456712","","","","","","","","","",""};

string ID_kamar[21]={"00","01","02","03","04","05","06","07","08","09","10","11","12","13","14","15","16","17","18","19","20"};

string nama_kamar[21]={"...","Rose_01", "Rose_02", "Rose_03", "Rose_04", "Rose_05","Orchid_01", "Orchid_02", "Orchid_03", "Orchid_04","Orchid_05","Jasmine_01", "Jasmine_02", "Jasmine_03", "Jasmine_04", "Jasmine_05","Tulip_01", "Tulip_02", "Tulip_03", "Tulip_04", "Tulip_05"};
    
string lantai_kamar[21]={"...","Lantai 1","Lantai 1","Lantai 1","Lantai 1","Lantai 1","Lantai 2","Lantai 2","Lantai 2","Lantai 2","Lantai 2","Lantai 3","Lantai 3","Lantai 3","Lantai 3","Lantai 3","Lantai 4","Lantai 4","Lantai 4","Lantai 4","Lantai 4" };

string status[21]={"...","Tidak Tersedia", "Kosong", "Tidak Tersedia", "Kosong", "Tidak Tersedia", "Kosong","Tidak Tersedia", "Kosong","Kosong", "Tidak Tersedia", "Kosong", "Tidak Tersedia", "Kosong",
    "Tidak Tersedia", "Kosong","Kosong","Tidak Tersedia", "Kosong", "Tidak Tersedia", "Kosong"};

string Deskripsi_Kamar[21]={"...","Kamar sederhana dengan tempat tidur twin atau double, fasilitas dasar seperti AC, TV, dan kamar mandi pribadi.",
    "Kamar sederhana dengan tempat tidur twin atau double, fasilitas dasar seperti AC, TV, dan kamar mandi pribadi.",
    "Kamar nyaman dengan tempat tidur queen-size, fasilitas standar, minibar, dan pemandangan kota yang menawan.",
    "Kamar nyaman dengan tempat tidur queen-size, fasilitas standar, minibar, dan pemandangan kota yang menawan.",
    "Kamar mewah dengan tempat tidur king-size, akses ke lounge eksklusif, minibar, dan layanan kamar 24 jam.","Standard: Kamar sederhana dengan tempat tidur twin atau double, fasilitas dasar seperti AC, TV, dan kamar mandi pribadi.",
    "Kamar sederhana dengan tempat tidur twin atau double, fasilitas dasar seperti AC, TV, dan kamar mandi pribadi.",
    "Kamar nyaman dengan tempat tidur queen-size, fasilitas standar, minibar, dan pemandangan kota yang menawan.",
    "Kamar nyaman dengan tempat tidur queen-size, fasilitas standar, minibar, dan pemandangan kota yang menawan.",
    "Kamar mewah dengan tempat tidur king-size, akses ke lounge eksklusif, minibar, dan layanan kamar 24 jam.","Standard: Kamar sederhana dengan tempat tidur twin atau double, fasilitas dasar seperti AC, TV, dan kamar mandi pribadi.",
    "Kamar sederhana dengan tempat tidur twin atau double, fasilitas dasar seperti AC, TV, dan kamar mandi pribadi.",
    "Kamar nyaman dengan tempat tidur queen-size, fasilitas standar, minibar, dan pemandangan kota yang menawan.",
    "Kamar nyaman dengan tempat tidur queen-size, fasilitas standar, minibar, dan pemandangan kota yang menawan.",
    "Kamar mewah dengan tempat tidur king-size, akses ke lounge eksklusif, minibar, dan layanan kamar 24 jam.","Standard: Kamar sederhana dengan tempat tidur twin atau double, fasilitas dasar seperti AC, TV, dan kamar mandi pribadi.",
    "Kamar sederhana dengan tempat tidur twin atau double, fasilitas dasar seperti AC, TV, dan kamar mandi pribadi.",
    "Kamar nyaman dengan tempat tidur queen-size, fasilitas standar, minibar, dan pemandangan kota yang menawan.",
    "Kamar nyaman dengan tempat tidur queen-size, fasilitas standar, minibar, dan pemandangan kota yang menawan.",
    "Kamar mewah dengan tempat tidur king-size, akses ke lounge eksklusif, minibar, dan layanan kamar 24 jam.",};

int Harga_kamar[21]={0,400000,400000,750000,750000,1000000,400000,400000,750000,750000,1000000,400000,400000,750000,750000,1000000,400000,400000,750000,750000,1000000};

//=========================================

//LOGIN====================================
void login();
//=========================================

//Penyewa==================================
void penyewa();
void daftarKamar();
void sewa();
void transaksi(string nokamar);
void tanggal(int hari,int bulan,int tahun,int lamaHari);
//=========================================

//Pengelola================================
void dataPelanggan();
void ubahDataPel();
void cariDataPel();
void cNaPel();
void cNIKPel();
void cContPel();

void dataKamar();
void ubahStatusKmr();

void menuPengelola();

void tDataKamar();
void tDataPel();
//========================================
void exit();
void inputSalah();
//========================================
int main(){
    system("cls");
    login();
}

//LOGIN===================================
void login() {
    int pilihLogin;
    system("cls");

    cout << "===============================\n";
    cout << "|         MENU UTAMA          |\n";
    cout << "|-----------------------------|\n";
    cout << "| Anda login sebagai:         |\n";
    cout << "| 1. Penyewa                  |\n";
    cout << "| 2. Pengelola                |\n";
    cout << "| 3. Keluar                   |" << endl;
    cout << "===============================\n";
    cout << "Input pilihan (1-3): "; cin >> pilihLogin;
    system("cls");

    switch (pilihLogin)
    {
    case 1:
        penyewa();
        break;
    case 2:
        menuPengelola();
        break;
    case 3:
        cout << "Anda akan keluar dari program.\n";
        system("pause");
        system("exit");
        break;
    default:
        inputSalah();
        login();
        break;
    }
}
//========================================

//Penyewa=================================
void penyewa(){
    int pilihPenyewa;

    system("cls");
    cout << "=================================" << endl;
    cout << "||        MENU PENYEWA         ||" << endl;
    cout << "||-----------------------------||" << endl;
    cout << "||  1. Lihat daftar kamar      ||" << endl;
    cout << "||  2. Sewa kamar              ||" << endl;
    cout << "||  3. Kembali                 ||" << endl;
    cout << "||  4. Keluar                  ||" << endl;
    cout << "=================================" << endl;
   
    cout << "Input pilihan (1-4): "; cin >> pilihPenyewa;
    switch (pilihPenyewa)
    {
    case 1:
        daftarKamar();
        break;
    case 2:
        sewa();
        break;
    case 3:
        login();
        break;
    case 4:
        cout << "Anda akan keluar dari program.\n";
        system("pause");
        system("exit");
        break;
    default:
        inputSalah();
        penyewa();
        break;
    } 
}

void daftarKamar() {
    char balik;
    system("cls");
    int pilih;

    cout << "=================================" << endl;
    cout << "||    PILIHAN KATEGORI KAMAR   ||" << endl;
    cout << "||-----------------------------||" << endl;
    cout << "||  1. Kamar Tersedia          ||" << endl;
    cout << "||  2. Kamar Tidak Tersedia    ||" << endl;
    cout << "||  3. Kembali                 ||" << endl;
    cout << "=================================" << endl;
    cout << "\nSilahkan masukan pilihan anda : "; cin >> pilih;

    switch(pilih){
        case 1:
            cout << "========================================================================" << endl;
            cout<< left << setw(12) << "Nomor kamar"<<" | "<< setw(10) << "nama kamar"<<" | "<<setw(10) << "lantai"<<" | "<< setw(12) << "Harga kamar"<<" | "<<setw(14) << "status"<<" | " << endl;
            cout << "=============+============+============+==============+=================" << endl;
            for(int i=1;i<=20;i++){
                if(status[i]=="Kosong"){
            
                    cout<< left << setw(12) << ID_kamar[i]<<" | "<< setw(10) << nama_kamar[i]<<" | "<<setw(10) << lantai_kamar[i]<<" | "<< setw(12) << Harga_kamar[i]<<" | "<<setw(14) << status[i]<<" | " << endl;
                }
            }
            cout << "========================================================================" << endl;
            break;
        case 2:
            cout << "========================================================================" << endl;
            cout<< left << setw(12) << "Nomor kamar"<<" | "<< setw(10) << "nama kamar"<<" | "<<setw(10) << "lantai"<<" | "<< setw(12) << "Harga kamar"<<" | "<<setw(14) << "status"<<" | " << endl;
            cout << "=============+============+============+==============+=================" << endl;
            for(int i=1;i<=20;i++){
                if(status[i]=="Tidak Tersedia"){
                    cout<< left << setw(12) << ID_kamar[i]<<" | "<< setw(10) << nama_kamar[i]<<" | "<<setw(10) << lantai_kamar[i]<<" | "<< setw(12) << Harga_kamar[i]<<" | "<<setw(14) << status[i]<<" | " << endl;
                }
            }
            cout << "========================================================================" << endl;
            break;
        case 3:
        penyewa();
        break;

        default:
            inputSalah();
            daftarKamar();
            break;
    }


    cout << "Kembali ke menu utama? (y/n)\n"; cin >> balik;

    if (balik == 'y') {
        penyewa();
    } else if (balik == 'n') {
        cout << "Anda akan keluar dari program\n";
        system("pause");
        system("exit");
    }
}

void sewa() {
    bool kodeValid=false;
    string kodeSewa,tanya;
    system("cls");
    cout << "========================================================================" << endl;
    cout<< left << setw(12) << "Nomor kamar"<<" | "<< setw(10) << "nama kamar"<<" | "<<setw(10) << "lantai"<<" | "<< setw(12) << "Harga kamar"<<" | "<<setw(14) << "status"<<" | " << endl;
    cout << "=============+============+============+==============+=================" << endl;
    for(int i=1;i<=20;i++){
    
        cout<< left << setw(12) << ID_kamar[i]<<" | "<< setw(10) << nama_kamar[i]<<" | "<<setw(10) << lantai_kamar[i]<<" | Rp"<< setw(12) << Harga_kamar[i]<<" | "<<setw(14) << status[i]<<" | " << endl;  
    }
    cout << "========================================================================" << endl;

    cout << "Masukkan kode kamar yang ingin di sewa : "; cin >> kodeSewa;

    for (int i=1;i<=20;i++) {
        if (kodeSewa == ID_kamar[i]) {

            if(!(status[i]=="Kosong")) {
                cout << "Maaf, kamar yang anda pilih sedang disewakan.\n";
                cout << "Silahkan pilih kamar lain.\n";
                system("pause");
                system("cls");
                sewa();
            }
            cout << left << setw(30) << "\nAnda akan menyewa kamar"<<  "  : " << ID_kamar[i] << endl;
            cout << left << setw(30) << "Nama kamar" <<  " : " << nama_kamar[i] << endl;
            cout << left << setw(30) << "Status kamar" <<  " : " << status[i] << endl;
            cout << left << setw(30) << "Deskripsi"<<  " : " << Deskripsi_Kamar[i] << endl;
            cout << left << setw(30) << "Lantai"<<  " : " << lantai_kamar[i] << endl;
            cout << left << setw(30) << "Harga per hari"<< " : Rp" <<Harga_kamar[i] << endl;
            kodeValid = true;
            bool pilvalid=true;

            do
            {   
                
                cout << "Apakah anda ingin melanjutkan transaksi? (y/n)"; cin >> tanya;

                if (tanya=="y") {
                    transaksi(kodeSewa);
                } else if (tanya=="n") {
                    cout << "Kembali ke menu penyewa.\n";
                    system ("pause");
                    penyewa();
                } else {
                    cout << "Pilihan tidak valid\nSilahkan ulangi pilihan\n";
                    pilvalid=false;
                    system("pause");
                }
            } while (pilvalid==false);
            

        }
    }
    if (kodeValid==false) {
        cout << "Maaf, kode kamar yang anda input tidak valid\n";
        cout << "Silahkan input ulang"<< endl;
        system("pause");
        sewa();
    }
}

void transaksi(string nokamar) {
    string balik;
    int hari,bulan,tahun;
    int lamaHari;
    system("cls");
    cout << "Masukkan data diri penyewa: \n";
    cin.ignore();
    cout << left << setw(30) <<  "Nama" <<  " : ";
    getline(cin,nama);
    namaPelanggan[11]=nama;
    cout << left << setw(30) <<  "Contact person" <<  " : ";
    cin >> contact[11];
    cout << left << setw(30) << "NIK" << " : ";
    cin >> NIK[11];
    cout << "\n\nCheck in pada :\n";
    cout << left << setw(30) << "Tanggal" << " : ";
    cin >> hari; 
    cout << left << setw(30) << "Bulan" << " : ";
    cin >> bulan;
    cout << left << setw(30) << "Tahun" << " : ";
    cin >> tahun;
    cout << left << setw(30) << "Lama sewa" << " : ";
    cin >> lamaHari;
    
    system("cls");
    cout << "===================================================\n";
    cout << "|                   NOTA TRANSAKSI                |\n";
    cout << "---------------------------------------------------\n";
    for (int i=1;i<=20;i++) {
        if (nokamar == ID_kamar[i]) {
            

            cout << left << setw(30) << "Nomor kamar"<<  " : " << ID_kamar[i] << endl;
            cout << left << setw(30) <<  "Harga (per hari)"<<  " : Rp" << Harga_kamar[i] << endl;
            tanggal(hari,bulan,tahun,lamaHari);
            cout << left << setw(30) << "Subtotal"<< " : Rp" << Harga_kamar[i] * lamaHari<< endl;

        }
    }

    cout << "Kembali ke menu utama? (y/n)\n";
    cin >> balik;
    if (balik=="y") {
        system("cls");
        penyewa();
    } else if (balik=="n") {
        cout << "Anda akan keluar dari program.\n";
        system("pause");
    }
}

void tanggal(int hari,int bulan,int tahun,int lamaHari) {
    int hari_out=0;
    string BulanOutSTR,BulanInSTR;
    string namaBln[13]={" ","Januari","Februari","Maret","April","Mei","Juni","Juli","Agustus","September","Oktober","November","Desember"};
    hari_out+=hari+lamaHari;
    
    for(int i = 1;i <= 12;i++) {
        if(bulan == i) {
            BulanInSTR = namaBln[i];
        }
    }
    cout << left << setw(30) << "Check in pada tanggal" << " : " << hari << " " << BulanInSTR << " " << tahun << endl;
    cout << left << setw(30) << "Menginap selama " << " : " <<lamaHari<<" hari"<<endl;
    do{
        if(bulan==12&&hari_out>31){
            hari_out-=31;
            bulan=1;
            tahun++;
            
        }
        else if(bulan!=2&&(bulan==4||bulan==6||bulan==9||bulan==11)&&hari_out>30){
            hari_out-=30;
            bulan++;
            
        }
        else if(bulan!=2&&(bulan==1||bulan==3||bulan==5||bulan==7||bulan==8||bulan==10)&&hari_out>30){
            hari_out-=31;
            bulan++;
            
        }
        else if(bulan==2&&((tahun%4==0&tahun%100!=0)||tahun%400==0)&&hari_out>29){
            hari_out-=29;
            bulan++;
            
        }
        else if(bulan==2&&((tahun%4!=0&tahun%100!=0)||tahun%400!=0)&&hari_out>28){
            hari_out-=28;
            bulan++;
            
        }
        else {
            
        }
    }while(hari_out>31);

    for(int i = 1;i <= 12;i++) {
        if(bulan == i) {
            BulanOutSTR = namaBln[i];
        }
    }
    
    cout << left << setw(30)<< "Check out pada tanggal" << " : " <<hari_out<<" "<<BulanOutSTR<<" "<<tahun<<endl;
}
//========================================

//Pengelola===============================
void menuPengelola(){
    char pil;
    cout<<"Username: ";
    cin>>username1;
    cout<<"Password: ";
    cin>>password1;
    if(username==username1&&password1==password){
        system("cls");
        cout << "================================\n";
        cout << "|        Menu Pengelola        |\n";
        cout << "|------------------------------|\n";
        cout << "| 1. Ubah Data Pelanggan       |\n";
        cout << "| 2. Ubah Data Kamar           |\n";
        cout << "| 3. Kembali ke menu login     |\n";
        cout << "================================\n";
        cout << "Input: ";
        pil = getch();

        switch(pil){
            case '1':
                dataPelanggan();
                break;
            case '2':
                dataKamar();
                break;
            case '3':
                login();
                break;
            default:
                break;
        }
    }
    else {
        cout<<"Salah Username atau password"<<endl;
        menuPengelola();
    }
    
}
//Mengelola Data Pelanggan================
void dataPelanggan(){
    char pil;
    bool found = false;

    system("cls");

    cout << "===============================\n";
    cout << "|   Menu Ubah Data Pelanggan  |\n";
    cout << "|-----------------------------|\n";
    cout << "| 1. Tampilkan Data Pelanggan |\n";
    cout << "| 2. Cari Data Pelanggan      |\n";
    cout << "| 3. Kembali                  |\n";
    cout << "===============================\n";
    cout << "Input: ";
    pil = getch();

    switch(pil){
        case '1':
            tDataPel();
        break;

        case '2':
            cariDataPel();
            break;
        case '3':
            menuPengelola();
            break;
        break;
        default:
            cout << "Masukkan input yang benar!\n";
            system("pause");
            dataPelanggan();
        break;
    }
}

void tDataPel(){
    char pil;
    system("cls");
        cout << "======================================================\n";
        cout << "| "<< left<< setw(23) << "Nama" << setw(21) << "NIK"  << setw(4) << "Contact" << "|" << '\n';
        cout << "|----------------------------------------------------|\n";
        for(int i = 1; i < sizeof(namaPelanggan)/sizeof(string); i++){
            if(!namaPelanggan[i].empty() && !NIK[i] == 0)
                cout << "| " << left << setw(15) << namaPelanggan[i] << '\t' << setw(6) << right << NIK[i] << '\t' << setw(20) << contact[i] << setw(2) << "|" << '\n';
        }
        cout << "======================================================\n";
        cout << "\n1. Ubah Data\n";
        cout << "2. Kembali\n";
        cout << "Input: ";
        pil = getch();

        switch(pil){
            case '1':
                ubahDataPel();
            break;
            case '2':
                dataPelanggan();
            break;
            default:
                cout << "Masukkan input yang benar!\n";
                system("pause");
                tDataPel();
            break;
        }
}

void ubahDataPel(){
    char pil;
    string cNama;
    int cNIK;
    bool found = false;

    system("cls");

    cout << "======================================================\n";
    cout << "| Nama" << setw(23) << "NIK" << setw(21) << "Contact" << setw(4) << "|" << '\n';
    cout << "|----------------------------------------------------|\n";
    for(int i = 1; i < sizeof(namaPelanggan)/sizeof(string); i++){
        if(!namaPelanggan[i].empty() && !NIK[i] == 0){
            cout << "| " << left << setw(15) << namaPelanggan[i] << '\t' << setw(6) << right << NIK[i] << '\t' << setw(20) << contact[i] << setw(2) << "|" << '\n';
        }
    }
    cout << "======================================================\n";
    cout << "\n1. Ubah Nama\n";
    cout << "2. Ubah NIK\n";
    cout << "3. Ubah Contact\n";
    cout << "4. Ubah Ketiganya\n";
    cout << "5. Hapus Data Pelanggan\n";
    cout << "6. Kembali\n";
    cout << "Input: ";
    pil = getch();

    switch(pil){
        case '1':
        system("cls");
            cout << "======================================================\n";
            cout << "| Nama" << setw(23) << "NIK" << setw(21) << "Contact" << setw(4) << "|" << '\n';
            cout << "|----------------------------------------------------|\n";
            for(int i = 1; i < sizeof(namaPelanggan)/sizeof(string); i++){
                if(!namaPelanggan[i].empty() && !NIK[i] == 0){
                    cout << "| " << left << setw(15) << namaPelanggan[i] << '\t' << setw(6) << right << NIK[i] << '\t' << setw(20) << contact[i] << setw(2) << "|" << '\n';
                }
            }
            cout << "======================================================\n";
            cout << "\nMasukkan Nama Pelanggan yang ingin diubah: ";
            getline(cin, cNama);
            system("cls");

            for(int i = 1; i < sizeof(namaPelanggan)/sizeof(string); i++){
                if(namaPelanggan[i] == cNama){
                    cout << "======================================================\n";
                    cout << "| Nama" << setw(23) << "NIK" << setw(21) << "Contact" << setw(4) << "|" << '\n';
                    cout << "|----------------------------------------------------|\n";
                    cout << "| " << left << setw(15) << namaPelanggan[i] << '\t' << setw(6) << right << NIK[i] << '\t' << setw(20) << contact[i] << setw(2) << "|" << '\n';
                    cout << "======================================================\n";
                    cout << "\nMasukkan Nama Pelanggan yang baru: ";
                    getline(cin, namaPelanggan[i]);
                    found = true;
                }
            }
            if(!found){
                    system("cls");
                    cout << "================================\n";
                    cout << "|     Nama Tidak Ditemukan     |\n";
                    cout << "================================\n";
                    system("pause");
                    ubahDataPel();
                }else{
                    system("cls");
                    cout << "================================\n";
                    cout << "|       Ubah Nama Sukses       |\n";
                    cout << "================================\n";
                    system("pause");
                    ubahDataPel();
                }
        break;

        case '2':
        system("cls");
            cout << "======================================================\n";
            cout << "| Nama" << setw(23) << "NIK" << setw(21) << "Contact" << setw(4) << "|" << '\n';
            cout << "|----------------------------------------------------|\n";
            for(int i = 1; i < sizeof(namaPelanggan)/sizeof(string); i++){
                if(!namaPelanggan[i].empty() && !NIK[i] == 0){
                    cout << "| " << left << setw(15) << namaPelanggan[i] << '\t' << setw(6) << right << NIK[i] << '\t' << setw(20) << contact[i] << setw(2) << "|" << '\n';
                }
            }
            cout << "======================================================\n";
            cout << "\nMasukkan NIK Pelanggan yang ingin diubah: ";
            cin >> cNIK;
            system("cls");

            for(int i = 1; i < sizeof(NIK)/sizeof(int); i++){
                if(NIK[i] == cNIK){
                    cout << "======================================================\n";
                    cout << "| Nama" << setw(23) << "NIK" << setw(21) << "Contact" << setw(4) << "|" << '\n';
                    cout << "|----------------------------------------------------|\n";
                    cout << "| " << left << setw(15) << namaPelanggan[i] << '\t' << setw(6) << right << NIK[i] << '\t' << setw(20) << contact[i] << setw(2) << "|" << '\n';
                    cout << "======================================================\n";
                    cout << "\nMasukkan NIK Pelanggan yang baru: ";
                    cin >> NIK[i];
                    found = true;
                }
            }
            if(!found){
                    system("cls");
                    cout << "=================================\n";
                    cout << "|      NIK Tidak Ditemukan      |\n";
                    cout << "=================================\n";
                    system("pause");
                    ubahDataPel();
                }else{
                    system("cls");
                    cout << "===============================\n";
                    cout << "|       Ubah NIK Sukses       |\n";
                    cout << "===============================\n";
                    system("pause");
                    ubahDataPel();
                }
        break;

        case '3':
            system("cls");
            cout << "======================================================\n";
            cout << "| Nama" << setw(23) << "NIK" << setw(21) << "Contact" << setw(4) << "|" << '\n';
            cout << "|----------------------------------------------------|\n";
            for(int i = 1; i < sizeof(namaPelanggan)/sizeof(string); i++){
                if(!namaPelanggan[i].empty() && !NIK[i] == 0){
                    cout << "| " << left << setw(15) << namaPelanggan[i] << '\t' << setw(6) << right << NIK[i] << '\t' << setw(20) << contact[i] << setw(2) << "|" << '\n';
                }
            }
            cout << "======================================================\n";
            cout << "\nMasukkan NIK Pelanggan yang ingin diubah Contactnya: ";
            cin >> cNIK;
            system("cls");

            for(int i = 1; i < sizeof(NIK)/sizeof(int); i++){
                if(NIK[i] == cNIK){
                    cout << "======================================================\n";
                    cout << "| Nama" << setw(23) << "NIK" << setw(21) << "Contact" << setw(4) << "|" << '\n';
                    cout << "|----------------------------------------------------|\n";
                    cout << "| " << left << setw(15) << namaPelanggan[i] << '\t' << setw(6) << right << NIK[i] << '\t' << setw(20) << contact[i] << setw(2) << "|" << '\n';
                    cout << "======================================================\n";
                    cout << "\nMasukkan Contact Pelanggan yang baru: ";
                    cin >> contact[i];
                    found = true;
                }
            }
            if(!found){
                    system("cls");
                    cout << "=================================\n";
                    cout << "|      NIK Tidak Ditemukan      |\n";
                    cout << "=================================\n";
                    system("pause");
                    ubahDataPel();
                }else{
                    system("cls");
                    cout << "===============================\n";
                    cout << "|     Ubah Contact Sukses     |\n";
                    cout << "===============================\n";
                    system("pause");
                    ubahDataPel();
                }
        break;

        case '4':
            system("cls");
            cout << "======================================================\n";
            cout << "| Nama" << setw(23) << "NIK" << setw(21) << "Contact" << setw(4) << "|" << '\n';
            cout << "|----------------------------------------------------|\n";
            for(int i = 1; i < sizeof(namaPelanggan)/sizeof(string); i++){
                if(!namaPelanggan[i].empty() && !NIK[i] == 0){
                    cout << "| " << left << setw(15) << namaPelanggan[i] << '\t' << setw(6) << right << NIK[i] << '\t' << setw(20) << contact[i] << setw(2) << "|" << '\n';
                }
            }
            cout << "======================================================\n";
            cout << "\nMasukkan NIK Pelanggan yang ingin diubah ketiga datanya: ";
            cin >> cNIK;
            system("cls");

            for(int i = 1; i < sizeof(NIK)/sizeof(int); i++){
                if(NIK[i] == cNIK){
                    cout << "======================================================\n";
                    cout << "| Nama" << setw(23) << "NIK" << setw(21) << "Contact" << setw(4) << "|" << '\n';
                    cout << "|----------------------------------------------------|\n";
                    cout << "| " << left << setw(15) << namaPelanggan[i] << '\t' << setw(6) << right << NIK[i] << '\t' << setw(20) << contact[i] << setw(2) << "|" << '\n';
                    cout << "======================================================\n";
                    cout << "\nMasukkan Nama Pelanggan yang baru: ";
                    cin >> namaPelanggan[i];
                    cout << "\nMasukkan NIK Pelanggan yang baru: ";
                    cin >> NIK[i];
                    cout << "\nMasukkan Contact Pelanggan yang baru: ";
                    cin >> contact[i];
                    found = true;
                }
            }
            if(!found){
                    system("cls");
                    cout << "=================================\n";
                    cout << "|      NIK Tidak Ditemukan      |\n";
                    cout << "=================================\n";
                    system("pause");
                    ubahDataPel();
                }else{
                    system("cls");
                    cout << "================================\n";
                    cout << "|       Ubah Data Sukses       |\n";
                    cout << "================================\n";
                    system("pause");
                    ubahDataPel();
                }
        break;

        case '5':
            system("cls");
            cout << "======================================================\n";
            cout << "| Nama" << setw(23) << "NIK" << setw(21) << "Contact" << setw(4) << "|" << '\n';
            cout << "|----------------------------------------------------|\n";
            for(int i = 1; i < sizeof(namaPelanggan)/sizeof(string); i++){
                if(!namaPelanggan[i].empty() && !NIK[i] == 0){
                    cout << "| " << left << setw(15) << namaPelanggan[i] << '\t' << setw(6) << right << NIK[i] << '\t' << setw(20) << contact[i] << setw(2) << "|" << '\n';
                }
            }
            cout << "======================================================\n";
            cout << "\nMasukkan NIK Pelanggan yang ingin dihapus: ";
            cin >> cNIK;
            system("cls");

            for(int i = 1; i < sizeof(NIK)/sizeof(int); i++){
                if(NIK[i] == cNIK){

                    system("cls");
                    found = true;
                    cout << "======================================================\n";
                    cout << "| Nama" << setw(23) << "NIK" << setw(21) << "Contact" << setw(4) << "|" << '\n';
                    cout << "|----------------------------------------------------|\n";
                    cout << "| " << left << setw(15) << namaPelanggan[i] << '\t' << setw(6) << right << NIK[i] << '\t' << setw(20) << contact[i] << setw(2) << "|" << '\n';
                    cout << "======================================================\n";
                    cout << "\nData akan dihapus\n";
                    namaPelanggan[i] = "";
                    NIK[i] = 0;
                    contact[i] = "";
                    system("pause");

                }
            }
            if(!found){
                    system("cls");
                    cout << "=================================\n";
                    cout << "|      NIK Tidak Ditemukan      |\n";
                    cout << "=================================\n";
                    system("pause");
                    ubahDataPel();
                }else{
                    system("cls");
                    cout << "=================================\n";
                    cout << "|       Hapus Data Sukses       |\n";
                    cout << "=================================\n";
                    system("pause");
                    ubahDataPel();
                }
        break;

        case '6':
            dataPelanggan();
        break;

        default:
            ubahDataPel();
            cout << "Masukkan input yang benar!\n";
            system("pause");
        break;
    }
}

void cariDataPel(){
    char pil;
    string cNama, cContact;
    int cNIK;
    bool found = false;

    system("cls");
    
    cout << "=================================\n";
    cout << "|    Menu Cari Data Pelanggan   |\n";
    cout << "|-------------------------------|\n";
    cout << "| 1. Cari Berdasarkan Nama      |\n";
    cout << "| 2. Cari Berdasarkan NIK       |\n";
    cout << "| 3. Cari Berdasarkan Contact   |\n";
    cout << "| 4. Kembali                    |\n";
    cout << "=================================\n";
    cout << "Input: ";
    pil = getch();
        switch(pil){
            case '1':
                cNaPel();
            break;

            case '2':
                cNIKPel();
            break;

            case '3':
                cContPel();
            break;

            case '4':
                dataPelanggan();
            break;

            default:
                cout << "Masukkan input yang benar!\n";
                system("pause");
                cariDataPel();
            break;
        }                
}

void cNaPel(){

    string cNama;
    bool found = false;
    char pil;

    cout << "\nMasukkan Nama Pelanggan yang ingin dicari: ";
    getline(cin, cNama);
    system("cls");
    for(int i = 1; i < sizeof(namaPelanggan)/sizeof(string); i++){
    if(namaPelanggan[i] == cNama){
        cout << "======================================================\n";
        cout << "|                   Nama Ditemukan                   |\n";
        cout << "|----------------------------------------------------|\n";
        cout << "| Nama" << setw(23) << "NIK" << setw(21) << "Contact" << setw(4) << "|" << '\n';
        cout << "|----------------------------------------------------|\n";
        cout << "| " << left << setw(15) << namaPelanggan[i] << '\t' << setw(6) << right << NIK[i] << '\t' << setw(20) << contact[i] << setw(2) << "|" << '\n';
        cout << "======================================================\n";
        found = true;
        }
    }
    if(!found){
        system("cls");
        cout << "================================\n";
        cout << "|     Nama Tidak Ditemukan     |\n";
        cout << "================================\n";
        system("pause");
        cariDataPel();
    }else{
        cout << "=================================\n";
        cout << "| 1. Ke Menu Ubah Data          |\n";
        cout << "| 2. Lanjut Cari Data           |\n";
        cout << "=================================\n";
        cout << "Input: ";
        pil = getch();
            switch(pil){
                case '1':
                    ubahDataPel();
                break;
                case '2':
                    cariDataPel();
                break;
                default:
                    cout << "Masukkan input yang benar!\n";
                    system("pause");
                    cariDataPel();
                break;
            }
    }
}

void cNIKPel(){
    
    int cNIK;
    bool found = false;
    char pil;

    cout << "\nMasukkan NIK Pelanggan yang ingin dicari: ";
    cin >> cNIK;
    system("cls");

    for(int i = 1; i < sizeof(NIK)/sizeof(int); i++){
            if(NIK[i] == cNIK){
            cout << "======================================================\n";
            cout << "|                   NIK  Ditemukan                   |\n";
            cout << "|----------------------------------------------------|\n";
            cout << "| Nama" << setw(23) << "NIK" << setw(21) << "Contact" << setw(4) << "|" << '\n';
            cout << "|----------------------------------------------------|\n";
            cout << "| " << left << setw(15) << namaPelanggan[i] << '\t' << setw(6) << right << NIK[i] << '\t' << setw(20) << contact[i] << setw(2) << "|" << '\n';
            cout << "======================================================\n";
            found = true;
            }
        }
    
    if(!found){
            system("cls");
            cout << "=================================\n";
            cout << "|      NIK Tidak Ditemukan      |\n";
            cout << "=================================\n";
            system("pause");
            cariDataPel();
        }else{
            cout << "=================================\n";
            cout << "| 1. Ke Menu Ubah Data          |\n";
            cout << "| 2. Lanjut Cari Data           |\n";
            cout << "=================================\n";
            cout << "Input: ";
            pil = getch();
                switch(pil){
                    case '1':
                        ubahDataPel();
                    break;
                    case '2':
                        cariDataPel();
                    break;
                    default:
                        cout << "Masukkan input yang benar!\n";
                        system("pause");
                        cariDataPel();
                    break;
                }
        }
}

void cContPel(){
    
    string cContact;
    bool found = false;
    char pil;

    cout << "\nMasukkan Contact Pelanggan yang ingin dicari: ";
    cin >> cContact;
    system("cls");

    for(int i = 1; i < sizeof(contact)/sizeof(string); i++){
            if(contact[i] == cContact){
            cout << "======================================================\n";
            cout << "|                 Contact  Ditemukan                 |\n";
            cout << "|----------------------------------------------------|\n";
            cout << "| Nama" << setw(23) << "NIK" << setw(21) << "Contact" << setw(4) << "|" << '\n';
            cout << "|----------------------------------------------------|\n";
            cout << "| " << left << setw(15) << namaPelanggan[i] << '\t' << setw(6) << right << NIK[i] << '\t' << setw(20) << contact[i] << setw(2) << "|" << '\n';
            cout << "======================================================\n";
            found = true;
            }
        }
    
    if(!found){
            system("cls");
            cout << "=================================\n";
            cout << "|    Contact Tidak Ditemukan    |\n";
            cout << "=================================\n";
            system("pause");
            cariDataPel();
        }else{
            cout << "=================================\n";
            cout << "| 1. Ke Menu Ubah Data          |\n";
            cout << "| 2. Lanjut Cari Data           |\n";
            cout << "=================================\n";
            cout << "Input: ";
            pil = getch();
                switch(pil){
                    case '1':
                        ubahDataPel();
                    break;
                    case '2':
                        cariDataPel();
                    break;
                    default:
                        cout << "Masukkan input yang benar!\n";
                        system("pause");
                        cariDataPel();
                    break;
                }
        }
}
//========================================

//Mengelola Data Kamar====================
void dataKamar(){
    char pil;
    bool found = false;

    system("cls");

    cout << "===============================\n";
    cout << "|     Menu Ubah Data Kamar    |\n";
    cout << "|-----------------------------|\n";
    cout << "| 1. Tampilkan Data Kamar     |\n";
    cout << "| 2. Kembali                  |\n";
    cout << "===============================\n";
    cout << "Input: ";
    pil = getch();

    switch(pil){
        case '1':
            tDataKamar();
        break;

        case '2':
            menuPengelola();
        break;
        default:
            cout << "Masukkan input yang benar!\n";
            system("pause");
            dataKamar();
        break;

    }
}

void ubahStatusKmr(){
    char pil;
    string cID;
    bool found = false;

    system("cls");
    cout << "=============================================================\n";
    cout << "| Nama Kamar" << setw(23) << "ID Kamar" << setw(21) << "Status" << setw(5) << "|" << '\n';
    cout << "|-----------------------------------------------------------|\n";
    for(int i = 1; i < sizeof(nama_kamar)/sizeof(string); i++){
        if(!nama_kamar[i].empty() && !ID_kamar[i].empty())
            cout << "| " << left << setw(15) << nama_kamar[i] << '\t' << setw(6) << right << ID_kamar[i] << '\t' << setw(27) << status[i] << setw(2) << "|" << '\n';
    }
    cout << "=============================================================\n";
    cout << "\nMasukkan ID Kamar yang ingin diubah statusnya: ";
    getline(cin, cID);
    system("cls");

    for(int i = 1; i < sizeof(ID_kamar)/sizeof(string); i++){


        if(ID_kamar[i] == cID){
            system("cls");
            found = true;
            cout << "=============================================================\n";
            cout << "| Nama Kamar" << setw(23) << "ID Kamar" << setw(21) << "Status" << setw(5) << "|" << '\n';
            cout << "|-----------------------------------------------------------|\n";
            for(int i = 1; i < sizeof(ID_kamar)/sizeof(string); i++){
                if(!nama_kamar[i].empty() && !ID_kamar[i].empty())
                    cout << "| " << left << setw(15) << nama_kamar[i] << '\t' << setw(6) << right << ID_kamar[i] << '\t' << setw(27) << status[i] << setw(2) << "|" << '\n';
            }
            cout << "=============================================================\n";

            if(status[i] == "Kosong"){
                cout << "Status kamar akan diubah menjadi Tidak Tersedia\n";
                system("pause");
                status[i] = {"Tidak Tersedia"};
            }else{
                cout << "Status kamar akan diubah menjadi Kosong\n";
                system("pause");
                status[i] = {"Kosong"};
            }
        }
    }

    if(!found){
            system("cls");
            cout << "====================================\n";
            cout << "|     ID Kamar Tidak Ditemukan     |\n";
            cout << "====================================\n";
            system("pause");
            ubahStatusKmr();
        }else{
            system("cls");
            cout << "================================\n";
            cout << "|      Ubah Status Sukses      |\n";
            cout << "================================\n";
            system("pause");
            tDataKamar();
        }


}

void tDataKamar(){
    char pil;
    system("cls");
    cout << "=============================================================\n";
    cout << "| Nama Kamar" << setw(23) << "ID Kamar" << setw(21) << "Status" << setw(5) << "|" << '\n';
    cout << "|-----------------------------------------------------------|\n";
    for(int i = 1; i < sizeof(namaPelanggan)/sizeof(string); i++){
            if(!nama_kamar[i].empty() && !ID_kamar[i].empty())
                cout << "| " << left << setw(15) << nama_kamar[i] << '\t' << setw(6) << right << ID_kamar[i] << '\t' << setw(27) << status[i] << setw(2) << "|" << '\n';
        }
    cout << "=============================================================\n";
    cout << "\n1. Ubah Status Kamar\n";
    cout << "2. Kembali\n";
    cout << "Input: ";
    pil = getch();

    switch(pil){
        case '1':
            ubahStatusKmr();
            break;
        case '2':
            dataKamar();
            break;
        default:
            cout << "Masukkan input yang benar!\n";
            system("pause");
            tDataKamar();
            break;
    }
}
//========================================

void inputSalah(){
    cout << "Input pilihan tidak valid.\n";
    cout << "Silahkan ulangi.\n";
    system("pause");
}

void exit(){
    system("cls");
    cout << "===============================\n";
    cout << "|        Sampai Jumpa!        |\n";
    cout << "===============================\n";
}