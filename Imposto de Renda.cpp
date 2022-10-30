//inclus�o de bibliotecas no programa 
#include <stdio.h> // Inclui as fun��es de entrada e sa�da (I/O)
#include <stdlib.h> // Inclui um emulador da prompt DOS para executar o progrma
#include <string.h> // Inclui as strings 
#include <math.h> // Inclus�o de operadores matem�ticos
//Decalara��o de constantes 
#define ano 2022
#define salMin 1212
//Abertura do programa Main (principal)
main()
{
//Declara��o das vari�veis 
	char nome[50], sobrenome[50], RG[12], CPF[14]; //Tipo caracter com limite de digitos (%s no c�digo)
	char sexo, trabalho, resp='s'; // Tipo caracter simples (%c no c�digo)
	float renda=0, impostoRen=0, salario; //Tipo de n�meros reais (%f no c�digo)
	int idade, nasc, nascdia, nascmes;//Tipo de n�meros inteiros (%d no c�digo)
//Inicio das opera��es do programa 	
while (resp =='s') {
	printf("\nDigite seu nome: ");//Mostrar algo na tela 
	fflush(stdin); //Limpeza do buffer do teclado
	gets(nome);//Captura da informa��o char
	printf("Digite seu sobrenome: ");
	fflush(stdin);
	gets(sobrenome);
	printf("Dia que voce nasceu: ");
	scanf("%d", &nascdia); //Captura da informa��o float e int 
	printf("Mes que voce nasceu (numero): ");
	scanf("%d", &nascmes);
	printf("Ano que voce nasceu: ");
	scanf("%d", &nasc);
	idade=ano-nasc;//Opera��o aritim�tica simples para atribuir valor a uma vari�vel 
	printf("Digite seu RG : ");
	fflush(stdin);
	gets(RG);//Declarado como char para poder colocar os pontos e tra�o de separa��o
	printf("Digite seu CPF : ");
	fflush(stdin);
	gets(CPF);
	printf("Digite se voce eh homem (h), mulher(m) ou se prefere nao dizer (n): ");
	fflush(stdin);
	sexo=getchar();//Captura de um �nico caracter usado como uma escolha dentre op��es
	printf("Voce possui um trabalho formal remunerado? (s-sim ou n-nao): ");
	fflush(stdin);
	trabalho=getchar();		
	printf("\n Sabendo que o salario min eh de RS 1212,00, quantos salarios voce recebe mensalmente: ");
	scanf("%f", &salario); //Captura de n�meros 
	renda=salario*salMin;
	printf("\n\n\n ** Conclusao do seu imposto de renda **" );//Separador visual de execu��o
	if(renda<1903.99)// Fun��o "SE"	apartir de valor num�rico
	{
		printf("\n \n Voce esta isento do Imposto");
		impostoRen=0;
			}
			else if((renda>1903.99) && (renda<2826.65)) //Fun��o "SE NAO" acopanhada de mais um "SE"
			{
				printf("\n \n Sua alicota do IRPF e de 7,5%% com parcela dedutivel de 142,8");	
				impostoRen=renda*(7.5/100);
			}	
			else if((renda>2826.65) && (renda<3751.05))// Mais fun��es criando uma fun��o "SE" em cadeado
			{
				printf("\n\n Sua alicota do IRPF e de 15%% com parcela dedutivel de 354,8");
				impostoRen=renda*15/100;
			}
			else if((renda>3751.05) && (renda<4664.68))
			{
				printf("\n\n Sua alicota do IRPF e de 22,5%% com parcela dedutivel de 636,13");
				impostoRen=renda*22.5/100;
			}
			else if((renda>4664.68) && (renda<999999.99))
			{
				printf("\n\n Sua alicota do IRPF e de 22,5%% com parcela dedutivel de 636,13");
				impostoRen=renda*22.5/100;
			}
	printf("\n\n Voce recebe %2.0f salario(s) minimo(s). ", salario); //%f invoca uma var para ser exibida
	printf("Logo, voce possui uma renda de, aproximadamente, RS %5.2f", renda);/*n�meros entre o % e o f 
indicam casas antes e depois da v�rgula */
	printf("\n Voce tera de pagar o valor do imposto de renda no valor de: RS %4.2f", impostoRen);
	printf("\n\n\n\n ** SUA FICHA DE DADOS **" );
	printf("\n \n Nome Completo: %s %s", nome, sobrenome);
	printf("\n CPF: %s", CPF);
	printf("\n RG: %s", RG);
	if (sexo=='h')// Fun��o "SE" (em cadeado) apartir de caracter de op��o
		printf("\n Sexo: Masculino");
		else if (sexo=='m')
			printf("\n Sexo: Feminino");
			else if(sexo=='n')
				printf("\n Sexo: Nao possui identidade sexual"); 
				else
					printf("\n Sexo: Nao identificado");
	printf("\n Nascimento em: %d/%d/%d ", nascdia, nascmes, nasc);
	idade=ano-nasc;
	printf("\n Idade: %d anos", idade);	
	if (trabalho=='s')// Fun��o "SE" simples
		printf("\n Situacao: Empregado");
		else if (trabalho=='n')
			printf("\n Situacao: Desempregado");
			else 
				printf("\n Situacao: Nao Identificado");	
	printf("\n Renda Bruta: %2.0f salario(s) minimo(s). ", salario); 
	printf("\n Renda Aproximada: RS %5.2f", renda);
	
	printf("\n \n \n \n Deseja fazer uma nova ficha de IRPF? (s-sim ou n-nao)");
	fflush(stdin);
	resp=getchar();	
}
	printf("\n\n\n FINAL DA PAGINA \n\n\n");//Finalizador visual de execu��o
  	system("pause");//P�ra a execu��o do programa. �til caso haja um loop no c�digo 
  	return (0);//Finaliza a execu��o do programa 
}
