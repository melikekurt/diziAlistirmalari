#include <stdio.h>
//Melike Kurt 20120205009 Bu program verilen char dizisini tersten yazd�r�r
char tersten(char dizi[],int sayi)//fonksiyonu tan�ml�yoruz
{ 	if(sayi>=0){//t�m indeksleri sondan basa yazdirir 
	printf("%c",dizi[sayi]);
   return tersten(dizi,sayi-1);//fonksiyonu tekrar cagiriyoruz
}
return 0;//iften cikinca sifir donduruyor
}

int main() {
    
    char dizi[11]="Tersten yaz";//dizimizi veriyoruz
    
	printf("%c",tersten(dizi,10));//fonksiyonu cagirip yazdiriyoruz
	return 0;
}
