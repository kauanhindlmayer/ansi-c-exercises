/*
  Supondo que a população de um país A seja da ordem de 80.000 habitantes com uma  taxa  anual  de  
  crescimento  de  3%  e  que  a  população  do  país  B  seja, aproximadamente, de 200.000 habitantes 
  com uma taxa de crescimento anual de 1,5%.  Fazer  um  programa  que  calcule  e  escreva  o  número  
  de  anos  necessários para  que  a  população  do  país  A  ultrapasse  ou  iguale  a  população  do  
  país  B, mantidas essas taxas de crescimento.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    
  int a = 80.000, b = 200.000, tempo = 1;

  while (a <= b) {
    a += a * 0.03;
    b += b * 0.015;
    tempo++;
  }

  printf("Sera necessario %i anos para populacao do pais A ultrapassar a de B.", tempo);
	
	return 0;
} 