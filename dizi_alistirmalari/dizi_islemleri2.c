//Melike Kurt 20120205009  Bu program verilen dizinin elemanlar�n� toplar
#include<stdio.h>
int diziTopla(int a[],int k);//fonksiyonumuz dizi parametresini ve int parametre al�r
int main(){
	int a[3]={1,6,3};//diziyi tan�mlar
	int k=3;//dizinin indekslerini kontrol i�in gerekli
	printf("%d",diziTopla(a,k));//bast�r


return 0;
}
int diziTopla(int a[],int k){
	
	if(k==0)// k s�f�rsa return 0 dondur
	return 0;
	else
	return a[k-1]+diziTopla(a,k-1); // recursive fonk yaz�yoruz 
	
} 
