#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qual,quant,j;
    float v,r,i,res,soma,a,b;

    printf("\nQual grandeza deseja calcular? (1)V-TENSAO, (2)R-RESISTENCIA, (3)i-CORRENTE \n");
    printf("\nPara calcular associacao digite? (4)SERIE, (5)PARALELO\n");
     scanf("%d",&qual);

    if(qual==1){
        printf("\nDigite o valor de R: ");
        scanf("%f",&r);

        printf("\nDigite o valor de i: ");
        scanf("%f",&i);

        v=r*i;
        if(v>=0){
            printf("\nO valor da tensao e: %f\n",v);
        }else
        printf("\nERRO.\n");

    }
    if(qual==2){
        printf("\nDigite o valor de V: ");
        scanf("%f",&v);

        printf("\nDigite o valor de i: ");
        scanf("%f",&i);

        r=v/i;
        if(r>=0){
            printf("\nO valor da resistencia e: %f\n",r);
        }else
        printf("\nERRO.\n");

    }
    if(qual==3){
        printf("\nDigite o valor de V: ");
        scanf("%f",&v);

        printf("\nDigite o valor de R: ");
        scanf("%f",&r);

        i=v/r;
        if(i>=0){
            printf("\nO valor da corrente e: %f\n",i);
        }else
        printf("\nERRO.\n");

    }
    if(qual==4){
        printf("\nDigite quantos resistores tem sua corrente: ");
        scanf("%d",&quant);
        for(j=1; j<=quant; j++){
            printf("\nDigite o valor do resistor %d: ",j);
            scanf("%f",&res);
            soma=soma+res;
            }
        if(soma>=0){
        printf("\nO valor da resistencia equivalente e: %f\n",soma);
        }else
        printf("\nERRO.\n");

        }


    if(qual==5){
        printf("\nDigite quantos resistores tem sua corrente: ");
        scanf("%d",&quant);
        for(j=1; j<=quant; j++){
            printf("\nDigite o valor do resistor %d: ",j);
            scanf("%f",&res);
            a = 1 / res;
            b = a + b;
            soma = 1 / b;

            }
        if(soma>=0){
        printf("\nO valor da resistencia equivalente e: %f\n",soma);
        }else
        printf("\nERRO.\n");

        }



    if(qual!=1&&qual!=2&&qual!=3&&qual!=4&&qual!=5){
        printf("\nERRO ESCOLHA INCORRETA.\n");
    }



    return 0;
}
