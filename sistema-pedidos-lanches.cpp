#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <limits>

using namespace std;

int main(){
    // declaração de variaveis

    //  nome cliente
    string nomeCliente;

    // armazena a escolha do usuario na navegação dos menus e a quantidade do produto
    int opcaoMenu, opcaoSubmenu, quantidadeProduto;

    // float total da quantidade * valor do produto
    float valorQuantidadeLanche, valorQuantidadeRefri, valorQuantidadeSobremesa;

    // float valor total dos itens
    float valorTotalLanche = 0, valorTotalRefri = 0, valorTotalSobremesa = 0;

    // armazena total do valor e o valor com desconto caso necessario
    float total = 0, totalDesconto, valorDesconto;

    // armazena se o cliente quer sair do programa ou nao
    char opcaoSaida;

    // define as numeros decimais limitado a duas casas após a virgula
    cout << fixed << setprecision(2);

    cout << "Bem-vindo!" << endl;
    cout << "Por favor, informe o seu nome: ";
    getline(cin, nomeCliente);

    // Bloco que verifica se o usuario vai realizar o pedido ou nao, caso seja verdadeiro ('S') o loop continua, caso seja falsa ('N') sai do loop
    do{
            cout << "Ola, " << nomeCliente << "! Escolha uma categoria:" << endl;
            cout << "1 - Lanches" << endl;
            cout << "2 - Bebidas" << endl;
            cout << "3 - Sobremesas" << endl; 
            cout << "4 - Finalizar Pedido" << endl;
            cout << "Escolhe uma opcao: ";
            cin >> opcaoMenu;

            // verifica se a opcao escolhida pelo cliente foi entre 1-4
            while (opcaoMenu < 1 || opcaoMenu > 4 || !cin >> opcaoMenu){
                cout << "Opcao invalida, digite uma opcao entre 1 e 4: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin >> opcaoMenu;
            }

            // mostra ao usuario os produtos do submenu conforme a escolha
            switch(opcaoMenu){
                case 1:
                    system("cls");
                    cout << "Lanches Disponiveis:" << endl;
                    cout << "1 - Hamburguer (R$10,00)" << endl;
                    cout << "2 - Cheeseburguer (R$12,00)" << endl;
                    cout << "3 - X-Bacon (R$15,00)" << endl;
                    cout << "Escolha uma opcao: ";
                    cin >> opcaoSubmenu;

                    // verifica se a opcao escolhida pelo cliente esta entre 1-3
                    while (opcaoSubmenu < 1 || opcaoSubmenu > 3){
                    cout << "Opcao invalida, digite uma opcao entre 1 e 3: ";
                    cin >> opcaoSubmenu;
                    }

                    // cliente digita a quantidade do lanche escolhido
                    cout << "Digite a quantidade: ";
                    cin >> quantidadeProduto;

                    // verifica se a quantidade de lanches escolhida pelo cliente é maior ou igual a 1
                    while (quantidadeProduto < 1){
                    cout << "Digite uma quantidade maior ou igual a 1: ";
                    cin >> quantidadeProduto;
                    }

                    // Bloco responsavel pelo calculo da quantidade de lanche e o valor total da escolha
                    switch (opcaoSubmenu){

                        case 1:
                            valorQuantidadeLanche = 10 * quantidadeProduto;
                            valorTotalLanche += valorQuantidadeLanche;
                            cout << "Hamburguer(es) adicionado(s) ao pedido." << endl;
                            cout << "Deseja adicionar mais itens ao pedido?(S/N): ";
                            cin >> opcaoSaida;

                            // verifica se o usuario digitou a opcao correta para continuar o pedido ou sair dele
                            while (opcaoSaida != 'S' && opcaoSaida != 's' && opcaoSaida != 'N' && opcaoSaida != 'n'){
                                cout << "Digite uma opcao valida (S/N): ";
                                cin >> opcaoSaida;
                            }
                            system("cls");
                        break;

                        case 2:
                            valorQuantidadeLanche = 12 * quantidadeProduto;
                            valorTotalLanche += valorQuantidadeLanche;
                            cout << "Cheeseburguer(es) adicionado(s) ao pedido." << endl;
                            cout << "Deseja adicionar mais itens ao pedido?(S/N): ";
                            cin >> opcaoSaida;

                            // verifica se o usuario digitou a opcao correta para continuar o pedido ou sair dele
                            while (opcaoSaida != 'S' && opcaoSaida != 's' && opcaoSaida != 'N' && opcaoSaida != 'n'){
                            cout << "Digite uma opcao valida (S/N): ";
                            cin >> opcaoSaida;
                            }
                            system("cls");
                        break;

                        case 3:
                            valorQuantidadeLanche = 15 * quantidadeProduto;
                            valorTotalLanche += valorQuantidadeLanche;
                            cout << "X-bacon(s) adicionado(s) ao pedido." << endl;
                            cout << "Deseja adicionar mais itens ao pedido?(S/N): ";
                            cin >> opcaoSaida;

                            // verifica se o usuario digitou a opcao correta para continuar o pedido ou sair dele
                            while (opcaoSaida != 'S' && opcaoSaida != 's' && opcaoSaida != 'N' && opcaoSaida != 'n'){
                            cout << "Digite uma opcao valida (S/N): ";
                            cin >> opcaoSaida;
                            }
                            system("cls");
                        break;
                    } //  fecha o switch submenu
                break;

                case 2:
                    system("cls");
                    cout << "Refrigerantes Disponiveis: " << endl;
                    cout << "1 - Refrigerante (R$5,00)" << endl;
                    cout << "2 - Suco (R$7,00)" << endl;
                    cout << "3 - Agua (R$3,00)" << endl;
                    cout << "Escolha uma opcao: ";
                    cin >> opcaoSubmenu;


                    // verifica se no submenu do refri esta sendo digitado a opcao de 1-3
                    while (opcaoSubmenu < 1 || opcaoSubmenu > 3){
                    cout << "Opcao invalida, digite uma opcao entre 1 e 3";
                    cin >> opcaoSubmenu;
                    }

                    cout << "Digite a quantidade: ";
                    cin >> quantidadeProduto;

                    // verifica se a quantidade digitada é menor que 1 
                    while (quantidadeProduto < 1){
                    cout << "Digite uma quantidade maior ou igual a 1";
                    cin >> quantidadeProduto;
                    }

                    // Bloco que inicia a verificação da opcao escolhida pelo usuario no submenu de refrigerante
                    switch (opcaoSubmenu){
                        case 1:
                            valorQuantidadeRefri = quantidadeProduto * 5;
                            valorTotalRefri += valorQuantidadeRefri;
                            cout << "Refrigerante(s) adicionado(s) ao pedido." << endl;
                            cout << "Deseja adicionar mais itens ao pedido?(S/N): ";
                            cin >> opcaoSaida;

                            // verifica se o usuario digitou a opcao correta para continuar o pedido ou sair dele
                            while (opcaoSaida != 'S' && opcaoSaida != 's' && opcaoSaida != 'N' && opcaoSaida != 'n'){
                            cout << "Digite uma opcao valida (S/N): ";
                            cin >> opcaoSaida;
                            }
                            system("cls");
                        break;

                        case 2:
                            valorQuantidadeRefri = quantidadeProduto * 7;
                            valorTotalRefri += valorQuantidadeRefri;
                            cout << "Suco(s) adicionado(s) ao pedido." << endl;
                            cout << "Deseja adicionar mais itens ao pedido?(S/N): ";
                            cin >> opcaoSaida;

                            // verifica se o usuario digitou a opcao correta para continuar o pedido ou sair dele
                            while (opcaoSaida != 'S' && opcaoSaida != 's' && opcaoSaida != 'N' && opcaoSaida != 'n'){
                            cout << "Digite uma opcao valida (S/N): ";
                            cin >> opcaoSaida;
                            }
                            system("cls");
                        break;

                        case 3:
                            valorQuantidadeRefri = quantidadeProduto * 3;
                            valorTotalRefri += valorQuantidadeRefri;
                            cout << "Agua(s) adicionado(s) ao pedido." << endl;
                            cout << "Deseja adicionar mais itens ao pedido(S/N): ";
                            cin >> opcaoSaida;
                        
                            // verifica se o usuario digitou a opcao correta para continuar o pedido ou sair dele
                            while (opcaoSaida != 'S' && opcaoSaida != 's' && opcaoSaida != 'N' && opcaoSaida != 'n'){
                            cout << "Digite uma opcao valida (S/N): ";
                            cin >> opcaoSaida;
                            }
                            system("cls");
                        break;
                    }
                break;

                case 3:
                    system("cls");
                    cout << "Sobremesas Disponiveis: " << endl;
                    cout << "1 - Sorvete (R$8,00)" << endl;
                    cout << "2 - Bolo (R$6,00)" << endl;
                    cout << "3 - Pudim (R$5,00)" << endl;
                    cout << "Escolha uma opcao: ";
                    cin >> opcaoSubmenu;

                    // verifica se no submenu do refri esta sendo digitado a opcao de 1-3
                    while (opcaoSubmenu < 1 || opcaoSubmenu > 3){
                        cout << "Opcao invalida, digite uma opcao entre 1 e 3";
                        cin >> opcaoSubmenu;
                    }

                    cout << "Digite a quantidade: ";
                    cin >> quantidadeProduto;

                    // verifica se a quantidade digitada é menor que 1 
                    while (quantidadeProduto < 1){
                        cout << "Digite uma quantidade maior ou igual a 1";
                        cin >> quantidadeProduto;
                    }

                    // Bloco que calcula a quantidade e o valor total escolhido pelo usuario das opcoes de sobremesa
                    switch(opcaoSubmenu){

                        case 1:
                            valorQuantidadeSobremesa = quantidadeProduto * 8;
                            valorTotalSobremesa += valorQuantidadeSobremesa;
                            cout << "Sorvete(s) adicionado(s) ao pedido." << endl;
                            cout << "Deseja adicionar mais itens ao pedido?(S/N): ";
                            cin >> opcaoSaida;   

                            while (opcaoSaida != 'S' && opcaoSaida != 's' && opcaoSaida != 'N' && opcaoSaida != 'n'){
                                cout << "Digite uma opcao valida (S/N): ";
                                cin >> opcaoSaida;
                            }
                            system("cls"); 
                        break;         

                        case 2:
                            valorQuantidadeSobremesa = quantidadeProduto * 6;
                            valorTotalSobremesa += valorQuantidadeSobremesa;
                            cout << "Bolo(s) adicionado(s) ao pedido." << endl;
                            cout << "Deseja adicionar mais itens ao pedido?(S/N): ";
                            cin >> opcaoSaida;

                            while (opcaoSaida != 'S' && opcaoSaida != 's' && opcaoSaida != 'N' && opcaoSaida != 'n'){
                                cout << "Digite uma opcao valida (S/N): ";
                                cin >> opcaoSaida;
                            }
                            system("cls");
                        break;

                        case 3:
                            valorQuantidadeSobremesa = quantidadeProduto * 5;
                            valorTotalSobremesa += valorQuantidadeSobremesa;
                            cout << "Pudim(ns) adicionado(s) ao pedido." << endl;
                            cout << "Deseja adicionar mais itens ao pedido?(S/N): ";
                            cin >> opcaoSaida;

                            while (opcaoSaida != 'S' && opcaoSaida != 's' && opcaoSaida != 'N' && opcaoSaida != 'n'){
                                cout << "Digite uma opcao valida (S/N): ";
                                cin >> opcaoSaida;
                            }
                            system("cls");
                        break;
                    } break;// fecha bloco submenu

                        // Se o usuario digitar N no menu irá sair imediatamente do primeiro While
                    case 4:
                    opcaoSaida = 'N';
                    break;

                    // se o usuario nao digitar nenhuma das opções validas, é solicitado se deseja recomeçar ou sair
                    default:
                        cout << "Nao foi possivel selecionar uma opcao valida! Deseja voltar? (S/N): ";
                        cin >> opcaoSaida;

                        // verifica se o usuario digitou uma opção valida para continuar
                        while (opcaoSaida != 'S' && opcaoSaida != 's' && opcaoSaida != 'N' && opcaoSaida != 'n'){
                            cout << "Digite uma opcao valida (S/N): ";
                            cin >> opcaoSaida;
                        }
                    break;
                } // fecha o if da verificação de erro
            } while (opcaoSaida != 'n' && opcaoSaida != 'N'); // Enquanto opcaoSaida for diferente de 'n' ele executa o codigo

        // Calcula o total que o usuario adicionou no pedido
        total = valorTotalSobremesa + valorTotalLanche + valorTotalRefri;
            system("cls");
            cout << "\nPedido finalizado!" << endl;

            // Bloco que verifica o valor total para aplicar o desconto
            if (total > 50){
                // se o total for maior que R$50,00 é aplicado desconto de 10%
                valorDesconto = total * 0.1;
                // Valor novo ja com o desconto
                totalDesconto = total - valorDesconto;
                cout << "\nTotal do pedido: " << total << endl;
                cout << "\nVoce recebeu um desconto de: " << valorDesconto << endl;
                cout << "Total do seu pedido com desconto foi de: " << totalDesconto << endl;
                cout << "\nObrigado por comprar na nossa lanchonete, " << nomeCliente << endl;
                cout << " ";
                }
            else {
                cout << "\nTotal do pedido: " << total << endl;
                cout << "Obrigado por comprar na nossa lanchonete, " << nomeCliente << endl;
                cout << " ";
                }

        return 0;
    }