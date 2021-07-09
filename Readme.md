# Pesquisa e ordenação de dados

## Autor: Rafael Geovani Omodei


## Descrição do projeto
O objetivo desse projeto é desenvolver métodos de ordenação e apresentar as estatísticas de obtida na ordenação dos dados. 

## Sumario
 
 * Como executar o projeto
 * Resultado

## Resultado
 
[Palhanilha com as infirmações de saída](https://docs.google.com/spreadsheets/d/1d3DbFcWBWvoXuus47X4YwXXZXZa96CEPuhySlprdPCA/edit?usp=sharing).

## Dependência

* gcc


## Comando para executar o projeto

```
$ ./main
```


## Compilar bibliotecas

```
$ gcc -c nomeDaBiblioteca -o nameDaBibliotecaDeSaída.o
```

## Compilando biblioteca de forma independente

```
$ gcc nameDaBibliotecaDeSaída.o -c main.c -o nomeDoPrograma

```

## Criando pacote de biblioteca

```
$ ar ruv nomeDoPacoteDeBliblioteca.a nameDaBibliotecaDeSaída1.o nameDaBibliotecaDeSaída1.o
$ ranlib nomeDoPacoteDeBliblioteca.a
$ gcc -o nomeDoPrograma main.c nomeDoPacoteDeBliblioteca.a
```