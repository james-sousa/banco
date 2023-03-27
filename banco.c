#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void pagina_inicial();

void fazer_cadastro();

void area_do_usuario();
void login(char *cpf, char *senha);
float deposito();

struct cadastro
{
    char nome[20];
    
    char tipo_de_conta[20];
    char senha[20];
    char cpf[10];
    int data_de_nascimento;
};

int main()
{
    int escolha;
    pagina_inicial();

    printf("\tMenu\n\tDigite\n1-Criar conta\n2-Acessar minha conta: ");
    scanf("%d",&escolha);

    switch (escolha)
    {
    case 1:
        fazer_cadastro();
        break;
    
    case 2:
        area_do_usuario();
        break;
    default:
        break;
    }
    return 0;
}
void pagina_inicial(){
    printf("Bem-vindo ao Banco Continental!\n");
    printf("Aqui é o lugar mais seguro para o seu dinheiro!\n");
    printf("O que você desejar fazer no momento\n");
}

void fazer_cadastro(){
    struct cadastro conta[5];
    
    printf("Digite o seu nome completo: ");
    fflush(stdin);
    gets();
    gets(conta->nome);
    fflush(stdin);
    printf("Digite o seu CPF apenas numeros: ");
    scanf("%s",&conta->cpf);
    printf("Digite a sua data de nascimeto apenas com numeros: ");
    scanf("%d",&conta->data_de_nascimento);
    fflush(stdin);
    gets();
    printf("Digite o tipo de conta que você deseja abrir: ");
    gets(conta->tipo_de_conta);
    
    printf("Crie uma senha apenas com numero: ");
    scanf("%s",&conta->senha);
    /*tipo de conta*/
    printf("Conta criada com sucesso!\n");
    login(&conta->cpf,&conta->senha);
    area_do_usuario();
    
}   

void area_do_usuario(){
    float saldo = 0;
    /*login*/
    if (saldo == 0)
    {
        printf("O seu saldo no momento é R$ 0.0\n");
        printf("Você precisa fazer um deposito!\n");
        saldo = saldo + deposito();
        printf("Seu saldo agora é de %.2f",saldo);
    }
    else
    {
        printf("Seu saldo é de %.2f",saldo);
    }
    
    

}

void login(char *cpf, char *senha){
    char num_cpf[10],password[20];
    
    printf("Digite o seu cpf: ");
    scanf("%s",&num_cpf);
    printf("\nDigite a sua senha: ");
    scanf("%s",&password);

    if (num_cpf == *cpf && password == *senha)
    {
        area_do_usuario();
    }
    else
    {
        printf("Usuário ou Senha incorreto!");
        printf("Digite o seu cpf: ");
        scanf("%s",&num_cpf);
        printf("\nDigite a sua senha: ");
        scanf("%s",&password);
        
    }
    
}
float deposito(){
    float saldo_conta;
    printf("Digite o valor que você deseja depositar: ");
    scanf("%f",&saldo_conta);
    return saldo_conta;
}