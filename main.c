#include <stdio.h>
#include <stdlib.h>

//Matematik Menüsü


int main() {
	int sayi1,sayi2,islem,tercih,x;
	
	
	printf("  MATEMATIK MENUSU\n");
	printf("********************\n\n");
	printf("1-)Karede alan ve cevre hesabi\n");
	printf("2-)Girilen sayinin kupu\n");
	printf("3-)Dairede alan ve cevre hesabi\n");
	printf("4-)5x^2+7x+9=0 isleminin x'e gore sonucu\n");
	printf("5-)Dikdortgende alan ve cevre hesabi\n\n\n");
	
	printf("Secmis oldugunuz menu: ");
	scanf("%d",&tercih);
	printf("\n");
	switch (tercih)
	{
		case 1: printf("Karenin kenar uzunlugunu giriniz: ");
                scanf("%d",&sayi1);		
		        printf("Karede alan: %d\n",(sayi1*sayi1));
		        printf("Karede cevre: %d\n",(sayi1*4));
		        break;
		        
		case 2: printf("Kupunu almak istediginiz sayiyi giriniz: ");
		        scanf("%d",&sayi1);
		        printf("Sayinin Kupu: %d\n",(sayi1*sayi1*sayi1));
		        break;
		        
		case 3: printf("r degeri giriniz: ");
		        scanf("%d",&sayi1);
		        printf("Dairede Alan: %d\n",(4*3.14*sayi1*sayi1));
		        printf("Dairede Cevre: %d\n",(2*3.14*sayi1));
		        break;
		        
		case 4: printf("5x^2+7x+9 islemi icin x sayisi giriniz: ");
		        scanf("%d",&x);
		        printf("Islem Sonucu: %d\n",(5*x*x+7*x+9));
		        break;
		        
		case 5: printf("Dikdortgenin bir kenarini giriniz: ");
		        scanf("%d",&sayi1);
		        printf("Dikdortgenin diger kenarini da giriniz: ");
		        scanf("%d",&sayi2);
		        printf("Dikdortgende Alan: %d\n",(sayi1*sayi2));
		        printf("Dikdortgende Cevre: %d\n",(sayi1+sayi2)*2);
		        break;  
				
		default: printf("Boyle Bir Menu Bulunmamaktadir :( ");break;		     
		
		
	}
	
	
	return 0;
}
