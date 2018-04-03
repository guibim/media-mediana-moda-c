#include<stdio.h>
#include<stdlib.h>

/* Criador: Guilherme Domingues Bim -
    Data: 02/04/2018
    */


//
        int main(){
 int i,j,a[20]={0},soma=0,n,t,b[20]={0},k=0,c=1,max=0,moda;
 float x=0.0,y=0.0;
 //a = vetor - // n = tamanho do vetor
 // DECLARANDO O TAMANHO DO VETOR
 printf("-----DIGITE O TAMANHO DO VETOR-----\n");
 scanf("%d",&n);

 // LEITURA DOS VALORES
 printf("-----DIGITE OS NUMEROS INTEIROS-----\n");
 for(i=0;i<n;i++){
  scanf("%d",&a[i]);
   if (a[i] < 0){
            printf ("ERRO: Numero invalido, programa encerrado !!");
                exit(0);
            } else{
// MEDIA
  soma= soma+a[i];
    }
  }
 x=(float)soma/(float)n;
 printf("Media\t= %f",x);

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
                if(a[i]>a[j]){
                        t=a[i];
                            a[i]=a[j];
                                    a[j]=t;
                                                    }
                                                }
                                        }
    //MEDIANA
            if(n%2==0)
 y=(float)(a[n/2]+a[(n-1)/2])/2;
 else
 y=a[(n-1)/2];
 printf("\nMediana\t= %f",y);

 // MODA
 for(i=0;i<n-1;i++){
  moda=0;
  for(j=i+1;j<n;j++){
   if(a[i]==a[j]){
    moda++;
        }
   }
  if((moda>max)&&(moda!=0)){
   k=0;
   max=moda;
   b[k]=a[i];
   k++;
   //CASO NÃO TENHA MODA
   }else if(moda==max){
   b[k]=a[i];
   k++;
    }
  }
        for(i=0;i<n;i++){
            if(a[i]==b[i])
                c++;
        }
 if(c==n)
 printf("\nVetor sem moda!");
 else
  {
  printf("\nModa: \t= ");
  for(i=0;i<k;i++)
  printf("%d ",b[i]);


    return 0;

  }
 }

