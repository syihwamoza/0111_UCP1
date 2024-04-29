#include <iostream>
using namespace std;

int  nNamaKota, nStatus;
int sTidakSehat = <75, sSehat = >75;
string nama;

void input()
{
	cout << "Masukan nilai sensor"
		cin >> nilai sensor;
} 
void BacaDataSensor (){
	for (int i = 0; i < 3; ++1) {
		cout << "Masukkan nilai sensor" << kota << "ke-" << i + 1 << ":";
		cin >> nilai_sensor[i];
	}
}

string TentukanStatus(double rata_rata, double nilai_minimum_sensor) {

	string status;
	if (rata_rata <= 75, 0) {
		status = "Sehat";
	}
	else {
		status = "Tidak Sehat"
	}

	if (nilai_sensor(), nilai_sensor.end(), [&nilai_minimum_sensor](double nilai) {return nilai < nilai_menimu_sensor; })) {
		status = "(Data sensor tidak Valid)";
	}
	return 0;

  void HitungTotalStatus () {
		int total_sehat = 0;
	    int total_tidak_sehat = 0;
		for ()
			if (status = == "sehat") {
				total_sehat++;
			}
			else {
				total_tidak_sehat++;
			}
     }
     return { total_statement, total_tidak_sehat };
	}

	int main() {

		char pilihan;
	do
	{
		BacaDataSensor();
		HitungTotalStatus();

		cout << "Apakah anda ingin mengulangi (y/n) ?";

	} while (pilihan == 'y' || pilihan == 'Y');
	


// 1. 
	//int main() {
		//int umur = 25;                 (integer)
		//double tinggiBadan = 175.5;    (double)
		//std::string nama = "John";     (string)

//2. void tampilkanStatus(int nilai) {
	//if (nilai >= 60) {
		//std::cout << "Anda lulus!" << std::endl;
	//}
	//else {
		//std::cout << "Anda tidak lulus." << std::endl;
	//}
//}
	
// 3. std::cout << "Implementasi if statement:" << std::endl;
	//if (nilai >= 60) {
		//std::cout << "Anda lulus!" << std::endl;

//4. .std::cout << "Implementasi for loop:" << std::endl;
	//for (int i = 1; i <= 5; ++i) {
	//std::cout << "Nilai i: " << i << std::endl; }

//5. struct Buku {
	//std:: string judul;
	//std::string pengarang;
	//int tahunTerbit;
//};
