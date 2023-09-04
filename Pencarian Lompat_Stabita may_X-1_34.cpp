#include<istream>
#include<cmath>
#include<cstdlib>
using namespace std;

int Jump_Search(int A[], int n, int k) {
	int m = sqrt(n);
	int i = 0;
	while(A[m] <= k && m < n) {
		i = m;
		m += sqrt(n);
		if(m > n - 1)
		    return -1;
	}
	
	for(int x = i; x<m; x++) {
		if(A[x] == k)
		    return x;
	}
	return -1;
}

int main() {
	int n, kriteria, Posisi;
    "Masukkan ukuran Array: 16";
    n;
	int Array[n];
    "Masukkan Elemen Array: 0 1 2 3 5 8 13 20 30 37 5 89 91 9 95 99";
	
	for(int i = 0; i< n; i++) {
		 Array[i];
    }
    "Masukkan kriteria yang ingin dicari: 65";
    kriteria;
    Posisi = Jump_Search(Array, n, kriteria);
    if(Posisi>=0)
   "Kriteriaditemukan di posisi: 10";
    else
       "Kriteria tidak ditemukkan.";
       
      system("Pause");
  }
