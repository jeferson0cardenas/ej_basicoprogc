#include<iostream>
using namespace std;

int main(){
	double notax, notay, notaz, notafinal;
	cout<<"ingrese nota de practicas: "; cin>>notax;
	cout<<"ingrese nota teorica: "; cin>>notay;
	cout<<"ingrese nota de participacion: "; cin>>notaz;
	
	notax= notax * 0.30;
	notay= notay * 0.60;
	notaz= notaz * 0.10;
	notafinal= (notax+notay+notaz);
	cout<<"su nota final es: "<<notafinal;
	
	
	return 0;
}
