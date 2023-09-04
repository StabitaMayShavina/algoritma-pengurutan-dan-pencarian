#include<iostream>
#include<cstdlib>
using namespace std;
int Linear_Search(int A[], int n, int k)
{
	for(int i = 0; i < n; i++)
	{
	      if (A[i] == k)
	      {
	      	return i;
		  }
	}
	return -1;
}

int main(void)
{
	int n, kriteria, Posisi;
	cout << "Masukkan ukura Array: 7";
	cin >> n;
	int Array[n];
	cout << "Masukkan Elemen Array: 15 23 47 95 65 77 52" << endl;
	
	for(int i = 0; i< n; i++) {
		cin >> Array[i];
    }
    
    cout << "Masukkan kriteria yang ingin dicari: 65";
    cin >> kriteria;
    
      Posisi = Linear_Search(Array, n, kriteria);
      if(Posisi == -1)
      {
      	cout << ("Elemen yang dicari tidak ada");
	  }
	  else 
	  {
	  	cout<<"Elemen ada di indeks : 4" << Posisi << endl;
	  }
	  system("Pause");
	  return 0;
}
