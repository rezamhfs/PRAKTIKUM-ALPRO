using namespace std;

class Output {
  public:
  void cetak () {
    cout << "Struk Pembelian Kelompok Jeruk \n";
    cout << "Yang debeli :\n";
    cout << "Ayam Goreng ->"<< data_file[3]<< endl;
    cout << "Ayam Bakar ->"<< data_file[4]<< endl;
    cout << "Harga total Rp."<< data_file[0]<< endl;
    cout << "Diskon Rp."<< data_file[1]<< endl;
    cout << "Harga Bayar Rp."<< data_file[2]<< endl;
 }

void getData(){
  ambil_data.open("../pra_data/input.txt");
  while (!ambil_data.eof()){
    ambil_data >> data_file[index];
    index += 1
  }
  ambil_data.close();
}

private :
  iftream ambil_data;
  string data_file[30];
int index =0;
};
