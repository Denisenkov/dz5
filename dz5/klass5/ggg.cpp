#include "ggg.h"
double** sozm(int a, int b) {
	double **s = new double* [a];
	for (int i = 0; i < a; i++) {
		s[i] = new double[b];
	}
	return s;
}
void zapm(int a, int b, double** s) {
	srand(time(0));
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			s[i][j] = rand() % 10;
		}
	}
}
void mzapm(int a, int b, double** s) {
	srand(time(0));
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			s[i][j] = rand() % 41+10;
		}
	}
}
void coutm(int a, int b, double** s) {
	cout << "\n";
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << s[i][j] << " ";
		}
		cout << "\n";
	}
}
void delm(int a, int b, double** s) {
	
	for (int i = 0; i < a; i++) {
		delete[] s[i];
	}
}


void obmenm(int a, int b, double** s) {
	double q;
	for (int i = 0; i < b/2; i++) {
		q = s[a][i*2];
		s[a][i * 2] = s[a][i * 2+1];
		s[a][i * 2 + 1] = q;
	}
}