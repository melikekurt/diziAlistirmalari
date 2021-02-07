//Melike Kurt 20120205009 Bu program verilen integer dizinin en çok tekrar eden elemanýný bulur
#include <stdio.h>
int cokTekrar(int x[],int uzunluk){//fonksiyonumuzu yazýyoruz
    int max;//en cok tekrar edeni tutmak için bir degisken
    int i,j;//dizi elemanlarýný karsýlastýryoruz
    for(i=0;i<uzunluk;i++){  
        for(j=i+1;j<uzunluk;j++){
            if(x[i]==x[j])
            max=x[i];
            
            
            
        }
    }
    return max;// en cok tekrar edeni donduruyoruz
}
int main() {
    
    
    int a[4]={1,1,1,2};//dizimizi tanýmlýyoruz
    
    printf("%d",cokTekrar(a,4));//fonksiyonu cagýrýyoruz ve bastiriyoruz
    return 0;
}
