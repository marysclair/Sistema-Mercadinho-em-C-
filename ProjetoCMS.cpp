#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

struct mercadinho{
float quant;
float produtos;
string produtinho;
string cliente;
string senha;
string email;
};

struct admin{
string produtos_admin;
string frutas;
string bebidas;
string carnes;
string verd_legu;
string graos;
string higiene;
float fru_preco;
float beb_preco;
float car_preco;
float verd_legu_preco;
float graos_preco;
float higiene_preco;
float preco_admin;
};

float resul_produto(string novo_produtinho);
float dinheiro(float xx, float xxx){
      float x;
      x= xx*xxx;
      return x;
      }

int main()
{

    // Equipe: Caylane Silva, Maria Clara, Samiry Vitória.
    // NÃO utilizar palavras com acento ou com letra maíuscula.
    // Esse programa foi desenvolvido para ser um Mercadinho ONLINE.
    // Produtos previamente cadastrados.
    // O admin tem o direito de cadastrar qualquer produto em qualquer seção.
    // Nome do usuário do admin: caysamiclair.
    // Senha do usuário do admin: coxinha123.
    // Por favor, considere nosso esforço :).

    setlocale(LC_ALL, "");
    ofstream arquivomercadinho;
    int op, op2, op3, op4, op5, op6,op7;
    string resp;
    string achei="nao";
    string nova_senha;
    string admin_user, admin_senha, nova_senhaadmin;
    string achei2="nao";
    int d=0;
    int b=0;
    int f=0;
    int g=0;
    int h=0;
    int c=0;
    int v=0;
    float resul=0, resul2=0, resul3=0;
    mercadinho m[1000];
    admin ad[1000];
    int i=0;
    string senha2, cliente2;
    int cont=0;
    int cont_f=0, cont_v=0, cont_c=0, cont_g=0, cont_h=0, cont_b=0;
    float r=0;
    int p=0;
    float produto;
    nova_senhaadmin = "coxinha123";


    system("color 3F");
        do{
        system("cls");
        cout << endl << "========BEM VINDO========="<<endl;
        cout << " [1]- Fazer Login do Administrador "<<endl;
        cout << " [2]- Fazer Login do Cliente"<<endl;
        cout << "=>Escolha uma opção_ ";
        cin >> op4;
        if(op4==1){
              system("cls");
              cout << endl<<"=Insira seu nome de usário "<<endl;
              cin >> admin_user;
              cout << "=Insira sua senha "<<endl;
              cin >> admin_senha;
              arquivomercadinho.open("mercadinho cliente");
              arquivomercadinho << "caysamiclair \n";
              arquivomercadinho << "coxinha123 \n"<<endl;
              arquivomercadinho.close();
              if(admin_user=="caysamiclair"&&admin_senha==nova_senhaadmin){
                     do{
                     system("cls");
                     cout << " [1]- Cadastrar produtos "<<endl;
                     cout << " [2]- Informar dados da conta do Administrador "<<endl;
                     cout << " [3]- Mudar a senha "<< endl;
                     cout << " [4]- Listar produtos cadastrados"<< endl;
                     cout << " [5]- Voltar para o menu anterior"<< endl;
                     cout << "=>Escolha uma opção_ ";
                     cin >> op5;
                     if(op5==1){
                        system("cls");
                        cout << "=>Deseja cadastrar produtos de que seção? ";
                        cout << endl<< " [1]- Seção frutas" <<endl;
                        cout << " [2]- Seção verduras e legumes" <<endl;
                        cout << " [3]- Seção carnes " <<endl;
                        cout << " [4]- Seção grãos " <<endl;
                        cout << " [5]- Seção higiene " <<endl;
                        cout << " [6]- Seção bebidas " <<endl;
                        cout << "=>Escolha uma seção ";
                        cin >> op6;
                        if (op6==1){
                                do{
                            system("cls");
                            cout << "=>Informe o nome do produto_ ";
                            cin >> ad[f].frutas;
                            cout << "=>Informe o preço do produto_ ";
                            cin >> ad[f].fru_preco;
                            cout << "==FRUTA CADASTRADA=="<<endl;
                            system("pause");
                            system("cls");
                            ad[p].produtos_admin = ad[f].frutas;
                            ad[p].preco_admin = ad[f].fru_preco;
                            cont_f++;
                            f++;
                            p++;
                            cout << "=>Deseja cadastrar outro produto nessa seção? [sim/nao] ";
                            cin >> resp;
                        }while(resp!="nao");
                                }
                         else if (op6==2){
                                do{
                            system("cls");
                            cout << "=>Informe o nome do produto_ ";
                            cin >> ad[v].verd_legu;
                            cout << "=>Informe o preço do produto_ ";
                            cin >> ad[v].verd_legu_preco;
                            cout << "==VERDURA/LEGUME CADASTRADA=="<<endl;
                            system("pause");
                            system("cls");
                            ad[p].produtos_admin = ad[v].verd_legu;
                            ad[p].preco_admin = ad[v].verd_legu_preco;
                            cont_v++;
                            v++;
                            p++;
                            cout << "=>Deseja cadastrar outro produto nessa seção? [sim/nao] ";
                            cin >> resp;
                        }while(resp!="nao");
                        }
                         else if (op6==3){
                                do{
                            system("cls");
                            cout << "=>Informe o nome do produto_ ";
                            cin.ignore();
                            getline(cin, ad[c].carnes);
                            cout << "=>Informe o preço do produto_ ";
                            cin >> ad[c].car_preco;
                            cout << "==CARNE CADASTRADA=="<<endl;
                            system("pause");
                            system("cls");
                            ad[p].produtos_admin = ad[c].carnes;
                            ad[p].preco_admin = ad[c].car_preco;
                            cont_c++;
                            c++;
                            p++;
                            cout << "=>Deseja cadastrar outro produto nessa seção? [sim/nao] ";
                            cin >> resp;
                        }while(resp!="nao");
                        }
                         else if (op6==4){
                                do{
                            system("cls");
                            cout << "=>Informe o nome do produto_ ";
                            cin.ignore();
                            getline(cin, ad[g].graos);
                            cout << "=>Informe o preço do produto_ ";
                            cin >> ad[g].graos_preco;
                            cout << "==GRÃO CADASTRADA=="<<endl;
                            system("pause");
                            system("cls");
                            ad[p].produtos_admin = ad[g].graos;
                            ad[p].preco_admin = ad[g].graos_preco;
                            cont_g++;
                            g++;
                            p++;
                            cout << "=>Deseja cadastrar outro produto nessa seção? [sim/nao] ";
                            cin >> resp;
                        }while(resp!="nao");
                        }
                         else if (op6==5){
                                do{
                            system("cls");
                            cout << "=>Informe o nome do produto_ ";
                            cin.ignore();
                            getline(cin, ad[h].higiene);
                            cout << "=>Informe o preço do produto_ ";
                            cin >> ad[h].higiene_preco;
                            cout << "==PRODUTO CADASTRADO=="<<endl;
                            system("pause");
                            system("cls");
                            ad[p].produtos_admin = ad[h].higiene;
                            ad[p].preco_admin = ad[h].higiene_preco;
                            cont_h++;
                            h++;
                            p++;
                            cout << "=>Deseja cadastrar outro produto nessa seção? [sim/nao] ";
                            cin >> resp;
                        }while(resp!="nao");
                        }
                        else if (op6==6){
                                do{
                            system("cls");
                            cout << "=>Informe o nome do produto_ ";
                             cin.ignore();
                            getline(cin, ad[b].bebidas);
                            cout << "=>Informe o preço do produto_ ";
                            cin >> ad[b].beb_preco;
                            cout << "==BEBIDA CADASTRADA=="<<endl;
                            system("pause");
                            system("cls");
                            ad[p].produtos_admin = ad[b].bebidas;
                            ad[p].preco_admin = ad[b].beb_preco;
                            cont_b++;
                            b++;
                            p++;
                            cout << "=>Deseja cadastrar outro produto nessa seção? [sim/nao] ";
                            cin >> resp;
                        }while(resp!="nao");
                        }
                     }
                    else if(op5==2){
                         system("cls");
                        cout << "==DADOS DO ADMISTRADOR=="<< endl;
                        cout << "=Nome do usuário: "<< admin_user <<endl;
                        cout << "=Senha do usuário: "<< admin_senha <<endl;
                        cout << "=Email do usuário: mercadinhoburguês@conta1.com" <<endl;
                        system("pause");
                     }
                    else if(op5==3){
                        system("cls");
                        cout << "=Informe sua nova senha "<< endl;
                        cin >> nova_senhaadmin;
                        admin_senha = nova_senhaadmin;
                       cout << "==NOVA SENHA DEFINIDA== "<< endl;
                       system("pause");
                     }
                     else if(op5==4){
                        system("cls");
                        cout << "==PRODUTOS CADASTRADOS=="<<endl;
                        for(int l=0; l<p;l++){
                        cout <<"Produto: "<< ad[l].produtos_admin << " - Preço: " <<ad[l].preco_admin << endl;
                        }
                         system("pause");
                     }
                     }while(op5!=5);
              } else {
                               system("cls");
            cout << endl << "==USUARIO OU SENHA INCORRETA==" << endl;
            system("pause");
            system("cls");
            cout << "=Deseja redefinir a senha?[sim/nao] ";
            cin >> resp;
            if(resp=="sim"){
                system("cls");
                   cout << "=Informe sua nova senha "<< endl;
                   cin >> nova_senhaadmin;
                   admin_senha = nova_senhaadmin;
                   cout << "==NOVA SENHA DEFINIDA== "<< endl;
            }
            system("pause");
              }
        }
        } while(op4!=2);
        if(op4==2){
        do{
        system("cls");
        cout << endl << "===MERCADINHO ONLINE==="<<endl;
        cout << " [1]- Criar conta do Cliente"<<endl;
        cout << " [2]- Fazer Login do Cliente"<<endl;
        cout << " [3]- Sair do Programa"<< endl;
        cout << "=>Escolha uma opção_ ";
        cin >> op;
        achei = "nao";
        if(op==1){
              system("cls");
              cout << endl<<"=Insira seu nome de usário "<<endl;
              cin >> m[i].cliente;
              cout << "=Insira sua senha "<<endl;
              cin >> m[i].senha;
              cout << "=Insira seu email "<<endl;
              cin >> m[i].email;
              cont++;
              i++;
        }
        else if(op==2){
            system("cls");
            cout << endl << "=Informe o seu usuário "<<endl;
            cin >> cliente2;
            cout << "=Informe a sua senha "<<endl;
            cin >> senha2;
            for (int a=0; a<cont; a++){
            if(cliente2==m[a].cliente&&senha2==m[a].senha){
                    achei ="sim";
                     i--;
                do {
                system("cls");
                cout << endl<< " [1]- Fazer compras "<<endl;
                cout << " [2]- Listar produtos comprados "<<endl;
                cout << " [3]- Informar dados da conta do Cliente "<<endl;
                cout << " [4]- Mudar a senha "<< endl;
                cout << " [5]- Voltar para o menu principal"<< endl;
                cout << "=>Escolha uma opção_ ";
                cin >> op2;
                    if(op2==1){
                        system("cls");
                        cout << endl<< " [1]- Seção frutas" <<endl;
                        cout << " [2]- Seção verduras e legumes" <<endl;
                        cout << " [3]- Seção carnes " <<endl;
                        cout << " [4]- Seção grãos " <<endl;
                        cout << " [5]- Seção higiene " <<endl;
                        cout << " [6]- Seção bebidas " <<endl;
                        cout << "=>Escolha uma opção_ ";
                        cin >> op3;
                     if(op3==1){
                        do {
                        system("cls");
                        achei2="nao";
                        cout << " Maçã - 0.70 R$" <<endl;
                        cout << " Manga - 1.00 R$" <<endl;
                        cout << " Banana - 1.00 R$" <<endl;
                        cout << " Laranja - 1.00 R$" <<endl;
                        cout << " Morango (7uni) - 9.99 R$" <<endl;
                        cout << " Melancia - 6.00 R$" <<endl;
                        cout << " Uva (por cacho) - 2.00 R$" <<endl;
                        cout << " Abacaxi - 2.50 R$" <<endl;
                        cout << " Pinha - 0.90 R$" <<endl;
                        cout << " Limão - 0.40 R$" <<endl;
                        if (cont_f>=1){
                                for (int f=0; f<cont_f; f++){
                            cout << " "<< ad[f].frutas << " - " << ad[f].fru_preco << " R$ " << endl;
                                }
                        }
                        cout << "=>Escolha uma fruta_ ";
                        cin >> m[d].produtinho;
                        cout << "=>Quantas dessa fruta você quer comprar? ";
                        cin >> m[d].quant;
                         for (int f=0; f<cont_f; f++){
                        if(m[d].produtinho==ad[f].frutas){
                                resul = (m[d].quant*ad[f].fru_preco);
                                r = r + resul;
                                m[d].produtinho = ad[f].frutas;
                                m[d].produtos = resul;
                                achei2="sim";
                         }
                        }
                        if(achei2=="nao") {
                        produto = resul_produto(m[d].produtinho);
                        resul = dinheiro(m[d].quant, produto);
                        m[d].produtos = resul;
                        r = r + resul;
                         }
                         resul3= r;
                         d++;
                        cout << "=>Sua compra deu " << resul3;
                        cout << endl<< "=>Deseja comprar mais frutas?[sim/nao] ";
                        cin >> resp;


                    }while(resp!="nao");

                    } else if(op3==2){
                        do {
                         system("cls");
                         achei2="nao";
                        cout << " Cebola(kg) - 5.00 R$" <<endl;
                        cout << " Batatinha(kg) - 5.00 R$" <<endl;
                        cout << " Pimentao - 0.50 R$" <<endl;
                        cout << " Alho(5 cabecas) - 7.00 R$" <<endl;
                        cout << " Alface(5 folhas) - 2.50 R$" <<endl;
                        cout << " Cenoura(500g)- 2.00 R$" <<endl;
                        cout << " Coentro - 0.50 R$" <<endl;
                        cout << " Couve - 1.00 R$" <<endl;
                        cout << " Tomate(kg) - 5.00 R$" <<endl;
                        cout << " Pepino - 0.80 R$" <<endl;
                        if (cont_v>=1){
                                for (int v=0; v<cont_v; v++){
                            cout << " "<< ad[v].verd_legu << " - " << ad[v].verd_legu_preco << " R$ " <<endl;
                                }
                        }
                        cout << "=>Escolha uma verdura/legume_ ";
                        cin >> m[d].produtinho;
                        cout << "=>Quantas dessa verdura/legume você quer comprar? ";
                        cin >> m[d].quant;
                        for (int v=0; v<cont_v; v++){
                            if(m[d].produtinho==ad[v].verd_legu){
                                resul = (m[d].quant*ad[v].verd_legu_preco);
                                r = r + resul;
                                m[d].produtinho = ad[v].verd_legu;
                                m[d].produtos = resul;
                                achei2="sim";
                            }
                        }
                        if(achei2=="nao") {
                        produto = resul_produto(m[d].produtinho);
                        resul = dinheiro(m[d].quant, produto);
                        m[d].produtos = resul;
                        r = r + resul;
                        }
                        resul3= r;
                        d++;
                        cout << "=>Sua compra deu " << resul3;
                        cout << endl<< "=>Deseja comprar mais verduras/legumes?[sim/nao] ";
                        cin >> resp;
                        }while(resp!="nao");
             } else if(op3==3){
                        do {
                         system("cls");
                         achei2="nao";
                        cout << " Carne bovina (kg) - 20.00 R$" <<endl;
                        cout << " Linguica suina (kg) - 8.50 R$" <<endl;
                        cout << " Peito de frango - 7.00 R$" <<endl;
                        cout << " Frango inteiro - 22.00 R$" <<endl;
                        cout << " Galinha caipira - 28.00 R$" <<endl;
                        cout << " Peixe tilapia - 15.00 R$" <<endl;
                        cout << " Sardinha lata - 3.50 R$" <<endl;
                        cout << " Carne de porco (kg) - 10.00 R$" <<endl;
                        cout << " Carne de bode (kg) - 15.00 R$" <<endl;
                        cout << " Carne moida (kg) - 13.50 R$" <<endl;
                         if (cont_c>=1){
                                for (int c=0; c<cont_c; c++){
                            cout << " "<< ad[c].carnes << " - " << ad[c].car_preco << " R$ "<< endl;
                                }
                        }
                        cout << "=>Escolha um tipo de carne_ ";
                        cin.ignore();
                        getline(cin, m[d].produtinho);
                        cout << "=>Quantos desse tipo de carne você quer comprar? ";
                        cin >> m[d].quant;
                        for (int c=0; c<cont_c; c++){
                            if(m[d].produtinho==ad[c].carnes){
                                resul = (m[d].quant*ad[c].car_preco);
                                r = r + resul;
                                m[d].produtinho = ad[c].carnes;
                                m[d].produtos = resul;
                                achei2="sim";
                            }
                        }
                         if(achei2=="nao") {
                        produto = resul_produto(m[d].produtinho);
                        resul = dinheiro(m[d].quant, produto);
                        m[d].produtos = resul;
                        r = r + resul;
                        }
                        resul3= r;
                        d++;
                        cout << "=>Sua compra deu " << resul3;
                        cout << endl<< "=>Deseja comprar mais carnes?[sim/nao] ";
                        cin >> resp;
                         }while(resp!="nao");
             }
             else if(op3==4){
                        do {
                         system("cls");
                         achei2="nao";
                        cout << " Linhaça (500g) - 6.80 R$" <<endl;
                        cout << " Aveia (500g) - 6.00 R$" << endl;
                        cout << " Chia (500g) - 7.00 R$" <<endl;
                        cout << " Feijão Carioca(Kg) - 5.20 R$" << endl;
                        cout  << " Feijão Preto(Kg) - 5.30 R$" <<endl;
                        cout << " Arroz branco(Kg) - 3.20 R$" <<endl;
                        cout << " Arroz integral(Kg) - 5.25 R$" <<endl;
                        cout << " Quinoa(500g) - 7.00 R$" <<endl;
                        cout << " Grão de bico(500g) - 8.50 R$" <<endl;
                        cout << " Lentilha(500g) - 8.20 R$" <<endl;
                        if (cont_c>=1){
                                for (int g=0; g<cont_g; g++){
                            cout << " "<< ad[g].graos << " - " << ad[c].graos_preco << " R$ "<< endl;
                                }
                        }
                        cout << "=>Escolha um grão_ ";
                        cin.ignore();
                        getline(cin, m[d].produtinho);
                        cout << "=>Quantos desse grão você quer comprar? ";
                        cin >> m[d].quant;
                         for (int g=0; g<cont_g; g++){
                            if(m[d].produtinho==ad[g].graos){
                                resul = (m[d].quant*ad[g].graos_preco);
                                r = r + resul;
                                m[d].produtinho = ad[g].graos;
                                m[d].produtos = resul;
                                achei2="sim";
                            }
                        }
                         if(achei2=="nao") {
                        produto = resul_produto(m[d].produtinho);
                        resul = dinheiro(m[d].quant, produto);
                        m[d].produtos = resul;
                        r = r + resul;
                        }
                        resul3= r;
                        d++;
                        cout << "=>Sua compra deu " << resul3;
                        cout << endl<< "=>Deseja comprar mais grãos?[sim/nao] ";
                        cin >> resp;
                        }while(resp!="nao");
             }
                 else if(op3==5){
                   do{
                    system("cls");
                    achei2="nao";
                    cout << " Porta escovas - 2.00 R$" << endl;
                    cout << " Saboneteira plástica - 1.50 R$" << endl;
                    cout << " Bucha vegetal - 2.70 R$" << endl;
                    cout << " Toalha de banho - 10.00" << endl;
                    cout << " Papel higiênico folha dupla (16 und) - 18.00 R$" << endl;
                    cout << " Sabonete liquido - 10.00 R$" << endl;
                    cout << " Hastes flexíveis - 1.90 R$" << endl;
                    cout << " Algodão bola - 3.49 R$" << endl;
                    cout << " Escova dental (3 und) - 6.99 R$" << endl;
                    cout << " Absorvente intimus (32 und) - 13.99 R$" << endl;
                    if (cont_h>=1){
                                for (int h=0; h<cont_h; h++){
                            cout << " "<< ad[h].higiene << " - " << ad[g].higiene_preco << " R$" << endl;
                                }
                        }
                    cout << "=>Escolha um produto higiênico_ ";
                    cin.ignore();
                    getline(cin, m[d].produtinho);
                    cout << "=>Quantos desse produto higiênico você comprar? ";
                    cin >>m[d].quant;
                    for (int h=0; h<cont_h; h++){
                            if(m[d].produtinho==ad[h].higiene){
                                resul = (m[d].quant*ad[h].higiene_preco);
                                r = r + resul;
                                m[d].produtinho = ad[h].higiene;
                                m[d].produtos = resul;
                                achei2="sim";
                            }
                        }
                         if(achei2=="nao") {
                        produto = resul_produto(m[d].produtinho);
                        resul = dinheiro(m[d].quant, produto);
                        m[d].produtos = resul;
                        r = r + resul;
                        }
                        resul3= r;
                        d++;
                    cout << "=>Sua compra deu " << resul3;
                    cout << endl<< "=>Deseja comprar mais produtos higiênicos?[sim/nao] ";
                    cin >> resp;
                }while(resp!="nao");
            }
            else if(op3==6){
                   do{
                    system("cls");
                    cout << " Vodka frutas vermelhas - 45.00 R$" << endl;
                    cout << " Skol Beats (bozó com 6 unidades) - 38.89 R$" << endl;
                    cout << " Energético Fusion (pack com 6 unidades) - 18.40 R$" << endl;
                    cout << " Água mineral com gás (500 ml) - 1.95 R$" << endl;
                    cout << " Água mineral sem gás (500 ml) - 2.00 R$" << endl;
                    cout << " Refrigerante indaiá - 2.79 R$" << endl;
                    cout << " Refrigerante antártica - 7.00 R$" << endl;
                    cout << " Whisky Black & White - 79.00 R$" << endl;
                    cout << " Pitu limão - 5.00 R$" << endl;
                    cout << " Refrigerante fanta - 6.50 R$" << endl;
                    if (cont_b>=1){
                                for (int b=0; b<cont_b; b++){
                            cout << " "<< ad[b].bebidas << " - " << ad[b].beb_preco << " R$ " << endl;
                                }
                        }
                    cout << "=>Escolha uma bebida_ ";
                    cin.ignore();
                    getline(cin, m[d].produtinho);
                    cout << "Quantas desse bebida você quer comprar? ";
                    cin >>m[d].quant;
                    for (int b=0; b<cont_b; b++){
                            if(m[d].produtinho==ad[b].bebidas){
                                resul = (m[d].quant*ad[b].beb_preco);
                                r = r + resul;
                                m[d].produtinho = ad[b].bebidas;
                                m[d].produtos = resul;
                                achei2="sim";
                            }
                        }
                    if(achei2=="nao") {
                        produto = resul_produto(m[d].produtinho);
                        resul = dinheiro(m[d].quant, produto);
                        m[d].produtos = resul;
                        r = r + resul;
                        }
                        resul3= r;
                        d++;
                    cout << "=>Sua compra deu " << resul3;
                    cout << endl<< "=>Deseja comprar mais bebidas?[sim/nao] ";
                    cin >> resp;
                }while(resp!="nao");
            }
            }
     else if (op2==2){
                    system("cls");
                    cout << "==LISTA DO QUE JÁ FOI COMPRADO==" << endl;
                    for (int o=0; o<d;o++){
                        cout<<"=Produto: "<< m[o].produtinho << " - Quant: " << m[o].quant << " = " << m[o].produtos  << " reais." <<endl;
                    }
                    cout <<"=>O RESULTADO TOTAL É: " << resul3 << " reais."<<endl;
                    system("pause");
    }
     else if (op2==3){
                   system("cls");
                   cout << "==DADOS DO CLIENTE=="<< endl;
                   cout << "=Nome do usuário: "<< m[i].cliente <<endl;
                   cout << "=Senha do usuário: "<< m[i].senha <<endl;
                   cout << "=Email do usuário: "<< m[i].email <<endl;
                    system("pause");
    }
    else if (op2==4){
                   system("cls");
                   cout << "=Informe sua nova senha "<< endl;
                   cin >> nova_senha;
                   m[i].senha = nova_senha;
                   cout << "==NOVA SENHA DEFINIDA== "<< endl;
                    system("pause");
    }
        } while(op2!=5);
        }
    }
    if(achei=="nao") {
             system("cls");
            cout << endl << "==USUARIO OU SENHA INCORRETA==" << endl;
            system("pause");
            system("cls");
            cout << "=Deseja redefinir a senha?[sim/nao] ";
            cin >> resp;
            if(resp=="sim"){
                system("cls");
                   int t =i;
                   t--;
                   cout << "=Informe sua nova senha "<< endl;
                   cin >> nova_senha;
                   m[t].senha = nova_senha;
                   cout << "==NOVA SENHA DEFINIDA== "<< endl;
            }
            system("pause");
        }
        }
}while(op!=3);
        }
}

