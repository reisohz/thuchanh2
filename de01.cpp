#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int a[100][100];
int m,n;
//Nhap mang
void Nhapmang(int x[100][100], int &m, int &n)
{
	do{
	
	printf("Nhap m va n: ");
	scanf("%d%d",&m,&n);
}while(m<=0||n<=0);

for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		printf("x[%d][%d]=",i,j);
		scanf("%d", &x[i][j]);
	}
}
}


//Xuatmang
void Xuatmang(int x[100][100], int m, int n){
	printf("\nMang vua nhap la: \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

//Sapxepmang
void Sapxep(int x[100][100], int m, int n){
 int i,j,k;
 for(i=0;i<m;i++){
 	for(j=0;j<n;j++){
 		for(k=j+1;k<n;k++){
 			if(a[j][i] > a[k][j]){
 				int temp = a[j][i];
 				a[j][i] = a[k][i];
 				a[k][i] = temp;
 			}
 		}
 	}
 }
 Xuatmang(x,m,n);
}
//
//Tinh tong phan tu nguyen to chia het cho 3
void Sum(int a[100][100], int m, int n){
    int tong=0;
    //duyet hang cua ma tran
    for(int i =0; i< m; i++){
        //duyet cot cua ma tran
        for(int j =0 ; j<n; j++){
            tong += a[i][j];
        }
    }
    printf("\nTong cac phan tu trong ma tran la: %d", tong);
}

int main(){
int key;
while(true)
{
	system("cls");
	printf("***************************************************\n");
	printf("**                 MANG 2 CHIEU                  **\n");
    printf("**            1. Nhap xuat mang 2 chieu          **\n");
    printf("**            2. Sap xep mang tang dan           **\n");
    printf("**       3. Tinh tong phan tu nt chia het cho 3  **\n");
    printf("**            0. Thoat                           **\n");
    printf("***************************************************\n");
    
	
	
printf("\n \t\t AN PHIM CHON: ");
scanf("%d",&key);

switch(key)
{
	case 1:
		system("cls");
		Nhapmang(a,m,n);
		Xuatmang(a,m,n);
		getch();
		break;
		
	case 2:	
		system("cls");
		Sapxep(a,m,n);
		getch();
		break;
		
	case 3:
		system("cls");
		Sum(a,m,n);
		getch();
		break;
		
	case 0:
        exit(1);
        
    default:
    	printf("\nkhong co chuc nang nay!");
    	printf("\nBam phim bat ky de tiep tuc!");
    	getch();
    	break;
}
}

}


