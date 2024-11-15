#include<iostream>
#include<string>
using namespace std;

struct Mahasiswa {
	string nama;
	string npm;
	string jurusan;
	float pembayaranAwal;
	float besarCicilan;
	int jumlahCicilan;
	float uangKuliah;
	float uangTerbayar;
	float sisaUang;

};

float hitungSisaUang(float uangKuliah, float uangTerbayar)
{
	return uangKuliah - uangTerbayar;
}

void inputMahasiswa(Mahasiswa&mhs) {
	cout << "Nama Mahasiswa: ";
	getline(cin, mhs.nama);
	cout << "NPM: ";
	getline(cin, mhs.npm);
	cout << "Jurusan (S1/S2): ";
	getline(cin, mhs.jurusan);
	cout << "Pembayaran Awal (Rp): ";
	cin >> mhs.pembayaranAwal;
	cout << "Jumlah Cicilan: ";
	cin >> mhs.jumlahCicilan;
	cout << "Besar Cicilan (Rp): ";
	mhs.uangKuliah = mhs.pembayaranAwal + (mhs. jumlahCicilan * mhs.besarCicilan);
	mhs.uangTerbayar = mhs.pembayaranAwal;
	mhs.sisaUang = hitungSisaUang(mhs.uangKuliah,mhs.uangTerbayar);
}

void tampilkanInfo(const Mahasiswa&mhs) {
	cout<<"\n---------------------------"<<endl;
	cout<<"\n---Informasi Mahasiswa---"<<endl;
	cout<<"Nama:"<<mhs.nama<<endl;
	cout<<"NPM:"<<mhs.npm<<endl;
	cout<<"Jurusan:"<<mhs.jurusan<<endl;
	cout<<"PembayaranAwal:Rp"<<mhs.pembayaranAwal<<endl;
	cout<<"BesarCicilan:Rp"<<mhs.besarCicilan<<endl;
	cout<<"TotalUangKuliah:Rp"<<mhs.uangKuliah<<endl;
	cout<<"UangKuliahTerbayar:Rp"<<mhs.uangTerbayar<<endl;
	cout<<"SisaUangKuliah:Rp"<<mhs.sisaUang<<endl;

}
int main(){
	Mahasiswa mhs;
	
	inputMahasiswa(mhs);
	tampilkanInfo(mhs);
	
	char lanjut;
	cout<<"\nApakah Anda ingin menghitung lagi?(Y/T):";
	cin>>lanjut;
	
	if(lanjut=='Y'||lanjut=='y'){
	main();
	}
	
	return 0;
}
