//Melike Kurt 20120205009 Bu program verilen dizinin ikinci en büyük sayýsýný , aritmetik ortalamasýný , standart sapmasýný bulur
#include<stdio.h>
#include<math.h>
int main(){
	int numbers[10]={5,4,8,1,6,2,3,7,9,0};//dizimizi yazdýk
	int imax=0;//önce birinci en büyük sayýmýzý buluyoruz
	int j;
	for( j=1;j<10;j++){
		if(numbers[imax]<numbers[j])
		imax=j;
	}
	if(imax!=0){//birinci en büyük sayýmýzý dizinin en baþýna yerleþtiriyoruz
		int temp=numbers[imax];
		numbers[imax]=numbers[0];
		numbers[0]=temp;
	}	
	int imax2=1;//ikinci en büyük sayýmýzý buluyoruz 
	int c;
	for( c=2;c<10;c++){
		if(numbers[imax2]<numbers[c])
		imax2=c;
	}
	if(imax2!=1){//ikinci en büyük sayýmýzý yerleþtiriyoruz
		int temp=numbers[imax2];
		numbers[imax2]=numbers[1];
		numbers[1]=temp;
	}
	printf("Dizinin ikinci maxi: %d\n",numbers[1]);//basýyourz
	
	
	////////////////////////////ARÝTMETÝK ORTALAMAYI BUL
	float sum=0;//dizideki elemanlarýn toplamýný tutmak icin degisken atýyoruz
	int a;
	for( a=0;a<10;a++)
	{
		sum+=numbers[a];//sum=sum+numbers[a]
	}
	float ort= sum/10;//aritmetik ortalama olmasý icin dizi elemani sayisina boluyoruz
	printf("Dizinin artimetik ortalamasi: %f\n",ort);//basýyoruz
	//////////////////////////////STANDART SAPMAYI HESAPLA
	//ss=standart sapma=sqrt((x1-ort)^2+...(xn-ort)^2)/n-1)
	int b;
	float tut=0;//standart sapma isleminin ilk kýsmý icin toplam degerý tutacak býr degýsken atýyoruz
	for(b=0;b<10;b++){
		
		tut+=(numbers[b]-ort)*(numbers[b]-ort);//ilk kýsmý tutuyourz
	}
	float ss= sqrt(tut/9);//geri kalan islemi yapýyourz ve ss ye atýyoruz
	printf("Dizinin standart sapmasi: %f",ss);//basýyoruz
	return 0;
}
