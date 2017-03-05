//Nicorici Adrian, 18.05.2014
/* Sa se scrie un program care citeste componentele unui vector precedate de
numarul lor, aduna unu la fiecare componenta si afiseaza
vectorul utilizand pointeri.*/

#include <iostream>
using namespace std;

void citire(int *p,int *n){
	for(int i=0;i<*n;i++){
		cout << "vector[" << i << "]= ";
		cin >> p[i];
	}
}

void afisare(int *p, int *n){
	cout << "Vectorul final: " << endl;
	for(int i=0;i<*n;i++){
		cout << "vector[" << i << "]= " << p[i]+1;
		cout << endl;
	}
}

int main(){
	int vector[100], n;
	int *pn;
	pn=vector;
	cout << "Introduceti n: " << endl;
	cin >> n;
	citire(pn, &n);
	afisare(pn, &n);

	system("pause");
	return 0;
}