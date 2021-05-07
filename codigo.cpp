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

    if(opcao == 1){
		
		cout<<"O que você deseja realizar com a Circunferência?"<<endl<<endl<<"1 - Calcular Área"<<endl<<"2 - Calcular Perímetro"<<endl<<endl<<"Digite a opção: ";
		cin >>opcaoR;
		while(opcaoR < 1 or opcaoR > 2)
		{
			cout<<endl<<"Seleciona uma opção valida: ";
			cin >> opcaoR;
		}
		
			if(opcaoR == 1 ){
				
				cout<<endl<<"Você escolheu calcular a Área da Circunferência"<<endl<<endl;
				
				cout<<"Digite o valor do raio da circunferência: ";
				cin>> raio;
			
				area = pi*(raio*raio);
			
				cout<<endl<<"A Área da circunferência é: "<<area<<endl<<endl;
		
			
			}else if(opcaoR == 2){
				
				cout<<endl<<"Você escolheu calcular o Perímetro da Circunferência"<<endl<<endl;
			
				cout<<"Digite o valor do raio da circunferência: ";
				cin>> raio;
			
				perimetro = 2*pi*raio;
			
				cout<<endl<<"O perímetro da Circunfêrencia é: "<<perimetro<<endl<<endl;
			
			}
			
			
		
	} else if(opcao == 2){
		
			cout<<"O que você deseja realizar com o Retângulo?"<<endl<<endl<<"1 - Calcular Área"<<endl<<"2 - Calcular Perímetro"<<endl<<endl<<"Digite a opção: ";
			cin >>opcaoR;
			while(opcaoR < 1 or opcaoR > 2)
			{
				cout<<endl<<"Seleciona uma opção valida: ";
				cin >> opcaoR;
			}
		
				if(opcaoR == 1 ){
				
					cout<<endl<<"Você escolheu calcular a Área do Retângulo"<<endl<<endl;
				
					cout<<"Digite o valor da Base do Retângulo: ";
					cin>> base;
					cout<<"Digite o valor da Altura do Retângulo: ";
					cin>> altura;
			
					area = base*altura;
			
					cout<<endl<<"A Área do Retângulo é: "<<area<<endl<<endl;
		
			
				}else if(opcaoR == 2){
				
					cout<<endl<<"Você escolheu calcular o Perímetro do Retângulo"<<endl<<endl;
			
					cout<<"Digite o valor da Base do Retângulo: ";
					cin>> base;
					cout<<"Digite o valor da Altura do Retângulo: ";
					cin>> altura;
			
					perimetro = 2*(base+altura);
			
					cout<<endl<<"O perímetro do Retângulo é: "<<perimetro<<endl<<endl;
			
				}
	}
	
	
	return 0;
}
