using namespace std;

class Proses{
	public:
		void cetak(){
			cout << "Anda sebagai Proses \n";
		}

		void getData(){
			ambil_data.open("api_data.txt");
			bool ayam_geprek = true;
			bool ayam_goreng = true;
			bool udang_goreng = true;
			bool cumi_goreng = true;
			bool ayam_bakar = true ;
			while(!ambil_data.eof()){
				if (ayam_geprek){
					ambil_data>>bnyk_aymGP;
					ayam_geprek = false;
				}
				else if (ayam_goreng){
					ambil_data>>bnyk_aymGR;
					ayam_goreng = false;
				}
				else if (udang_goreng){
					ambil_data>>bnyk_udgGR;
					udang_goreng = false;
				}
				else if (cumi_goreng){
					ambil_data>>bnyk_cmiGR;
					cumi_goreng = false;
				}
				else if(ayam_bakar){
					ambil_data>>bnyk_aymBK;
					ayam_bakar = false;
				}
				else {
					ambil_data>>jarak;
				}
			}
			ambil_data.close();
			cout << endl;
			cout << "Banyak ayam geprek : " << bnyk_aymGP << endl;
			cout << "Banyak ayam goreng : " << bnyk_aymGR << endl;
			cout << "Banyak udang goreng : " << bnyk_udgGR << endl;
			cout << "Banyak cumi goreng : " << bnyk_cmiGR << endl;
			cout << "Banyak ayam bakar : " << bnyk_aymBK << endl;
			cout << "Jarak rumah : " << jarak << endl;

		}
		void toFile(){
			int total = (hrg_aymGP * bnyk_aymGP) + (hrg_aymGR * bnyk_aymGR) + (hrg_udgGR * bnyk_udgGR) + (hrg_cmiGR * bnyk_cmiGR) + (hrg_aymBK * bnyk_aymBK);
			float jumlah = float(total);
			float diskon;
			int diskonongkir;
			
			if (total > 150000){
				diskon= jumlah * 35/100;
				diskonongkir = 8000;
			}
			else if (total > 50000){
				diskon= jumlah *15/100;
				diskonongkir = 5000;
			}
			else {
				diskonongkir = 3000;
			}
			int ongkir;
			if (jarak <= 3){
    			ongkir = 15000;
			}
    		else {
    			ongkir = 25000;
   			}
   			float bayar;
   			bayar = (jumlah - diskon) + (ongkir - diskonongkir);

			tulis_data.open("api_data.txt");
			tulis_data << total << endl;
			tulis_data << diskon << endl;
			tulis_data << ongkir << endl;
			tulis_data << diskonongkir << endl;
			tulis_data << bayar << endl;
			tulis_data << bnyk_aymGP << endl;
			tulis_data << bnyk_aymGR << endl;
			tulis_data << bnyk_udgGR << endl;
			tulis_data << bnyk_cmiGR << endl;
			tulis_data << bnyk_aymBK ;
			tulis_data.close();
		}


	private :
		ifstream ambil_data;
		ofstream tulis_data;
		int bnyk_aymGP;
		int bnyk_aymGR;
		int bnyk_udgGR;
		int bnyk_cmiGR;
		int bnyk_aymBK;
		int jarak;
		int hrg_aymGP = 21000;
		int hrg_aymGR = 17000;
		int hrg_udgGR = 19000;
		int hrg_cmiGR = 20000;
		int hrg_aymBK = 25000;

};