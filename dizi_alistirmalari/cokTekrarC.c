//Melike Kurt 20120205009  Bu program verilen char dizisinin en cok tekrar eden elemanini bastirir
#include<stdio.h>
int cokTekrar(char a[],int uzunluk){//fonksiyonumuzu yaz�yoruz
int max;//en cok tekrar edeni tutmak icin bir degisken
    int i,j;//dizi elemanlar�n� kars�last�ryoruz
    for(i=0;i<uzunluk;i++){  
        for(j=i+1;j<uzunluk;j++){
            if(a[i]==a[j])
            max=a[i];
            
            
            
        }
    }
    return max;// en cok tekrar edeni donduruyoruz
}


int main(){
	char a[13]="cyiseviyorum";//dizimizi yaz�yoruz
	printf("%c",cokTekrar(a,13));//fonksiyonumuzu cagirip bastiriyoruz
	
	
	
	
	
	return 0;
}
