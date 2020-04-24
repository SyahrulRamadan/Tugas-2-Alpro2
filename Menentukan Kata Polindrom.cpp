#include<stdio.h>      //Header

#include<conio.h>

int ukur(char panjangkata[100]);           //Fuction Prototype

char kembar(char sama[100], int jumlah);

int main(void)//Main function

{

int lenkalimat=0,balik=0;  //Declaration Variabel lenkalimat=0,balik=0

char kalimat[100];        //Declaration variabel kalimat(array)

do{    //pengulangan jika ingin menggunakan kembali

void clrscr(void);          //membersihkan layar

fflush(stdin);

//inputan user berupa kata / kalimat

printf("Masukkan Kalimat (Besar kecil huruf berpengaruh) : ");

gets(kalimat); //memasukkan input ke dalam variabel kalimat

lenkalimat=ukur(kalimat); //menjalankan fungsi ukur untuk mengetahui

//panjang kalimat/kata input

//menampilkan jumlah karakter

printf("\nJumlah Karakter ada %d\n\n",lenkalimat);

printf("Bandingkan karakter di bawah ini :\n\n");

kembar(kalimat,lenkalimat); //menjalankan fungsikembar untuk mengetahui

//palindrome atau bukan

//mengambil input untuk menggunakan lagi

printf("\n\nIngin menggunakan lagi(yes=1, no=0) : ");

scanf("%d",&balik);

}while(balik==1);//jika nilai balik=1 maka kembali ke atas

return 0;

}

int ukur(char panjangkata[100])//Fungsi pencari panjang kalimat/kata input

{

int a=0;

//mencari panjang kata input

while(panjangkata[a] ){

a++;}

return(a);

}

char kembar(char sama[100],int jumlah)//Fungsi pembanding character

{

char huruf[100];  //deklarasi variabel

int plek=0;

int a=0;

for( a=0; a<jumlah; a++){   //mengisi variabel huruf dengan variabel

printf("%c", sama[a]);      //sama namun variabel huruf dimulai dari

huruf[jumlah-a-1]=sama[a];} //belakang

printf("\n\n");

for(a=0; a<jumlah; a++)  //Menampilkan isi variabel huruf

printf("%c",huruf[a]);

for(a=0;a<jumlah;a++){     //Membandingkan sama dengan huruf

if(huruf[a]==sama[a])

plek+=1;

else
plek+=0;

}

if(plek==jumlah) //jika jumlah yang sama = panjang kata  maka:

printf("\n\nSama khan  jadi karakter masukan Anda palindrome");

else

printf("\n\nYach ga sama jadi karakter masukan Anda bukan palindrome");

return (a);

}
