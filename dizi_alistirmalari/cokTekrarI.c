//Melike Kurt 20120205009 Bu program verilen integer dizinin en çok tekrar eden elemanını bulur
#include <stdio.h>
int cokTekrar(int x[],int uzunluk){//fonksiyonumuzu yazıyoruz
    int max;//en cok tekrar edeni tutmak için bir degisken
    int i,j;//dizi elemanlarını karsılastıryoruz
    for(i=0;i<uzunluk;i++){  
        for(j=i+1;j<uzunluk;j++){
            if(x[i]==x[j])
            max=x[i];
            
            
            
        }
    }
    return max;// en cok tekrar edeni donduruyoruz
}
int main() {
    
    
    int a[4]={1,1,1,2};//dizimizi tanımlıyoruz
    
    printf("%d",cokTekrar(a,4));//fonksiyonu cagırıyoruz ve bastiriyoruz
    return 0;
}
