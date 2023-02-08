//Funções de texto auxiliar do jogos dos quadrados

//Cabeçalho
#include<cstdlib>
#include<iostream>
using namespace std;

//Titulo do jogo
void title(){
//Variáveis (sequência de escapes ASCII)
const int x=34;
const int y=22;
const int z=01;
//Texto
printf("\033[%dm\033[%dm\033[%dm     {__                                       {__                     \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm     {__                                       {__                     \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm     {__   {__       {__      {__              {__   {__     {____     \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm     {__ {__  {__  {__  {__ {__  {__       {__ {__ {__  {__ {__        \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm     {__{__    {__{__   {__{__    {__     {_   {__{__    {__  {___     \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm{_   {__ {__  {__  {__  {__ {__  {__      {_   {__ {__  {__     {__    \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm {____     {__         {__    {__          {__ {__   {__    {__ {__    \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm                    {__                                                \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm                             {__                                       \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm                             {__   {_         {__                      \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm{_ {__     {__    {__ {__  {_{_ {_   {__ {__  {__        {__     {____ \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm{_  {__  {__  {__  {__  {__  {__  {__ {__  {__{_ {_    {__  {__ {__    \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm{_   {__{__    {__ {__  {__  {__  {__ {__  {__{__  {__{__    {__  {___ \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm{__ {__  {__  {__  {__  {__  {__  {__ {__  {__{_   {__ {__  {__     {__\033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm{__        {__    {___  {__   {__ {__{___  {__{__  {__   {__    {__ {__\033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm{__                                                                    \033[0m\n", x, y, z);
//Pausa
int flag1=cin.get();
            };

//Explicação de como funciona o aplicativo
void how_to_play(){
//Variáveis 
const int x=01;
//Texto
printf("\033[%dm\nEste é uma versão do jogo dos pontinhos.\nNeste jogo o objetivo é ligar pontos em uma malha rentangular e  fechar o maior número de quadrados possíveis.\nQuando um jogador fgechar um quadrado ele coloca nele um símbolo que o identifica, ao final do jogo quem completar mais quadrados ganha.\033[0m\n", x);
printf("\033[%dm\nNesta versão o usuário joga inserindo as cooodernadas iniciais dos pontos que serão conectados.\nNesta versão adotamos as seguintes conveções: as coordenadas do ponto inicial são x1(linha) e y1(coluna) e as coordenadas do ponto inicial são x2(linha) e y2(coluna).\nAs coordenadas são solicitados ao jogador da vez, atenção no momento de entrar dados no jogo, entradas não adequadas podem acarretar erros de lógica no programa.\nOs pontos selecionados são conectados por um traço na horizontal '-' ou na vertical conforme a posição relativa entre eles.\033[0m\n", x);
printf("\033[%dm\nUse sempre as seguintes convenções para facilitar:\033[0m\n", x);
printf("\033[%dm ----->Esquerda para direita (eixo x)\033[0m\n", x);
printf("\n");
printf("\033[%dm   |  +(x1, y1)                        \033[0m\n", x);
printf("\033[%dm   |                                   \033[0m\n", x);
printf("\033[%dm   |            +(x2, y2)              \033[0m\n", x);
printf("\033[%dm  \\|/                                  \033[0m\n", x);
printf("\033[%dm   *  Cima para baixo (eixo y)         \033[0m\n", x);
printf("\033[%dm\nO tabuleiro do jogo contém coordenadas para referência.\033[0m", x);
//Pausa
int flag1=cin.get();

                  };

//Créditos
void credits(){
//Variáveis 
const int x=95;
//Texto
printf("\033[%dm Escrito por Elias Rodrigues Emídio.\n\033[0m", x);
              };

//Despedida
void end_text(){
//Variáveis (sequência de escapes ASCII)
const int x=34;
const int y=06;
const int z=01;
//Texto
printf("\033[%dm\033[%dm\033[%dm     {____     {__                                        {__      \033[0m\n", x, y, z);                                   
printf("\033[%dm\033[%dm\033[%dm   {__    {__  {__              {_                        {__         \033[0m\n", x, y, z);                                
printf("\033[%dm\033[%dm\033[%dm {__        {__{__      {_ {___      {__      {__         {__   {__         {_ {__     {__    {_ {___ \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm {__        {__{__ {__   {__   {__ {__  {__ {__  {__  {__ {__ {__  {__      {_  {__  {__  {__  {__    \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm {__        {__{__   {__ {__   {__{__   {__{__   {__ {_   {__{__    {__     {_   {__{__    {__ {__    \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm   {__     {__ {__   {__ {__   {__ {__  {__{__   {__ {_   {__ {__  {__      {__ {__  {__  {__  {__    \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm     {____     {__ {__  {___   {__     {__   {__ {___ {__ {__   {__         {__        {__    {___    \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm                                    {__                                     {__     \033[0m\n", x, y, z);                  
printf("\033[%dm\033[%dm\033[%dm  \033[0m\n", x, y, z);                                                                                                                                                                                                        
printf("\033[%dm\033[%dm\033[%dm \033[0m\n", x, y, z);                                                                                                     
printf("\033[%dm\033[%dm\033[%dm                                                {__     {__     {__    \033[0m\n", x, y, z);                               
printf("\033[%dm\033[%dm\033[%dm    {__                                         {__     {__     {__      \033[0m\n", x, y, z);                             
printf("\033[%dm\033[%dm\033[%dm          {__       {__      {__    {_ {___     {__     {__     {__   \033[0m\n", x, y, z);                                
printf("\033[%dm\033[%dm\033[%dm    {__ {__  {__  {__  {__ {__  {__  {__        {_      {_      {_   \033[0m\n", x, y, z);                                 
printf("\033[%dm\033[%dm\033[%dm    {__{__    {__{__   {__{__   {__  {__        {_      {_      {_   \033[0m\n", x, y, z);                                 
printf("\033[%dm\033[%dm\033[%dm    {__ {__  {__  {__  {__{__   {__  {__  \033[0m\n", x, y, z);                                                            
printf("\033[%dm\033[%dm\033[%dm    {__   {__         {__   {__ {___{___        {__     {__     {__        \033[0m\n", x, y, z);                           
printf("\033[%dm\033[%dm\033[%dm {___              {__     \033[0m\n", x, y, z);                                                                          
//Pausa
int flag1=cin.get();
               };
