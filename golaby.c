# include <stdio.h>

void mosavi_yab(char alamat[], int tedad_shart, int jadval[][], int abaad, int reshte[][], int javab[], int visit[][]);

int main(){
    int abaad, tedad_shart,plus=0,minus=0,zarb=0,taghsim=0,mod=0;
    scanf("%d %d", &abaad, &tedad_shart);
    int reshte[tedad_shart][abaad + 1], javab[tedad_shart];
    char alamat[tedad_shart];
    for (int i = 0; i < tedad_shart; i++){
        int k;
        scanf("%d", &k);
        reshte[i][0] = k;
        for (int j = 1; j < k + 1; j++){
            scanf("%d", &reshte[i][j]);
        }
        scanf(" %c %d", &alamat[i], &javab[i]);
    }
/*    for (int i = 0; i < tedad_shart; i++){
        for (int j = 0; j < reshte[i][0] + 1; j++){
            printf("%d ", reshte[i][j]);
        }
        printf(" %d %c\n", javab[i], alamat[i]);
    }*/
    int jadval[abaad][abaad], visit[abaad][abaad];
    for (int i = 0; i < abaad; i++){
        for (int j = 0; j < abaad; j++){
            jadval[i][j] = 0;
            visit[i][j] = 0;
        }
    }
    mosavi_yab(alamt, tedad_shart, jadval, abaad, reshte, javab, visit);



    return 0;
}

void mosavi_yab(char alamat[], int tedad_shart, int jadval[][], int abaad, int reshte[][], int javab[], int visit[][]){
    int k, t;
    for (int i = 0; i < tedad_shart; i++){
        if (alamat[i] == '='){
            k = reshte[i][1] / abaad;
            t = reshte[i][1] % abaad;
            jadval[k][t] = javab[i];
            visit[k][t] = 1;
        }
    }
}

int check(jaddval[][], int i, int j, int abaad){
    int counter = 0;
    for (int k = 0; k < abaad; k++){
        if (jadval[i][k] == jadval[i][j]){
            counter++;
        }
    }
    for(int h=0;h<abaad;h++){
        if (jadval[h][j] == jadval[i][j]){
            counter++;
        }
    }

    if(counetr>2){
        return 0;
    }
    else{
        return 1;
    }
}
int check_Total(int alamat[],int javab[],int reshte[][],i,minus,plus,zarb,taghsim,mod){


    if(alamat[i]=='+'){
        for(int j=0;j<reshte[i][0];j++){
       plus+=reshte[i][j];
    }
    if(plus==javab[i]){
            return 1;
    }
        else{
            return;
    }
    }
    else if(alamat[i]=='-'){

        minus=abs(reshte[i][j]-reshte[i][j+1]);

        if(minus==javab[i]){
            return 1;
        }
        else{
            return;
        }
    }
    else if(alamt[i]=='*'){
        for(int k=0;k<reshte[i][0];k++){
        zarb*=a[i][j];

        }
        if(zarb==javab[i]){
            return 1;
        }
        else{
            return 0;
        }
    }

    else if(alamat[i]=='/'){

        if(reshte[i][j]!=reshte[i][j+1]){
        taghsim=reshte[i][j]/reshte[i][j+1]+reshte[i][j+]/reshte[i][j];
        }

        else{
        taghsim=1;
        }

        if(taghsim==javab[i]){
            return 1;
        }
        else{
            return 0;
        }

    }

    else{

        minus=abs(reshte[i][j]-reshte[i][j+1]);
        mod=minus%javab[i];

        if(mod==0){
            return 1
        }
        else{
            return 0;
        }
    }

    }








