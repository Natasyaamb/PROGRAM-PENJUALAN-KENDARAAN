// Tugas Besar Pengantar Komputer dan Software
// Juan Verrel Tanuwijaya 121140072
// Natasya Ate Malem Bangun 121140052
// Muhammad Ridho Sandi Kurniawan 121140046

#include<iostream>
using namespace std; 

int hargakendaraan (string a, string b, int c){
	// Rumus : jenis-selisihtahun*merk
	// Jenis : Motor=50 , Mobil=200, Truck = 400
	// Merk : Toyota=0.3, Mitsubishi=0.2, Honda=0,1
	
	// Klasifikasi Kendaraan
	if (a=="1"){
		float selisih=2022-c;
		
		if (b=="1"){
			return 50-selisih*0.3;
		}
		else if (b=="2"){
			return 50-selisih*0.2;
		}
		else {
			return 50-selisih*0.1;
		}
	}
	else if (a=="2"){
		float selisih=2022-c;
		
		if (b=="1"){
			return 200-selisih*0.3;
		}
		else if (b=="2"){
			return 200-selisih*0.2;
		}
		else {
			return 200-selisih*0.1;
		}
	}
	
	else {
		float selisih=2022-c;
		
		if (b=="1"){
			return 400-selisih*0.3;
		}
		else if (b=="2"){
			return 400-selisih*0.2;
		}
		else {
			return 400-selisih*0.1;
		}
	}
}

