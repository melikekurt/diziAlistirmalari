//Melike Kurt 20120205009 Bu program verilen integer dizinin en �ok tekrar eden eleman�n� bulur
#include <stdio.h>
int cokTekrar(int x[],int uzunluk){//fonksiyonumuzu yaz�yoruz
    int max;//en cok tekrar edeni tutmak i�in bir degisken
    int i,j;//dizi elemanlar�n� kars�last�ryoruz
    for(i=0;i<uzunluk;i++){  
        for(j=i+1;j<uzunluk;j++){
            if(x[i]==x[j])
            max=x[i];
            
            
            
        }
    }
    return max;// en cok tekrar edeni donduruyoruz
}
int main() {
    
    
    int a[4]={1,1,1,2};//dizimizi tan�ml�yoruz
    
    printf("%d",cokTekrar(a,4));//fonksiyonu cag�r�yoruz ve bastiriyoruz
    return 0;
}
