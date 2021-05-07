#include <iostream>
#include <locale.h>

using namespace std;

int opcao = 0, opcaoR, opcaoC;
float pi = 3.14159265359, area, perimetro, raio, base, altura;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"Calcular perímetro e area da circunferência ou do Retângulo"<<endl<<endl;
	cout<<"1 - Circunferência"<<endl<<"2 - Retângulo"<<endl<<endl;
	cout<<"Digite a opção: ";
	cin >> opcao;
	while(opcao < 1 or opcao > 2){
		cout<<endl<<"Seleciona uma opção valida: ";
		cin >> opcao;
	}
	
	if(opcao == 1 ){
		cout<<endl<<"Você selecionou a opção "<< opcao<<": Circunferência"<<endl<<endl;
	}else if(opcao == 2){
		cout<<endl<<"Você selecionou a opção "<< opcao<<": Retângulo"<<endl<<endl;
	}
}