int main(){
	string beta, nama, alamat, method, deal;
	int n;  // jumlah unit yang akan dibeli
	
	// Judul atau Banner 
	cout << "     =========================================================\n";
	cout << "     $    | TUGAS BESAR PENGANTAR KOMPUTER DAN SOFTWARE |    $\n";
	cout << "     =========================================================\n\n";
	
	// Anggota 
	cout << "       *****************************************************  \n";
	cout << "          [1] Juan Verrel Tanuwijaya         121140072        \n";
	cout << "          [2] Natasya Ate Malem Bangun       121140052        \n";
	cout << "          [3] Muhammad Ridho Sandi Kurniawan 121140046        \n";
	cout << "       *****************************************************  \n\n";
	
	cout << " Memasuki Program... (y) ";
	cin  >> beta;
	cin.ignore();
	cout << endl;
	
	cout << " ------------------ DATA PEMBELI ------------------\n\n";
	cout << "    | Inputan Nama Pembeli          : ";
	getline(cin,nama);
	cout << "    | Inputan Alamat Pembeli        : ";
	getline(cin,alamat);
	cout << "    | Jumlah Unit Yang Ingin Dibeli : ";  // berupa angka 
	cin  >> n;
	cout << endl;
	cout << " --------------------------------------------------\n";
	
	// Variabel 
	string warna[n], plat[n], power[n], knalpot[n], airbag[n], jenis[n], merk[n], kaca[n], nota;
	float tahun[n], harga[n], bayar=0;
	int jenknalpot[n];
	
	// Program Penginputan Data Pembelian
	for (int i=0;i<n;i++){
		cout << "\n\n*) Data Pembelian Unit Ke- " << i+1 <<" :\n";
		cout << "     1) Pilih Jenis Kendaraan  \n";
		cout << "        [1] Motor  \n";            
		cout << "        [2] Mobil  \n"; 
		cout << "        [3] Truck  \n";
		cout << "  >> Pilihan : ";
		cin  >> jenis[i];
		cout << endl;
		
		if (jenis[i]!="1" && jenis[i]!="2" && jenis[i]!="3"){
			cout << "Kesalahan Input!";
			return 0;
		}
		cout << "     2) Pilih Merk Kendaraan  \n";
		cout << "        [1] Toyota  \n";            
		cout << "        [2] Mitsubishi  \n"; 
		cout << "        [3] Honda  \n";
		cout << "  >> Pilihan : ";
		cin  >> merk[i];
		cout << endl;
		
		if (merk[i]!="1" && merk[i]!="2" && merk[i]!="3"){
			cout << "Kesalahan Input!";
			return 0;
		}
		cout << "     3) Pilih Tahun Keluaran        : "; 
		cin  >> tahun[i];
		
		if (tahun[i]>2022){
			cout << "Kesalahan Input!";
			return 0;
		}
		
		harga[i]=hargakendaraan(jenis[i], merk[i], tahun[i]);
		cin.ignore();
		
		
		cout << "     4) Pilih Warna Kendaraan       : "; 
		getline(cin,warna[i]);
		cout << "     5) Pilih Plat Khusus Kendaraan : ";
		getline(cin,plat[i]);
		
		if(jenis[i]== "2" || jenis[i]== "3" ){
			cout << "     6) Pilih Jenis Kaca  \n ";
			cout << "       [1] Light Smoke (Rp. 500.000)   \n";            
		    cout << "        [2] Smoke       (Rp. 750.000)   \n"; 
		    cout << "        [3] Dark Smoke  (Rp. 1.000.000) \n";
		    cout << "  >> Pilihan : ";
			cin  >> kaca[i];       // Terang 0,5 jt, sedang 0,75 jt, gelap 1 jt
			cout << endl;
			
			if (kaca[i]=="1"){
				harga[i]+=0.5;
				kaca[i]="Light Smoke";
			}
			else if (kaca[i]=="2"){
				harga[i]+=0.75;
				kaca[i]="Smoke";
			}
			else if (kaca[i]=="3"){
				harga[i]+=1;
				kaca[i]="Dark Smoke";
			}
			else {
				cout << "Kesalahan Input!";
				return 0;
			}
			
			cout << "     6) Include Airbag?(Sudah Termasuk Biaya Pemasangan)(10 Juta) (Yes/No) : ";
			cin  >> airbag[i];    //input selain Yes dianggap No
			
			if(airbag[i]=="Yes"){
				harga[i]+=10;
			}
			cout << "     7) Include Power Steering? (6 Juta) (Yes/No) : ";
			cin  >> power[i]; //input selain Yes dianggap No
			
			if (power[i]=="Yes"){
				harga[i]+=6;
			}
		}
		
		else {
			cout << "     6) Include Ekstra Knalpot? (Yes/No) : ";
			cin  >> knalpot[i]; //input selain Yes dianggap No
		    
			if (knalpot[i]=="Yes"){
			    cout << "      * Pilih Ekstra Knalpot *     \n";
				cout << "        [1] Tridente Evolution (Rp. 2.000.000)  \n";            
				cout << "        [2] Tridente Pro       (Rp. 1.500.000)  \n"; 
				cout << "        [3] Tridente Racing    (Rp. 1.000.000)  \n";
				cout << "  >> Pilihan : ";
				cin  >> jenknalpot[i];
				cout << endl;
				
				if (jenknalpot[i]==1){
					harga[i]+=2;
					knalpot[i]="Tridente Evolution";
				}
				else if (jenknalpot[i]==2){
					harga[i]+=1.5;
					knalpot[i]="Tridente Pro";
				}
				else if (jenknalpot[i]==3){
					harga[i]+=1;
					knalpot[i]="Tridente Racing";
				}
				else {
				cout << "Kesalahan Input!";
				return 0;
				}
			}
		}
		if (jenis[i]=="1"){
			jenis[i]="Motor";
		}
		else if(jenis[i]=="2"){
			jenis[i]="Mobil";
		}
		else {
			jenis[i]="Truck";
		}
		
		if (merk[i]=="1"){
			merk[i]="Toyota";
		}
		else if(merk[i]=="2"){
			merk[i]="Mitsubishi";
		}
		else {
			merk[i]="Honda";
		}
		bayar+=harga[i];
	}
	cout << "\n    $              $             $              $" << endl;
	cout << "    $              $             $              $" << endl;
	cout << "    $        Tampilkan Nota Pembelian (y)       $" << endl;
	cout << "    $              $             $              $" << endl;
	cout << "    $              $             $              $" << endl;
	cout << "    ";
	cin  >> nota;
	cin.ignore();
	
	cout << "\n    |~~~~~  NOTA PEMBELIAN  ~~~~~| \n\n";
	cout << "          | Nama Pembeli   : " << nama << endl;
	cout << "          | Alamat Pembeli : " << alamat << endl;
	cout << "          | Jumlah Unit    : " << n << endl << endl;
	
	for (int i=0;i<n;i++){
	    cout << "      ==========================================\n";
		cout << "       *) Spesifikasi Unit ke- " <<i+1;
		cout << "\n       1. Jenis Kendaraan  : " << jenis[i];
		cout << "\n       2. Merk  Kendaraan  : " << merk[i];
		cout << "\n       3. Warna Kendaraan  : " << warna[i];
		cout << "\n       4. Plat Khusus      : " << plat[i];
		cout << "\n       5. Tahun Keluaran   : " << tahun[i];
		if (jenis[i]=="Mobil" || jenis[i]=="Truck"){
			cout << "\n       6. Jenis Kaca       : "<< kaca[i];
			cout << "\n       7. Air Bag          : "<< airbag[i];
			cout << "\n       8. Power Steering   : "<< power[i];
			cout << endl;
			cout << "      ==========================================\n";
		}
		else{
			cout << "\n       6. Ekstra Knalpot   : "<< knalpot[i];
			cout << endl;	
			cout << "      ==========================================\n";
		}
		cout << "         Harga Total       : " << harga[i] << " Juta Rupiah\n\n";
	}
	cout << "    |~~~~~~~~~~~~~~~|\n";
	cout << "\n\n Lanjutkan Pembayaran?    (Yes/No)            : "; 
	cin  >> deal;
	
	if (deal=="Yes"){
		cout << " Menggunakan Kredit/Cash? (Kredit +10% harga) : ";
		cin  >> method;
		if(method=="Kredit"){
			bayar=bayar+bayar*0.1;
		}
		cout << "\n   >> Total Harga : " << bayar << " Juta Rupiah";
		cout << "\n\n\n                      |Terima Kasih|                       ";
		cout << "\n=======================================================\n";
		return 0;
	}
	else {
		cout << "\n\n\n                      |Terima Kasih|                       ";
		cout << "\n=======================================================\n";
		return 0;
	}
}
