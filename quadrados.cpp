//Vamos implementar o jogo dos quadrados ou jogo dos pontinhos em C++
/*Compilar este programa com o comando: g++ -o quadrados quadrados.cpp */


/*CABEÇALHO*/
#include"quadrados.hpp"
#include<iostream>
#include<array>
#include<cstdlib>
#include<string>
#include<cctype>
using namespace std;

//CLASSE DO APLICATIVO
class square_game{
public:
//Membros da classe
string board[21][23];//Tabuleiro
int x1, y1, x2, y2;//Coordenadas das jogadas
int i, j;//Loops
int mark1, mark2;//Pontuação
bool is_end;//Fim de jogo
bool player1, player2;//Controle de jogadas
string name1, name2, letter1, letter2;//Nome dos jogadores

//Métodos
void player_names();
void reset_board();
void print_board();
void get_input();
void make_move();
void score();
void end_game();

                 };

//MÉTODOS DA CLASSE

//1: Recebendo o nome do jogadores
void square_game::player_names(){
cout<<"Jogador número 1 digite o seu nome:\n";
cin>>name1;
cout<<"Jogador número 2 digite o seu nome:\n";
cin>>name2;
cout<<"\x1B[34m"<<"\x1B[01m"<<"\nSejam bem vindos "<<name1<<" e "<<name2<<".\nBoa partida!!!\n\n"<<"\x1B[0m";
letter1="2";
letter2="1";
                               };

//2: Ajustando o tabuleiro em sua configuração inicial
void square_game::reset_board(){
//Resetando o tabuleiro do jogo
for(i=0; i<21; ++i){
for(j=0; j<21; ++j){
if((i%2)==0 && (j%2)==0)
board[i][j]="+";
if((i%2)!=0 || (j%2)!=0)
board[i][j]=" ";
                   };
                   };

//Resentando as variáveis que definem as ordens das jogadas
player1=true;
player2=false;
//Resetando as variáveis que assinalam a pontuação do jogador
mark1=0;
mark2=0;
                  };

//3: Printando o tabuleiro do jogo na tela
void square_game::print_board(){
//Printando as coordenadas da colunas
cout<<"\x1B[01m"<<"0 1 2 3 4 5 6 7 8 9 10\n"<<"\x1B[0m";
//Printando o tabuleiro na tela
for(i=0; i<21; ++i){
for(j=0; j<21; ++j)
cout<<board[i][j];
//Printando as coordenadas das linhas na tela 
if((i%2)==0 && (j>20))
cout<<"\x1B[01m  "<<(i/2)<<"\x1B[0m";
cout<<"\n";                   
                   };
cout<<"\n";
cout<<name1<<": "<< "\x1B[34m"<<"\x1B[01m"<<mark1<<"\x1B[0m"<<" pontos.\n";
cout<<name2<<": "<< "\x1B[34m"<<"\x1B[01m"<<mark2<<"\x1B[0m"<<" Pontos.\n\n";
                                };

//4: Recebendo o lance do jogador e ajustando variável de controle de jogadas
void square_game::get_input(){
if((player1==true) && player2==false){
cout<<name1<<" faça a sua jogada.\n";
cout<<"Digite a coordenada x1 correspondente a primeira linha na qual você deseja realizar o seu lance:\n";
cin>>x1;
cout<<"Digite a coordenada y1 correspondente a primeira coluna na qual você deseja realizar o seu lance:\n";
cin>>y1;
cout<<"Digite a coordenada x2 correspondente a segunda linha na qual você deseja realizar o seu lance:\n";
cin>>x2;
cout<<"Digite a coordenada y2 correspondente a segunda coluna na qual você deseja realizar o seu lance:\n";
cin>>y2;
cout<<"\n";
player1=false;
player2=true;
return;
                                    };

if((player1==false) && player2==true){
cout<<name2<<" faça a sua jogada.\n";
cout<<"Digite a coordenada x1 correspondente a primeira linha na qual você deseja realizar o seu lance:\n";
cin>>x1;
cout<<"Digite a coordenada y1 correspondente a primeira coluna na qual você deseja realizar o seu lance:\n";
cin>>y1;
cout<<"Digite a coordenada x2 correspondente a segunda linha na qual você deseja realizar o seu lance:\n";
cin>>x2;
cout<<"Digite a coordenada y2 correspondente a segunda coluna na qual você deseja realizar o seu lance:\n";
cin>>y2;
cout<<"\n";
player1=true;
player2=false;
return;

                                    };

                             };

