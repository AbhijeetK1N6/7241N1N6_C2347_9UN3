#ihnclude<stdio.h>
int main(){
    int transmat[3][3],matarr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j,k,tempo;
    int addymat[3][3],multimat[3][3],subtmat[3][3];
    //Transpose Logic
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            transmat[i][j] = matarr[j][i];
        }
    }
    //Printijng Original Matrix
    printf("ORIGINAL MATRIX IS :- \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",matarr[i][j]);
        }
        printf("\n");
    }
    //Prining Transpose Matrix
    printf("\nTRANSPOSED MATRIX IS :- \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",transmat[i][j]);
        }
        printf("\n");
    }
    
    //Addition Logic
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            addymat[i][j]= matarr[i][j] + transmat[i][j];
        }
    }
    //Printing Added Matrix
    printf("\nADDED MATRIX IS :- \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",addymat[i][j]);
        }
        printf("\n");
    }
    
    //SUBTRACTION Logic
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            subtmat[i][j]= matarr[i][j] - transmat[i][j];
        }
    }
    //Printing Subtracted Matrix
    printf("\nSUBTRACTED MATRIX IS :- \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",subtmat[i][j]);
        }
        printf("\n");
    }
    
    //MULTIPLICATION Logic
    for(i=0;i<3;++i){
        for(j=0;j<3;++j){
            multimat[i][j]=0;
            for(k=0;k<3;++k){
                multimat[i][j] += matarr[i][k] * transmat[k][j];
            }
        }
    }
    /////////Printing Multipiled Matrix
    printf("\nMULTIPLIED MATRIX IS :- \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",multimat[i][j]);
        }
        printf("\n");
    }
}
//EndOfTheCode
