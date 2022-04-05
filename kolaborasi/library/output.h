using namespace std;

class Output {
	public :
	// Untuk menampilkan apa yg dibeli dan berapa harganya //
		void cetak () {
			cout << endl;
			cout<<"STRUK PEMBELIAN MAKANAN \n";
			cout<<"JUMLAH PEMBELIAN : \n";
			cout<<"  Ayam Geprek   : "<<data_file[5]<<endl;
			cout<<"  Ayam Goreng   : "<<data_file[6]<<endl;
			cout<<"  Udang Goreng  : "<<data_file[7]<<endl;
			cout<<"  Cumi Goreng   : "<<data_file[8]<<endl;
			cout<<"  Ayam Bakar    : "<<data_file[9]<<endl;
			cout<<" Total Harga Rp. "<<data_file[0]<<endl;
			cout<<" Diskon    : "<<data_file[1]<<endl;
			cout<<" Ongkir    : "<<data_file[2]<<endl;
			cout<<" Diskon Ongkir : "<<data_file[3]<<endl;
			cout<<" Harga Bayar Rp. "<<data_file[4]<<endl;
			// Mengikuti proses yg akan di buat //

		}

		void getData() {
			ambil_data.open("api_data.txt");
			string t;
			while(!ambil_data.eof()){
				ambil_data>>data_file[index];
				index += 1;
			}
			ambil_data.close();
		}
	private :
		ifstream ambil_data;
		string data_file[30];
		int index = 0;

};