//5: Realizando um lance
void square_game::make_move(){
if((x1==x2) && (y1!=y2) )
board[2*x1][y1+y2]="-";
if((x1!=x2) && (y1==y2) )
board[x1+x2][2*y1]="|";

                            };

//6: Computando 1 ponto quando um jogador completar um quadrado e redefinindo o fluxo
void square_game::score(){

//JOGADOR1
if(player1==true && player2==false){
//CASO1: PREENCHIMENTO INTERNO
//HORIZONTAL
if(x1==x2 && x2<10 && x2>0){
//ABAIXO
if(board[2*x1+1][y2+y1]==" " && board[2*x1+2][y2+y1]=="-" && board[2*x1+1][y2+y1-1]=="|" && board[2*x1+1][y2+y1+1]=="|"){
mark2++;
player1=true;
player2=false;
board[2*x1+1][y2+y1]==letter1;
return;
                                                                                                                        };
//ACIMA
if(board[2*x1-1][y2+y1]==" " && board[2*x1-2][y2+y1]=="-" && board[2*x1-1][y2+y1-1]=="|" && board[2*x1-1][y2+y1+1]=="|"){
mark2++;
player1=true;
player2=false;
board[2*x1+1][y2+y1]==letter1;
return;
                                                                                                                        };
                           };
//VERTICAL
if(y1==y2 && y2>0 && y2<10){
//DIREITA
if(board[x1+x2][2*y1+1]==" " && board[x1+x2][2*y1+2]=="|" && board[x1+x2-1][2*y1+1]=="-" && board[x1+x2+1][2*y1+1]=="-"){
mark2++;
player1=true;
player2=false;
board[x1+x2][2*y1+1]=letter1;
return;
                 
                                                                                                                    };
//ESQUERDA
if(board[x1+x2][2*y1-1]==" " && board[x1+x2][2*y1-2]=="|" && board[x1+x2-1][2*y1-1]=="-" && board[x1+x2+1][2*y1-1]=="-"){
mark2++;
player1=true;
player2=false;
board[x1+x2][2*y1-1]=letter1;
return;
                                                                                                                    };
                      };

//CASO2: BORDA LATERAL ESQUERDA
if(y1==y2 && y2==0 && board[x1+x2][2*y1+1]==" " && board[x1+x2-1][2*y1+1]=="-" && board[x1+x2+1][2*y1+1]=="-" && board[x1+x2][2*y1+2]=="|"){
mark2++;
player1=true;
player2=false;
board[x1+x2][2*y1+1]=letter1;
return;

              };
//CASO3: BORDA LATERAL DIREITA
if(y1==y2 && y2==10 && board[x1+x2][2*y1-1]==" " && board[x1+x2-1][2*y1-1]=="-" && board[x1+x2+1][2*y1-1]=="-" && board[x1+x2][2*y1-2]=="|"){
mark2++;
player1=true;
player2=false;
board[x1+x2][2*y1-1]=letter1;
return;

              };
//CASO4: BORDA INFERIOR
if(x1==x2 && x2==10 && board[2*x1-1][y1+y2]==" " && board[2*x1-2][y1+y2]=="-" && board[2*x1-1][y1+y2-1]=="|" && board[2*x1-1][y1+y2+1]=="|"){
mark2++;
player1=true;
player2=false;
board[2*x1-1][y1+y2]=letter1;
return;
              };
//CASO5: BORDA SUPERIOR
if(x1==x2 && x2==0 && board[2*x1+1][y1+y2]==" " && board[2*x1+2][y1+y2]=="-" && board[2*x1+1][y1+y2-1]=="|" && board[2*x1+1][y1+y2+1]=="|"){
mark2++;
player1=true;
player2=false;
board[2*x1+1][y1+y2]=letter1;
return;
              };
                                  };//JOGADOR1


//JOGADOR2
if(player1==false && player2==true){
//CASO1: PREENCHIMENTO INTERNO
//HORIZONTAL
if(x1==x2 && x2<10 && x2>0){
//ABAIXO
if(board[2*x1+1][y2+y1]==" " && board[2*x1+2][y2+y1]=="-" && board[2*x1+1][y2+y1-1]=="|" && board[2*x1+1][y2+y1+1]=="|"){
mark1++;
player1=false;
player2=true;
board[2*x1+1][y2+y1]==letter2;
return;
                                                                                                                        };
//ACIMA
if(board[2*x1-1][y2+y1]==" " && board[2*x1-2][y2+y1]=="-" && board[2*x1-1][y2+y1-1]=="|" && board[2*x1-1][y2+y1+1]=="|"){
mark1++;
player1=false;
player2=true;
board[2*x1+1][y2+y1]==letter2;
return;
                                                                                                                        };
                           };
//VERTICAL
if(y1==y2 && y2>0 && y2<10){
//DIREITA
if(board[x1+x2][2*y1+1]==" " && board[x1+x2][2*y1+2]=="|" && board[x1+x2-1][2*y1+1]=="-" && board[x1+x2+1][2*y1+1]=="-"){
mark1++;
player1=false;
player2=true;
board[x1+x2][2*y1+1]=letter2;
return;
                 
                                                                                                                    };
//ESQUERDA
if(board[x1+x2][2*y1-1]==" " && board[x1+x2][2*y1-2]=="|" && board[x1+x2-1][2*y1-1]=="-" && board[x1+x2+1][2*y1-1]=="-"){
mark1++;
player1=false;
player2=true;
board[x1+x2][2*y1-1]=letter2;
return;
                                                                                                                    };
                      };

//CASO2: BORDA LATERAL ESQUERDA
if(y1==y2 && y2==0 && board[x1+x2][2*y1+1]==" " && board[x1+x2-1][2*y1+1]=="-" && board[x1+x2+1][2*y1+1]=="-" && board[x1+x2][2*y1+2]=="|"){
mark1++;
player1=false;
player2=true;
board[x1+x2][2*y1+1]=letter2;
return;

              };
//CASO3: BORDA LATERAL DIREITA
if(y1==y2 && y2==10 && board[x1+x2][2*y1-1]==" " && board[x1+x2-1][2*y1-1]=="-" && board[x1+x2+1][2*y1-1]=="-" && board[x1+x2][2*y1-2]=="|"){
mark1++;
player1=false;
player2=true;
board[x1+x2][2*y1-1]=letter2;
return;

              };
//CASO4: BORDA INFERIOR
if(x1==x2 && x2==10 && board[2*x1-1][y1+y2]==" " && board[2*x1-2][y1+y2]=="-" && board[2*x1-1][y1+y2-1]=="|" && board[2*x1-1][y1+y2+1]=="|"){
mark1++;
player1=false;
player2=true;
board[2*x1-1][y1+y2]=letter2;
return;
              };
//CASO5: BORDA SUPERIOR
if(x1==x2 && x2==0 && board[2*x1+1][y1+y2]==" " && board[2*x1+2][y1+y2]=="-" && board[2*x1+1][y1+y2-1]=="|" && board[2*x1+1][y1+y2+1]=="|"){
mark1++;
player1=false;
player2=true;
board[2*x1+1][y1+y2]=letter2;
return;
              };
                                  };//JOGADOR2
                         };

