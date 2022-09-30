#include<iostream>
using namespace std;

int main()
{

int MLAQ_i=0,MLAQ_l;
	float MLAQ_x,MLAQ_s=0;
	cout<<"ingrese el limite MLAQ_l="; cin>>MLAQ_l;
	do{

	cout<<"ingrese el numero MLAQ_x="; cin>>MLAQ_x;
	MLAQ_i=MLAQ_i+1;
	MLAQ_s=MLAQ_s+MLAQ_x;



	}while(MLAQ_i<MLAQ_l);
	cout<<"Se ingresaron "<<MLAQ_l<<" numeros "<< "que sumaron "<<MLAQ_s<<endl;
	return 0;}
