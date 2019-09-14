#include <stdio.h>
#include <stdlib.h>
int main()
{
    int aux = 0 ;
    do{
        printf("Menu de opcoes\n\n");
        printf(" Digite-1 (Para numero par ou impar)\n\n Digite-2 (Para exponencial)\n\n Digite-3 (Raiz)\n\n Digite-4 (Bissexto)\n\n Digite-5 (Media ponderada)\n\n Digite-6 (Validador de nota)\n\n Digite-7 (Fatorial)\n\n Digite-8 (Primo)\n\n Digite-9 (fibonacii)\n\n Digite-10 (Hexadecimal)\n");
        printf("Agurdado...\n");
        scanf("%d",&aux);
    if (aux > 10 || aux < 0){
        printf("Numero digitado inexitente no menu\n");
        aux = 10;
    }
    if(aux == 0){
        break;
    }
     switch(aux){
        case 1: par(); break;
        case 2: exponencial();break;
        case 3: raiz();break;
        case 4: bissexto();break;
        case 5: media_ponderada();break;
        case 6: notavalida();break;
        case 7: fatorial(); break;
        case 8: primo();break;
        case 9: fibonacii();break;
        case 10: hexadecimal();break;
    }
    }while(aux > 0 );

    printf("Secessao terminda! ");
    system("pause");
    return 0;
}
void primo(){
    int aux = 0;
    int i = 0;
    int divisor = 0;
    do{
        printf("Digite o numero para ser testado ser e primo ou nao\n");
        scanf("%d",&aux);
    }while(aux <= 0);

    for(i=2; i < aux/2; i++){
        if(aux % i == 0){
            divisor++;
            break;
            }
        }
    if(divisor == 0){
        printf("%d E UM NUMERO PRIMO!\n", aux);
    }
    else{
        printf("%d NAO E UM NUMERO PRIMO!\n", aux);
    }
    system("pause");
}

void exponencial(){
    float a = 0;
    int b, i = 0;
    float expo = 0;
    printf("Digite o ponto flutuante A: ");
    scanf("%f",&a);
    expo = a;
    printf("Digite o inteiro B:");
    scanf("%d",&b);
        for(i =0; i<b-1; i++){
        expo = expo *a;
        }
    printf("\n%E\n\n", expo);
    system("pause");
}
void par(){
    int num = 0;
    printf("Digite o numero a ser testado se e par ou impar:");
    scanf("%d",&num);
    if(num %2 == 0){
        printf("%d e um numerp par\n", num);
    }
    else{
        printf("%d e um numero impar\n",num);
    }
    system("pause");
}
void raiz(){
    float a, raiz;
    int b,i,j;
    printf("Digite um numero para ser a raiz: ");
    scanf("%f",&a);
    printf("Digite o numero para ser a base: ");
    scanf("%d",&b);
    raiz = 1;
    for(i=1; i<=a; i++){
        for(j=1; j<=b; j++){
            raiz = raiz*i;
        }
        if(raiz == a){
            printf("A raiz e: %e\n", i);
            break;
        }
        else{
            raiz = 1;
        }
    }
    if(raiz != a){
        printf("Numero nao possui raiz Exata\n");
    }
    system("pause");
}
void bissexto(){
    unsigned int ano = 0;
    printf("Entre com o ano para verificar se e bissexto: ");
    scanf("%d", &ano);
    if(ano % 4 == 0){
        printf("Ano bissexto !\n");
    }
    else{
        printf("O ano nao e bissexto !");
    }
    system("pause");
}
void fatorial(){
    int fat, x ,i = 0;
    do{
        printf("Entre com um numero para descobrir o seu fatorial: \n");
        scanf("%d", &fat);
    if(fat <= 0){
        printf("Numero invalido, para o calculo da fatorial e necessario um numero > que 0\n\n");
    }
    }while(fat <= 0);
    x = fat;
    for(i = 1; i<x; i++){
        fat = fat*(x-i);
    }
    printf("\nO fatorial de %d :  %d\n\n",x ,fat);
    system("pause");
}
void hexadecimal(){
    int num =0;
    char nome[50];
    printf("Digite seu nome: ");
    getchar();
    gets(nome);
    printf("Digite sua matricula: ");
    scanf("%d", &num);
    printf("Nome: %s\nMatricula em Hexadecimal: %2X\n",nome,num);
    system("pause");
}
int notavalida(){
    float n1, n2;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
     if(n1 <= 0.0 || n1 >= 10.0){
        printf("Nota invalida\n");
        system("pause");
        return 0;
     }
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    if(n2 <= 0.0 || n2 >= 10.0){
        printf("Nota invalida\n");
        system("pause");
        return 0;
    }
    printf("Nota valida !");
    system("pause");
    return 0;
}
void fibonacii(){
    int a=0, b=1, aux, x;
    printf("Digite o quantidade de valores da tabela desejados: ");
    scanf("%d", &x);
	for(int i=1; i<x; i++){
		if(i==1)
            printf("1\t");
		aux = a+b;
		a=b;
		b=aux;
        printf("%i\t",aux);
        }
        system("pause");
        printf("\n");
   }

void media_ponderada(){
    float n1, n2, n3;
    printf("Entre com a nota da prova 1: ");
    scanf("%f",&n1);
    printf("Entre com a nota da prova 2: ");
    scanf("%f",&n2);
    printf("Entre com a nota da prova 3: ");
    scanf("%f",&n3);
    float media = (((1*n1)+(1*n2)+(2*n3))/4)*10;
    printf("%.2f\n",media);
    if(media >= 60.0){
        printf("Aprovado!");
    }
    else{
        printf("Reprovado!");
    }
    system("pause");
}
