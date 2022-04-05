using namespace std;

class Input {
	public :
		void cetak (){
			cout << " Rastauran JOGLO" <<endl;
			cout << " Menu Yang Tersedia : "<<endl;
			cout << " 1). Ayam Geprek  Rp. 21000"<<endl;
			cout << " 2). Ayam Goreng  Rp. 17000"<<endl;
			cout << " 3). Udang Goreng Rp. 19000"<<endl;
			cout << " 4). Cumi Goreng  Rp. 20000"<<endl;
			cout << " 5). Ayam Bakar   Rp. 25000"<<endl;
			cout << " Pesan Ayam Geprek = "; cin >> bnyk_aymGP;
			cout << " Pesan Ayam Goreng = "; cin >> bnyk_aymGR;
			cout << " Pesan Udang Goreng = "; cin >> bnyk_udgGR;
			cout << " Pesan Cumi Goreng = "; cin >> bnyk_cmiGR;
			cout << " Pesan Ayam Bakar = "; cin >> bnyk_aymBK;
			cout << "Masukkan jarak rumah kamu (dalam KM) : "; cin >>jarak;
		}
		void tofile(){
			tulis_data.open("api_data.txt");
			tulis_data << bnyk_aymGP <<endl;
			tulis_data << bnyk_aymGR <<endl;
			tulis_data << bnyk_udgGR <<endl;
			tulis_data << bnyk_cmiGR <<endl;
			tulis_data << bnyk_aymBK <<endl;
			tulis_data << jarak;
			tulis_data.close();
		}
		
	private :
		ofstream tulis_data;
		int bnyk_aymGP, bnyk_aymGR, bnyk_udgGR, bnyk_cmiGR, bnyk_aymBK, jarak;
};
