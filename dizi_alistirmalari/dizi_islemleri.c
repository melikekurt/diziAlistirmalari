//Melike Kurt 20120205009 Bu program verilen dizinin ikinci en b�y�k say�s�n� , aritmetik ortalamas�n� , standart sapmas�n� bulur
#include<stdio.h>
#include<math.h>
int main(){
	int numbers[10]={5,4,8,1,6,2,3,7,9,0};//dizimizi yazd�k
	int imax=0;//�nce birinci en b�y�k say�m�z� buluyoruz
	int j;
	for( j=1;j<10;j++){
		if(numbers[imax]<numbers[j])
		imax=j;
	}
	if(imax!=0){//birinci en b�y�k say�m�z� dizinin en ba��na yerle�tiriyoruz
		int temp=numbers[imax];
		numbers[imax]=numbers[0];
		numbers[0]=temp;
	}	
	int imax2=1;//ikinci en b�y�k say�m�z� buluyoruz 
	int c;
	for( c=2;c<10;c++){
		if(numbers[imax2]<numbers[c])
		imax2=c;
	}
	if(imax2!=1){//ikinci en b�y�k say�m�z� yerle�tiriyoruz
		int temp=numbers[imax2];
		numbers[imax2]=numbers[1];
		numbers[1]=temp;
	}
	printf("Dizinin ikinci maxi: %d\n",numbers[1]);//bas�yourz
	
	
	////////////////////////////AR�TMET�K ORTALAMAYI BUL
	float sum=0;//dizideki elemanlar�n toplam�n� tutmak icin degisken at�yoruz
	int a;
	for( a=0;a<10;a++)
	{
		sum+=numbers[a];//sum=sum+numbers[a]
	}
	float ort= sum/10;//aritmetik ortalama olmas� icin dizi elemani sayisina boluyoruz
	printf("Dizinin artimetik ortalamasi: %f\n",ort);//bas�yoruz
	//////////////////////////////STANDART SAPMAYI HESAPLA
	//ss=standart sapma=sqrt((x1-ort)^2+...(xn-ort)^2)/n-1)
	int b;
	float tut=0;//standart sapma isleminin ilk k�sm� icin toplam deger� tutacak b�r deg�sken at�yoruz
	for(b=0;b<10;b++){
		
		tut+=(numbers[b]-ort)*(numbers[b]-ort);//ilk k�sm� tutuyourz
	}
	float ss= sqrt(tut/9);//geri kalan islemi yap�yourz ve ss ye at�yoruz
	printf("Dizinin standart sapmasi: %f",ss);//bas�yoruz
	return 0;
}
