#include <stdio.h>

int main() {
    int PQR,QRP,RPQ;// ANGLES OF TRIANGLE PQR

    int PSR,SRP,RPS;//ANGLES OF TRIANGLES PSR

    PSR=RPQ;// THIS DATA IS GIVEN IN THE QUESTION
    QRP=SRP;//THIS ANGLE IS COMMON IN BOTH THE TRIANGLE PQR AND PSR
    // THE CONDITION OF SIMILARTY USED HERE IS (AAA)
    if (PSR == RPQ && QRP == SRP)
    {
        printf("The triangles PQR and SPR similar\n");
    }
    else  printf("The triangles are not similar\n");
    
    int PQ,QR,RP,PS,SR;
    PQ=8;
    SR=3;
    RP=6;
    QR=RP*(RP/SR);
    printf("QR = %d\n", QR);
    PS=(PQ*SR)/RP;
    printf("PS= %d\n",PS);
  int arPQR,arSPR,x;// arPQR represents the area of triangle PQR, similarly with SPR
  x=arPQR/arSPR;
      
  x=(RP/SR)*(RP/SR);
  printf("arPQR/arSPR= %d\n",x);
    return 0;
}
