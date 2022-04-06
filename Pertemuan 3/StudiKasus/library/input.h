using namespace std;

class Input{
  public:
    void cetak(){
    cout<< "SELAMAT DATANG \n";
    cout<< "Menu Rumah Makan Kepus";
    cout<< "1. Ayam Geprek  : Rp.21000 \n";
    cout<< "2. Ayam Goreng  : Rp.17000 \n";
    cout<< "3. Udang Goreng : Rp.19000 \n";
    cout<< "4. Cumi Goreng  : Rp.20000 \n";
    cout<< "5. Ayam Bakar   : Rp.25000 \n";

    cout<< "Pesan Ayam Geprek  : "cin>>tot_ayek;
    cout<< "Pesan Ayam Goreng  : "cin>>tot_ayeng;
    cout<< "Pesan Udang Goreng : "cin>>tot_udang;
    cout<< "Pesan Cumi Goreng  : "cin>>tot_cugor;
    cout<< "Pesan Ayam Bakar   : "cin>>tot_ayar;
    }
  void tofile(){
    tulis_data.open("../pra_data/input.txt");
    tulis_data<< tot_ayek<<endl;
    tulis_data<<tot_ayen;
    tulis_data<<tot_udang;
    tulis_data<<tot_cugor;
    tulis_data<<tot_ayar;
    tulis_data.close();
  }
  private :
    ofstream tulis_data;
    int tot_ayek, tot_ayeng, tot_udang, tot_cugor, tot_ayar;
};