float resul_produto(string novo_produtinho){
        float resul_prod;
                           if (novo_produtinho=="maca"){
                            resul_prod=0.70;
                            }
                            else if (novo_produtinho=="manga"){
                            resul_prod=1.00;
                            }
                            else if (novo_produtinho=="banana"){
                            resul_prod=1.00;
                            }
                            else if (novo_produtinho=="laranja"){
                            resul_prod=1.00;
                            }
                            else if (novo_produtinho=="morango"){
                            resul_prod=9.99;
                            }
                            else if (novo_produtinho=="melancia"){
                            resul_prod=6.00;
                            }
                            else if (novo_produtinho=="uva"){
                            resul_prod=2.00;
                            }
                            else if (novo_produtinho=="abacaxi"){
                            resul_prod=2.50;
                            }
                            else if (novo_produtinho=="pinha"){
                            resul_prod=0.90;
                            }
                            else if (novo_produtinho=="limao"){
                            resul_prod=0.40;
                            }
                            else if (novo_produtinho=="carne bovina"){
                            resul_prod=20.00;
                            }
                            else if (novo_produtinho=="linguica suina"){
                            resul_prod=8.50;
                            }
                            else if (novo_produtinho=="peito de frango"){
                            resul_prod=7.00;
                            }
                            else if (novo_produtinho=="frango inteiro"){
                            resul_prod=22.00;
                            }
                            else if (novo_produtinho=="galinha caipira"){
                            resul_prod=28.00;
                            }
                            else if (novo_produtinho=="peixe tilapia"){
                            resul_prod=15.00;
                            }
                            else if (novo_produtinho=="sardinha lata"){
                            resul_prod=3.50;
                            }
                            else if (novo_produtinho=="carne de porco"){
                            resul_prod=10.00;
                            }
                            else if (novo_produtinho=="carne de bode"){
                            resul_prod=15.00;
                            }
                            else if (novo_produtinho=="carne moida"){
                            resul_prod=13.50;
                            }
                            else if (novo_produtinho=="cebola"){
                            resul_prod=5.00;
                            }
                            else if (novo_produtinho=="batatinha"){
                            resul_prod=5.00;
                            }
                            else if (novo_produtinho=="pimentao"){
                            resul_prod=0.50;
                            }
                            else if (novo_produtinho=="alho"){
                            resul_prod=7.00;
                            }
                            else if (novo_produtinho=="alface"){
                            resul_prod=2.50;
                            }
                            else if (novo_produtinho=="cenoura"){
                            resul_prod=2.00;
                            }
                            else if (novo_produtinho=="coentro"){
                            resul_prod=0.50;
                            }
                            else if (novo_produtinho=="couve"){
                            resul_prod=1.00;
                            }
                            else if (novo_produtinho=="tomate"){
                            resul_prod=5.00;
                            }
                            else if (novo_produtinho=="pepino"){
                            resul_prod=0.80;
                            }
                            else if (novo_produtinho=="linhaca "){
                            resul_prod=6.80;
                            }
                            else if (novo_produtinho=="aveia"){
                            resul_prod=6.00;
                            }
                            else if (novo_produtinho=="chia"){
                            resul_prod=7.00;
                            }
                            else if (novo_produtinho=="feijao carioca"){
                            resul_prod=5.20;
                            }
                            else if (novo_produtinho=="feijao preto"){
                            resul_prod=5.30;
                            }
                            else if (novo_produtinho=="arroz branco "){
                            resul_prod=3.20;
                            }
                            else if (novo_produtinho=="arroz integral"){
                            resul_prod=5.25;
                            }
                            else if (novo_produtinho=="quinoa"){
                            resul_prod=7.00;
                            }
                            else if (novo_produtinho=="grao de bico"){
                            resul_prod=8.50;
                            }
                            else if (novo_produtinho=="lentilha"){
                            resul_prod=8.20;
                            }
                             else if (novo_produtinho=="porta escovas"){
                            resul_prod=2.00;
                            }
                            else if (novo_produtinho=="saboneteira plastica"){
                                resul_prod=1.50;
                            }
                            else if (novo_produtinho=="bucha vegetal"){
                                resul_prod=2.70;
                            }
                            else if (novo_produtinho=="toalha de banho"){
                                resul_prod=10.00;
                            }
                            else if (novo_produtinho=="papel higienico"){
                                resul_prod=18.00;
                            }
                            else if (novo_produtinho=="sabonete liquido"){
                                resul_prod=10.00;
                            }
                            else if (novo_produtinho=="hastes flexiveis"){
                                resul_prod=1.90;
                            }
                            else if (novo_produtinho=="algodao bola"){
                                resul_prod=3.49;
                            }
                            else if (novo_produtinho=="escova dental"){
                                resul_prod=6.99;
                            }
                            else if (novo_produtinho=="sabonetes intimus"){
                                resul_prod=13.99;
                            }
                            else if (novo_produtinho=="vodka frutas vermelhas"){
                            resul_prod=45.00;
                            }
                            else if (novo_produtinho=="skol beats"){
                                resul_prod=38.89;
                            }
                            else if (novo_produtinho=="energetico fusion"){
                                resul_prod=18.40;
                            }
                            else if (novo_produtinho=="agua mineral com gas"){
                                resul_prod=1.95;
                            }
                            else if (novo_produtinho=="agua mineral sem gas"){
                                resul_prod=2.00;
                            }
                            else if (novo_produtinho=="refrigerante indaia"){
                                resul_prod=2.79;
                            }
                            else if (novo_produtinho=="whisky black and white"){
                                resul_prod=79.90;
                            }
                            else if (novo_produtinho=="pitu limao"){
                                resul_prod=5.00;
                            }
                            else if (novo_produtinho=="refrigerante fanta"){
                                resul_prod=6.50;
                            }
                            else if (novo_produtinho=="refrigerante antartico"){
                                resul_prod=7.00;
                            }
                            return resul_prod;
}

