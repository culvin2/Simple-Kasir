#include <bits/stdc++.h>
using namespace std;
class utama
{
	private:
		int harga[3];
		string nama[3];
		int stok[3];
		int id[3];
	public:
		int getId(int i)
		{
			return id[i];
		}
		int getHarga(int i)
		{
			return harga[i];
		}
		string getNama(int i)
		{
			return nama[i];
		}
		int getStok(int i)
		{
			return stok[i];
		}
		void setId(int id,int i)
		{
			this->id[i]=id;
		}
		void setHarga(int harga,int i)
		{
			this->harga[i]=harga;
		}
		void setNama(string nama,int i)
		{
			this->nama[i]=nama;
		}
		void setStok(int stok,int i)
		{
			this->stok[i]=stok;
		}
};
void menu()
{
	cout << "     MAIN MENU" << endl;
	cout << "=====================" << endl;
	cout << "1. Barang datang" << endl;
	cout << "2. Pembelian" << endl;
	cout << "3. Exit" << endl;
	cout << "\n Choose : ";
}
int main()
{
	utama obj;
	int option;
	int uang;
	int id;
	int harga;
	int stok;
	int jumlah;
	int c=0;
	string nama;
	while(option != 3)
	{
		menu();
		cin >> option;
		if (option == 1)
		{
			if (c<3){
			cout << "      INPUT BARANG       " << endl;
			cout << "=========================" << endl;
			cout << "Input nama barang : ";
			cin >> nama;
			obj.setNama(nama,c);
			cout << "Input id barang : ";
			cin >> id;
			obj.setId(id,c);
			cout << "Input harga barang : ";
			cin >> harga;
			obj.setHarga(harga,c);
			cout << "Input jumlah barang : ";
			cin >> jumlah;
			obj.setStok(jumlah,c);
			c++;
			cout << "Sukses menginput barang" << endl;
			}
			else
				cout << "Udah lewat batas" << endl;
			}
		else if (option == 2)
			{
				cout << "      PEMBELIAN          " << endl;
				cout << "=========================" << endl;
				for (int i=0;i<c;i++)
				{
				cout << "Barang yang tersedia adalah : \n" << endl;
				cout << "Barang ke : " <<i+1<<"\n"<<"Nama Barang : " << obj.getNama(i) << "\n" << "Id Barang : " << obj.getId(i) << "\n" <<"Harga Barang : " << obj.getHarga(i) << "\n" << "Stock Barang : " << obj.getStok(i) << endl;
				}
				cout << "INPUT ID : ";
				cin >> id;
				for (int i=0;i<c;i++)
				{
					if(id == obj.getId(i))
					{
						cout << "Nama Barang : " << obj.getNama(i) << endl;
						cout << "Harga       : " << obj.getHarga(i) << endl;
						cout << "Stock       : " << obj.getStok(i) << endl;
						
						cout << "Jumlah pembelian : ";
						cin >> jumlah;
						cout << "Harga total : " << jumlah*obj.getHarga(i) << endl;
						cout << "Uang pembeli : ";
						cin >> uang;
						cout << "Kembalian : " << uang - jumlah*obj.getHarga(i) << endl;
						obj.setStok(obj.getStok(i)-1,i);
						break;
					}
				}	
			}			
	}

	return 0;
}
