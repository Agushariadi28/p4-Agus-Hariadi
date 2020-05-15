#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>

using namespace std;

int main()
{
	int i, nilai, benar=0, salah=0;
	string user, pass;
	char pilihanlogin, pilihan, jawab, pilih;
	ulang :
	cout<<"                                            SELAMAT DATANG\n";
	cout<<"                                                  DI\n";
	cout<<"                                      PROGRAM KUIS MASALAH COVID-19 \n";
	cout<<"                             =============================================\n";
	cout<<"                                            SilahkanLogin!\n";
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"\t\t\t\t Masukkan Ussername : ";cin>>user;cout<<"\n";
	cout<<"\t\t\t\t Masukkan Password  : ";cin>>pass;cout<<"\t\t\n";
			if (user == "agus" && pass == "hariadi")
			{
				cout<<"\t\t\t Login Berhasil\t\t\n";
			}
			else
			{
				cout<<"\t\t\t Ussername dan password anda salah silahkancobakembali \t\t\n";
				cout<<"\t\t\t Cobalagi ?[y/t]  : ";cin>>pilihanlogin;cout<<"\t\t\n";
					if (pilihanlogin=='y' || pilihanlogin=='Y')
					{system("cls");
	                 goto ulang;}
					else{goto selesai;}
					if (pilihanlogin=='t' || pilihanlogin=='T')
					{goto selesai;}		
			}
			
			
	cout<<"-------------------------------------------------------------------------\n";
	system("cls");
	{
ulangjwb :
	cout<<"PILIH SALAH SATU JAWABAN YANG MENURUT ANDA BENAR, ANTARA A, B, C, ATAU D!\n";
	cout<<"=========================================================================\n";
	cout<<"1. Negara yang pertama kali terkena paparan virus covid-19?\n";
	string pilgan1[50]={"a. Indonesia ","b. Jepang","c. China","d. Amerika"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'c' || jawab == 'C')
        {benar++;}
else{
        salah++;}
    cout<<"==========================================================================\n";        
cout<<"2. siapakah garda terdepan yang berperan penting dalam menangani covid-19 ?\n";
    string pilgan2[50]={"a. Polisi","b. TNI","c. Guru","d. Dokter"};
	for (i=0;i<=3;i++)
	{cout<<pilgan2[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
    cout<<"==========================================================================\n";        
	cout<<"3. Kebijakan apakah yang dikeluarkan pemerintah untuk menangani covid-19,kecuali?\n";
	string pilgan3[50]={"a. Bekerja dari rumah","b. Bekerja diluar","c. Karantina","d. Lockdown"};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";				
	cout<<"4. Hal apakah yang harus dilakukan seseorang ketika terkena covid-19,kecuali?\n";
	string pilgan4[50]={"a. isolasi di rumah","b. konsultasi ke dokter","c. berkeliaran diluar","d. Jaga jarak"};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'c' || jawab == 'C')
        {benar++;}
else{
        salah++;}
    cout<<"==========================================================================\n";       
cout<<"5. Kenapa virus covid-19 menyebar begitu cepat?\n";
    string pilgan5[50]={"a. kurangnya kesadaran masyarakat atas himbauan yang di berikan","b. pola hidup bersih","c. seringberolahraga","d. sosial distancing"};
	for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"6. Apakah yang harus dilakukan supaya terhindar dari paparan virus covid-19,kecuali?\n";
	string pilgan6[50]={"a. berkumpul dengan orang banyak","b. jauhi keramaian","c. Cuci tangan dengan sabun","d. Olahraga teratur"};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}     
	cout<<"==========================================================================\n";
	cout<<"7. Siapakah juru bicara penanganan covid-19 di Indonesia?\n";
	string pilgan7[50]={"a. GanjarPranowo","b. AniesBaswedan","c. AchmadYurianto","d. RidwanKamil"};
	for (i=0;i<=3;i++)
	{cout<<pilgan7[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'c' || jawab == 'C')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"8. Negara manakah yang paling banyak terkena virus covid-19?\n";
	string pilgan8[50]={"a. China","b. Italia","c. Indonesia","d. Amerika"};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"9. khusunya di Indonesia daerah manakah yang paling banyak terinfeksi covid-19?\n";
	string pilgan9[50]={"a. Jakarta","b. Bandung","c. Bali","d. Bogor"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"10. Organisasi kesehatan dunia yang berperan dalam menangani covid-19?\n";
	string pilgan10[50]={"a. IMF","b. ILO. ","c. WHO","d. UNICEF"};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'c' || jawab == 'C')
        {benar++;}
else{
        salah++;} 
			
	cout<<"Apakah anda yakin dengan jawaban anda??[y/t]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='t' || pilihan=='T')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}												

	}		nilai :
					cout<<"=====================================================\n";
					cout<<"Nilai yang diproleh :"<<endl;
		nilai = benar*10;
		cout<<"    JumlahBenar : "<<benar<<" soal "<<endl;
		cout<<"    JumlahSalah : "<<salah<<" soal "<<endl;
		cout<<"    Nilai Anda   : "<<nilai<<"\n"<<endl;
			selesai :
			cout<<"==========================="<<endl;
			cout<<"Program Selesai, Terimakasi\n";
			cout<<"==========================="<<endl;
	
}
