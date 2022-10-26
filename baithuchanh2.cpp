#include <stdio.h>
void nhapmang(int a[10], int n);
void xuatmang(int a[10], int n);
void giatriln(int a[10], int n);
void tinhtich(int a[10], int n);
int main()
{
int a[10], n;
printf("nhap so ptu cua mang n=");
scanf("%d",&n);
nhapmang(a,n);
xuatmang(a,n);
giatriln(a,n);
tinhtich(a,n);
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

Test chinh sua
}

