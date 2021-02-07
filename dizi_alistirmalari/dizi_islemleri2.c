//Melike Kurt 20120205009  Bu program verilen dizinin elemanlarýný toplar
#include<stdio.h>
int diziTopla(int a[],int k);//fonksiyonumuz dizi parametresini ve int parametre alýr
int main(){
	int a[3]={1,6,3};//diziyi tanýmlar
	int k=3;//dizinin indekslerini kontrol için gerekli
	printf("%d",diziTopla(a,k));//bastýr


return 0;
}
int diziTopla(int a[],int k){
	
	if(k==0)// k sýfýrsa return 0 dondur
	return 0;
	else
	return a[k-1]+diziTopla(a,k-1); // recursive fonk yazýyoruz 
	
} 