//7:Função para que detecta fim de jogo quando o tabuleiro está cheio
void square_game::end_game(){
//Variável interna
int status;
//Procedimentos
//Ajustando a variável de controle
status=0;
//Checando se há alguma casa desopada
for(i=0; i<21; ++i){
for(j=0; j<21; ++j){
if(board[i][j]==" ")
status++;
                   };
                   };
if(status==0)
is_end=true;
if(status>0)
is_end=false;
               };
                          
//FUNÇÃO PRINCIPAL DO PROGRAMA
int main(){
//0:Cabeçalho do jogo (título e explicações)
title();
how_to_play();

//1: Variáveis
string token;

//2:Instanciando um objeto da classe principal do jogo
square_game game;

//3: Instanciando o tabuleiro do jogo
game.player_names();
restart:
cout<<"Eis o tabuleiro do jogo dos pontinhos na sua configuração inicial.\n\n";
game.reset_board();
game.print_board();

//4: Executando o primeiro lance de cada jogador
game.get_input();
game.make_move();
game.print_board();
game.get_input();
game.make_move();
game.print_board();

//5:Loop principal do jogo
game.end_game();

while(game.is_end==false){
game.get_input();
game.make_move();
game.score();
game.print_board();
game.end_game();
                         };
//6: Controle do fluxo de jogo
cout<<"Deseja jogar outra partida?\n(Digite 's' para continuar ou presseione qualquer outra tecla para encerra o jogo)\n";
cin>>token;
if(token=="s")
goto restart;

//7:Finalizando o jogo
credits();
end_text();
return 0;
          };
