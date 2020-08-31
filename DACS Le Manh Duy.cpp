#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <Windows.h>
using namespace std;
#define N 102

int p[N], c[N][N], kenh[N];
int n, m;

//Doc file messages.inp.txt
void DocFile(int c[N][N]) {
	FILE *filein;
	filein = fopen("messages.inp.txt", "r");
	if (filein == NULL) {
		printf("----Khong The Mo File----");
		exit(1);
	}
	fscanf(filein, "%i", &n);
	fscanf(filein, "%i", &m);
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			fscanf(filein, "%i", &c[i][j]);
		}
	}
	fclose(filein);
}

//Xuat file messages.out.txt
void XuatFile(int p[N], int kenh[N]) {
	FILE *fileout;
	fileout = fopen("messages.out.txt", "w");
	fprintf(fileout, "%i\n", p[n]);
	for (int j = 1; j <= m; ++j) {
		fprintf(fileout, "%i \n", kenh[j]);
	}
	fclose(fileout);
}

//So sanh 2 gia tri
int min(int a, int b) {
	return (a <= b) ? a : b;
}

//Dat p[i] la chi phi thap nhat chuyen tren kenh dau tien
void GiaTriNhoNhat(int p[N],int c[N][N]) {
	for (int i = 1; i <= n; ++i) {
		p[i] = c[i][1];
	}
}

int main() {
	DocFile(c);
	GiaTriNhoNhat(p,c);
	//Chi phi thap nhat cua moi goi tin
	//Lap tat ca cac kenh tu 2
	for (int j = 2; j <= m; ++j) {
		//Lap tat ca cac goi tin
		for (int i = 1; i <= n; ++i) {
			//Lap tat ca cac truong hop tong bang i va tim chi phi thap nhat
			for (int k = i; k >= 0; --k) {
				p[i] = min(p[i], c[k][j] + p[i - k]);
			}
		}
	}
	//Truyen moi goi tin tren moi kenh
	int k = n;
	//Lap tat ca cac kenh va so goi tin
	for (int j = m; j > 0 && k > 0; --j) {
		//Lap goi tin tu k
		for (int i = 1; i <=k; ++i) {
			//Neu chi phí chuyen i gói tin trên kênh j cong voi p [k-i] bang chi phí chuyen k gói tin
			if ( c[i][j] + p[k - i] == p[k]) {
				//Truyen i goi tin tren tung kenh j
				kenh[j] = i;
				//Giam so luong goi tin sau khi truyen i goi tin
				k -= i;
				break;
			}
		}
	}
	XuatFile(p, kenh);
	printf("Do  An  Co  So\n");
	printf("\nDe Tai 801\n");
	printf("\nGVHD : Nguyen Van Nguyen\n");
	printf("\nSVTH : Le Manh Duy\n");
	printf("\nLop  : 19TCLC_DT6\n");
	printf("\nXin Hay Kiem Tra File messages.out.txt\n");
	return 0;
}
/*
5 4
31 10 1 1
1 31 12 13
4 10 31 1
6 1  20 19
10 5 10 10
*/
