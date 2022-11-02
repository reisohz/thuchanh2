#include <stdio.h>
void nhapmang(int a[10], int n);
void xuatmang(int a[10], int n);
void giatriln(int a[10], int n);
void tinhtich(int a[10], int n);
void insonguyento(int a[10], int n);
void TongNT(int a[10],int n);
int main()
{
int a[10], n;
printf("nhap so ptu cua mang n=");
scanf("%d",&n);
nhapmang(a,n);
xuatmang(a,n);
giatriln(a,n);
tinhtich(a,n);
insonguyento(a,n);
TongNT(a,n);
return 0; 
}

void nhapmang(int a[10], int n)
{
	for(int i=0;i<n;i++)

   {

     printf("nhap so ptu cua mang la a[%d]= ",i);
     scanf("%d",&a[i]);
     
   }
}

void xuatmang(int a[10], int n)
{
  	printf("\n cac ptu cua mang n=");
  	  for(int j=0;j<n;j++)
  	  printf("%d   ;    ",a[j]);
}
void giatriln(int a[10], int n)
{int max=0 ,i;
for (int i=0;i<n;i++)
if (a[i]>max)
max = a[i];
printf("\n So phan tu lon nhat la la %d", max);

}
void tinhtich(int a[10], int n)
{ int tich=1;
   for (int i=0;i<n;i++)
   tich = tich*a[i];
   printf("\n Tich cac phan tu la %d", tich);

}

int kiemtra_NT(int n){
    if(n<2)
        return 0;
    else{
        for(int i=2;i<=n/2;i++)
            if(n%i==0)
                return 0;
        return 1;
    }
}

void insonguyento(int a[10], int n){
    printf("\nCac so nguyen to co trong mang la: \n");
    for(int i=0;i<n;i++)
        if(kiemtra_NT(a[i]))
            printf("%5d",a[i]);
}
void TongNT(int a[10],int n){
int i;
 int snt=0;
  for(i=0;i<n;i++)
{
 if(kiemtra_NT(a[i]))
 {
snt+=a[i];
 }
}
printf("\nTong cac so nguyen to trong mang la: %d \n",snt);
}
