#include<stdio.h>

float aus_any[8],usd_any[8],eur_any[8],inr_any[8],cad_any[8],bdt_any[8],sgd_any[8];

struct convertmoney
{
    int currancyname;
    float amount;
    int convertedcurrancy;
} slection;
float convert_money(float currancy,float value)
{
    float converted_currancy;
    converted_currancy=currancy*value;
    return converted_currancy;

}
void aus_usd(){
    FILE *austousd;
    char filename[]="aus_usd.txt";
    austousd=fopen(filename,"w");
    aus_any[0]=convert_money(slection.amount,0.73);
    printf("%.2f AUS is converted to %.2f USD\n",slection.amount,aus_any[0]);
    fprintf(austousd,"%.2f\n",aus_any[0]);
    fclose(austousd);

}
void aus_eur(){
    FILE *austoeur;
    char filename[]="aus_eur.txt";
    austoeur=fopen(filename,"w");
    aus_any[1]=convert_money(slection.amount,0.63);
    printf("%.2f AUS is converted to %.2f EUR\n",slection.amount,aus_any[1]);
    fprintf(austoeur,"%.2f\n",aus_any[1]);
    fclose(austoeur);

}
void aus_inr(){
    FILE *austoinr;
    char filename[]="aus_inr.txt";
    austoinr=fopen(filename,"w");
    aus_any[2]=convert_money(slection.amount,54.61);
    printf("%.2f AUS is converted to %.2f INR\n",slection.amount,aus_any[2]);
    fprintf(austoinr,"%.2f\n",aus_any[2]);
    fclose(austoinr);

}
void aus_cad(){
    FILE *austocad;
    char filename[]="aus_cad.txt";
    austocad=fopen(filename,"w");
    aus_any[3]=convert_money(slection.amount,0.92);
    printf("%.2f AUS is converted to %.2f CAD\n",slection.amount,aus_any[3]);
    fprintf(austocad,"%.2f\n",aus_any[3]);
    fclose(austocad);

}
void aus_bdt(){
    FILE *austobdt;
    char filename[]="aus_usd.txt";
    austobdt=fopen(filename,"w");
    aus_any[4]=convert_money(slection.amount,62.25);
    printf("%.2f AUS is converted to %.2f BDT\n",slection.amount,aus_any[4]);
    fprintf(austobdt,"%.2f\n",aus_any[4]);
    fclose(austobdt);

}
void aus_sgd(){
    FILE *austosgd;
    char filename[]="aus_sgd.txt";
    austosgd=fopen(filename,"w");
    aus_any[5]=convert_money(slection.amount,1);
    printf("%.2f AUS is converted to %.2f SGD\n",slection.amount,aus_any[5]);
    fprintf(austosgd,"%.2f\n",aus_any[5]);
    fclose(austosgd);

}

// Australia to any end

//usd to any start

void usd_aud(){
    FILE *usdtoaud;
    char filename[]="usd_aud.txt";
    usdtoaud=fopen(filename,"w");
    usd_any[0]=convert_money(slection.amount,1.36);
    printf("%.2f USD is converted to %.2f AUD\n",slection.amount,usd_any[0]);
    fprintf(usdtoaud,"%.2f\n",usd_any[0]);
    fclose(usdtoaud);

}
void usd_eur(){
    FILE *usdtoeur;
    char filename[]="usd_aud.txt";
    usdtoeur=fopen(filename,"w");
    usd_any[1]=convert_money(slection.amount,0.85);
    printf("%.2f USD is converted to %.2f EUR\n",slection.amount,usd_any[1]);
    fprintf(usdtoeur,"%.2f\n",usd_any[1]);
    fclose(usdtoeur);

}
void usd_inr(){
    FILE *usdtoinr;
    char filename[]="usd_inr.txt";
    usdtoinr=fopen(filename,"w");
    usd_any[2]=convert_money(slection.amount,74.37);
    printf("%.2f USD is converted to %.2f INR\n",slection.amount,usd_any[2]);
    fprintf(usdtoinr,"%.2f\n",usd_any[2]);
    fclose(usdtoinr);

}
void usd_cad(){
    FILE *usdtocad;
    char filename[]="usd_cad.txt";
    usdtocad=fopen(filename,"w");
    usd_any[3]=convert_money(slection.amount,1.26);
    printf("%.2f USD is converted to %.2f CAD\n",slection.amount,usd_any[3]);
    fprintf(usdtocad,"%.2f\n",usd_any[3]);
    fclose(usdtocad);

}
void usd_bdt(){
    FILE *usdtobdt;
    char filename[]="usd_bdt.txt";
    usdtobdt=fopen(filename,"w");
    usd_any[4]=convert_money(slection.amount,84.25);
    printf("%.2f USD is converted to %.2f BDT\n",slection.amount,usd_any[4]);
    fprintf(usdtobdt,"%.2f\n",usd_any[4]);
    fclose(usdtobdt);

}
void usd_sgd(){
    FILE *usdtosgd;
    char filename[]="usd_sgd.txt";
    usdtosgd=fopen(filename,"w");
    usd_any[5]=convert_money(slection.amount,1.36);
    printf("%.2f USD is converted to %.2f SGD\n",slection.amount,usd_any[5]);
    fprintf(usdtosgd,"%.2f\n",usd_any[5]);
    fclose(usdtosgd);
}

//usd to any end
// eur to any start
void eur_aud(){
    FILE *eurtoaud;
    char filename[]="eur_aud.txt";
    eurtoaud=fopen(filename,"w");
    eur_any[0]=convert_money(slection.amount,1.60);
    printf("%.2f EUR is converted to %.2f AUD\n",slection.amount,eur_any[0]);
    fprintf(eurtoaud,"%.2f\n",eur_any[0]);
    fclose(eurtoaud);
}
void eur_usd(){
    FILE *eurtousd;
    char filename[]="eur_usd.txt";
    eurtousd=fopen(filename,"w");
    eur_any[1]=convert_money(slection.amount,1.17);
    printf("%.2f EUR is converted to %.2f USD\n",slection.amount,eur_any[1]);
    fprintf(eurtousd,"%.2f\n",eur_any[1]);
    fclose(eurtousd);
}
void eur_inr(){
    FILE *eurtoinr;
    char filename[]="eur_inr.txt";
    eurtoinr=fopen(filename,"w");
    eur_any[2]=convert_money(slection.amount,87.17);
    printf("%.2f EUR is converted to %.2f INR\n",slection.amount,eur_any[2]);
    fprintf(eurtoinr,"%.2f\n",eur_any[2]);
    fclose(eurtoinr);
}
void eur_cad(){
    FILE *eurtocad;
    char filename[]="eur_cad.txt";
    eurtocad=fopen(filename,"w");
    eur_any[3]=convert_money(slection.amount,1.47);
    printf("%.2f EUR is converted to %.2f CAD\n",slection.amount,eur_any[3]);
    fprintf(eurtocad,"%.2f\n",eur_any[3]);
    fclose(eurtocad);
}
void eur_bdt(){
    FILE *eurtobdt;
    char filename[]="eur_bdt.txt";
    eurtobdt=fopen(filename,"w");
    eur_any[4]=convert_money(slection.amount,99.43);
    printf("%.2f EUR is converted to %.2f BDT\n",slection.amount,eur_any[4]);
    fprintf(eurtobdt,"%.2f\n",eur_any[4]);
    fclose(eurtobdt);
}
void eur_sgd(){
    FILE *eurtosgd;
    char filename[]="eur_sgd.txt";
    eurtosgd=fopen(filename,"w");
    eur_any[5]=convert_money(slection.amount,1.59);
    printf("%.2f EUR is converted to %.2f SGD\n",slection.amount,eur_any[5]);
    fprintf(eurtosgd,"%.2f\n",eur_any[5]);
    fclose(eurtosgd);
}
//eur to end

//inr to start
void inr_aud(){
    FILE *inrtoaud;
    char filename[]="inr_aud.txt";
    inrtoaud=fopen(filename,"w");
    inr_any[0]=convert_money(slection.amount,0.018);
    printf("%.2f INR is converted to %.2f AUD\n",slection.amount,inr_any[0]);
    fprintf(inrtoaud,"%.2f\n",inr_any[0]);
    fclose(inrtoaud);
}
void inr_usd(){
    FILE *inrtousd;
    char filename[]="inr_usd.txt";
    inrtousd=fopen(filename,"w");
    inr_any[1]=convert_money(slection.amount,0.013);
    printf("%.2f INR is converted to %.2f USD\n",slection.amount,inr_any[1]);
    fprintf(inrtousd,"%.2f\n",inr_any[1]);
    fclose(inrtousd);
}
void inr_eur(){
    FILE *inrtoeur;
    char filename[]="inr_eur.txt";
    inrtoeur=fopen(filename,"w");
    inr_any[2]=convert_money(slection.amount,0.011);
    printf("%.2f INR is converted to %.2f EUR\n",slection.amount,inr_any[2]);
    fprintf(inrtoeur,"%.2f\n",inr_any[2]);
    fclose(inrtoeur);
}
void inr_cad(){
    FILE *inrtocad;
    char filename[]="inr_cad.txt";
    inrtocad=fopen(filename,"w");
    inr_any[3]=convert_money(slection.amount,0.017);
    printf("%.2f INR is converted to %.2f CAD\n",slection.amount,inr_any[3]);
    fprintf(inrtocad,"%.2f\n",inr_any[3]);
    fclose(inrtocad);
}
void inr_bdt(){
    FILE *inrtobdt;
    char filename[]="inr_bdt.txt";
    inrtobdt=fopen(filename,"w");
    inr_any[4]=convert_money(slection.amount,1.14);
    printf("%.2f INR is converted to %.2f BDT\n",slection.amount,inr_any[4]);
    fprintf(inrtobdt,"%.2f\n",inr_any[4]);
    fclose(inrtobdt);
}
void inr_sgd(){
    FILE *inrtosgd;
    char filename[]="inr_sgd.txt";
    inrtosgd=fopen(filename,"w");
    inr_any[5]=convert_money(slection.amount,0.018);
    printf("%.2f INR is converted to %.2f SGD\n",slection.amount,inr_any[5]);
    fprintf(inrtosgd,"%.2f\n",inr_any[5]);
    fclose(inrtosgd);
}
//INR to any end
//cad to any start

void cad_aud(){
    FILE *cadtoaud;
    char filename[]="cad_aud.txt";
    cadtoaud=fopen(filename,"w");
    cad_any[0]=convert_money(slection.amount,1.08);
    printf("%.2f CAD is converted to %.2f AUD\n",slection.amount,cad_any[0]);
    fprintf(cadtoaud,"%.2f\n",cad_any[0]);
    fclose(cadtoaud);
}
void cad_usd(){
    FILE *cadtousd;
    char filename[]="cad_usd.txt";
    cadtousd=fopen(filename,"w");
    cad_any[1]=convert_money(slection.amount,0.80);
    printf("%.2f CAD is converted to %.2f USD\n",slection.amount,cad_any[1]);
    fprintf(cadtousd,"%.2f\n",cad_any[1]);
    fclose(cadtousd);
}
void cad_eur(){
    FILE *cadtoeur;
    char filename[]="cad_eur.txt";
    cadtoeur=fopen(filename,"w");
    cad_any[2]=convert_money(slection.amount,0.68);
    printf("%.2f CAD is converted to %.2f EUR\n",slection.amount,cad_any[2]);
    fprintf(cadtoeur,"%.2f\n",cad_any[2]);
    fclose(cadtoeur);
}
void cad_inr(){
    FILE *cadtoinr;
    char filename[]="cad_inr.txt";
    cadtoinr=fopen(filename,"w");
    cad_any[3]=convert_money(slection.amount,59.34);
    printf("%.2f CAD is converted to %.2f INR\n",slection.amount,cad_any[3]);
    fprintf(cadtoinr,"%.2f\n",cad_any[3]);
    fclose(cadtoinr);
}
void cad_bdt(){
    FILE *cadtobdt;
    char filename[]="cad_bdt.txt";
    cadtobdt=fopen(filename,"w");
    cad_any[4]=convert_money(slection.amount,67.59);
    printf("%.2f CAD is converted to %.2f BDT\n",slection.amount,cad_any[4]);
    fprintf(cadtobdt,"%.2f\n",cad_any[4]);
    fclose(cadtobdt);
}
void cad_sgd(){
    FILE *cadtosgd;
    char filename[]="cad_sgd.txt";
    cadtosgd=fopen(filename,"w");
    cad_any[5]=convert_money(slection.amount,1.08);
    printf("%.2f CAD is converted to %.2f SGD\n",slection.amount,cad_any[5]);
    fprintf(cadtosgd,"%.2f\n",cad_any[5]);
    fclose(cadtosgd);
}
//bdt to any start

void bdt_aud(){
    FILE *bdttoaud;
    char filename[]="bdt_aud.txt";
    bdttoaud=fopen(filename,"w");
    bdt_any[0]=convert_money(slection.amount,0.016);
    printf("%.2f BDT is converted to %.2f AUD\n",slection.amount,bdt_any[0]);
    fprintf(bdttoaud,"%.2f\n",bdt_any[0]);
    fclose(bdttoaud);
}
void bdt_usd(){
    FILE *bdttousd;
    char filename[]="bdt_usd.txt";
    bdttousd=fopen(filename,"w");
    bdt_any[1]=convert_money(slection.amount,0.012);
    printf("%.2f BDT is converted to %.2f USD\n",slection.amount,bdt_any[1]);
    fprintf(bdttousd,"%.2f\n",bdt_any[1]);
    fclose(bdttousd);
}
void bdt_eur(){
    FILE *bdttoeur;
    char filename[]="bdt_eur.txt";
    bdttoeur=fopen(filename,"w");
    bdt_any[2]=convert_money(slection.amount,0.010);
    printf("%.2f BDT is converted to %.2f EUR\n",slection.amount,bdt_any[2]);
    fprintf(bdttoeur,"%.2f\n",bdt_any[2]);
    fclose(bdttoeur);
}
void bdt_inr(){
    FILE *bdttoinr;
    char filename[]="bdt_inr.txt";
    bdttoinr=fopen(filename,"w");
    bdt_any[3]=convert_money(slection.amount,0.88);
    printf("%.2f BDT is converted to %.2f INR\n",slection.amount,bdt_any[3]);
    fprintf(bdttoinr,"%.2f\n",bdt_any[3]);
    fclose(bdttoinr);
}
void bdt_cad(){
    FILE *bdttocad;
    char filename[]="bdt_cad.txt";
    bdttocad=fopen(filename,"w");
    bdt_any[4]=convert_money(slection.amount,0.015);
    printf("%.2f BDT is converted to %.2f CAD\n",slection.amount,bdt_any[4]);
    fprintf(bdttocad,"%.2f\n",bdt_any[4]);
    fclose(bdttocad);
}
void bdt_sgd(){
    FILE *bdttosgd;
    char filename[]="bdt_sgd.txt";
    bdttosgd=fopen(filename,"w");
    bdt_any[5]=convert_money(slection.amount,0.016);
    printf("%.2f BDT is converted to %.2f SGD\n",slection.amount,bdt_any[5]);
    fprintf(bdttosgd,"%.2f\n",bdt_any[5]);
    fclose(bdttosgd);
}

//bdt to any end

//sgd to any start
void sgd_aud(){
    FILE *sgdtoaud;
    char filename[]="sgd_aud.txt";
    sgdtoaud=fopen(filename,"w");
    sgd_any[0]=convert_money(slection.amount,1);
    printf("%.2f SGD is converted to %.2f AUD\n",slection.amount,sgd_any[0]);
    fprintf(sgdtoaud,"%.2f\n",sgd_any[0]);
    fclose(sgdtoaud);
}
void sgd_usd(){
    FILE *sgdtousd;
    char filename[]="sgd_usd.txt";
    sgdtousd=fopen(filename,"w");
    sgd_any[1]=convert_money(slection.amount,0.74);
    printf("%.2f SGD is converted to %.2f USD\n",slection.amount,sgd_any[1]);
    fprintf(sgdtousd,"%.2f\n",sgd_any[1]);
    fclose(sgdtousd);
}
void sgd_eur(){
    FILE *sgdtoeur;
    char filename[]="sgd_eur.txt";
    sgdtoeur=fopen(filename,"w");
    sgd_any[2]=convert_money(slection.amount,0.63);
    printf("%.2f SGD is converted to %.2f EUR\n",slection.amount,sgd_any[2]);
    fprintf(sgdtoeur,"%.2f\n",sgd_any[2]);
    fclose(sgdtoeur);
}
void sgd_inr(){
    FILE *sgdtoinr;
    char filename[]="sgd_inr.txt";
    sgdtoinr=fopen(filename,"w");
    sgd_any[3]=convert_money(slection.amount,54.80);
    printf("%.2f SGD is converted to %.2f INR\n",slection.amount,sgd_any[3]);
    fprintf(sgdtoinr,"%.2f\n",sgd_any[3]);
    fclose(sgdtoinr);
}
void sgd_cad(){
    FILE *sgdtocad;
    char filename[]="sgd_cad.txt";
    sgdtocad=fopen(filename,"w");
    sgd_any[4]=convert_money(slection.amount,0.92);
    printf("%.2f SGD is converted to %.2f CAD\n",slection.amount,sgd_any[4]);
    fprintf(sgdtocad,"%.2f\n",sgd_any[4]);
    fclose(sgdtocad);
}
void sgd_bdt(){
    FILE *sgdtobdt;
    char filename[]="sgd_bdt.txt";
    sgdtobdt=fopen(filename,"w");
    sgd_any[5]=convert_money(slection.amount,62.43);
    printf("%.2f SGD is converted to %.2f BDT\n",slection.amount,sgd_any[5]);
    fprintf(sgdtobdt,"%.2f\n",sgd_any[5]);
    fclose(sgdtobdt);
}

int main(){
    int c;
    do
    {

        
        printf("\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("\t\t\t+++++++++++++++++++++++++  CUARRANCY CONVERTER  +++++++++++++++++++++++\n");
        printf("\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n"); 

        printf("\n\t\tPress any key to continue...");
        getch();
    
        printf("\n\n");


        printf ("                              <1>  To Australian AUS\n");
        printf ("                              <2>  To United States dollar USD\n");
        printf ("                              <3>  To European EUR\n");
        printf ("                              <4>  To Indian INR\n");
        printf ("                              <5>  To Canadian CAD\n");
        printf ("                              <6>  To Bangladeshi taka BDT\n");
        printf ("                              <7> To Singapore dollar SGD\n");

        printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("                                               Enter your curancy : "); 
        scanf("%d",&slection.currancyname);
        printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        switch (slection.currancyname)
        {
        case 1:
            printf("\n\n\n\n                                             Your total amount : ");
            scanf("%f",&slection.amount);
            system("cls");
            printf("\n\t\tPress any key to continue...");
            getch();
            printf("\n\n\n");
            printf ("                              <1>  To United States dollar USD\n");
            printf ("                              <2>  To European EUR\n");
            printf ("                              <3>  To Indian INR\n");
            printf ("                              <4>  To Canadian CAD\n");
            printf ("                              <5>  To Bangladeshi taka BDT\n");
            printf ("                              <6> To Singapore dollar SGD\n");

            
             
            printf("                                               Enter your converted curancy : "); 
            scanf("%d",&slection.convertedcurrancy);

            printf("\n\t\tPress any key to continue...");
            getch();
            printf("\n\n");

            switch (slection.convertedcurrancy)
            {
            case 1:
                aus_usd();
                break;
            case 2:
                aus_eur();
                break;
            case 3:
                aus_inr();
                break;
            case 4:
                aus_cad();
                break;
            case 5:
                aus_bdt();
                break;
            case 6:
                aus_sgd();
                break;
            
            default:
                printf("\n\nInvalid input");
                break;
            }

            break;
        case 2:
            printf("\n\n\n\n                                             Your total amount : ");
            scanf("%f",&slection.amount);
            system("cls");
            printf("\n\t\tPress any key to continue...");
            getch();
            printf("\n\n\n");
            printf ("                              <1>  To Australian dollar AUD\n");
            printf ("                              <2>  To European EUR\n");
            printf ("                              <3>  To Indian INR\n");
            printf ("                              <4>  To Canadian CAD\n");
            printf ("                              <5>  To Bangladeshi taka BDT\n");
            printf ("                              <6> To Singapore dollar SGD\n");

            
             
            printf("                                               Enter your converted curancy : "); 
            scanf("%d",&slection.convertedcurrancy);

            printf("\n\t\tPress any key to continue...");
            getch();
            printf("\n\n");

            switch (slection.convertedcurrancy)
            {
            case 1:
                usd_aud();
                break;
            case 2:
                usd_eur();
                break;
            case 3:
                usd_inr();
                break;
            case 4:
                usd_cad();
                break;
            case 5:
                usd_bdt();
                break;
            case 6:
                usd_sgd();
                break;
            
            default:
                printf("\n\nInvalid input");
                break;
            }
            break;
        case 3:
            printf("\n\n\n\n                                             Your total amount : ");
            scanf("%f",&slection.amount);
            system("cls");
            printf("\n\t\tPress any key to continue...");
            getch();
            printf("\n\n\n");
            printf ("                              <1>  To Australian dollar AUD\n");
            printf ("                              <2>  To United state dollar USD\n");
            printf ("                              <3>  To Indian INR\n");
            printf ("                              <4>  To Canadian CAD\n");
            printf ("                              <5>  To Bangladeshi taka BDT\n");
            printf ("                              <6>  To Singapore dollar SGD\n");

            
             
            printf("                                               Enter your converted curancy : "); 
            scanf("%d",&slection.convertedcurrancy);

            printf("\n\t\tPress any key to continue...");
            getch();
            printf("\n\n");

            switch (slection.convertedcurrancy)
            {
            case 1:
                eur_aud();
                break;
            case 2:
                eur_usd();
                break;
            case 3:
                eur_inr();
                break;
            case 4:
                eur_cad();
                break;
            case 5:
                eur_bdt();
                break;
            case 6:
                eur_sgd();
                break;
            
            default:
                printf("\n\nInvalid input");
                break;
            }
            break;
        case 4:
            printf("\n\n\n\n                                             Your total amount : ");
            scanf("%f",&slection.amount);
            system("cls");
            printf("\n\t\tPress any key to continue...");
            getch();
            printf("\n\n\n");
            printf ("                              <1>  To Australian dollar AUD\n");
            printf ("                              <2>  To United state dollar USD\n");
            printf ("                              <3>  To European EUR\n");
            printf ("                              <4>  To Canadian CAD\n");
            printf ("                              <5>  To Bangladeshi taka BDT\n");
            printf ("                              <6>  To Singapore dollar SGD\n");

            
             
            printf("                                               Enter your converted curancy : "); 
            scanf("%d",&slection.convertedcurrancy);

            printf("\n\t\tPress any key to continue...");
            getch();
            printf("\n\n");

            switch (slection.convertedcurrancy)
            {
            case 1:
                inr_aud();
                break;
            case 2:
                inr_usd();
                break;
            case 3:
                inr_eur();
                break;
            case 4:
                inr_cad();
                break;
            case 5:
                inr_bdt();
                break;
            case 6:
                inr_sgd();
                break;
            
            default:
                printf("\n\nInvalid input");
                break;
            }
            break;
        case 5:
            printf("\n\n\n\n                                             Your total amount : ");
            scanf("%f",&slection.amount);
            system("cls");
            printf("\n\t\tPress any key to continue...");
            getch();
            printf("\n\n\n");
            printf ("                              <1>  To Australian dollar AUD\n");
            printf ("                              <2>  To United state dollar USD\n");
            printf ("                              <3>  To European EUR\n");
            printf ("                              <4>  To Indian Rupee INR\n");
            printf ("                              <5>  To Bangladeshi taka BDT\n");
            printf ("                              <6>  To Singapore dollar SGD\n");

            
             
            printf("                                               Enter your converted curancy : "); 
            scanf("%d",&slection.convertedcurrancy);

            printf("\n\t\tPress any key to continue...");
            getch();
            printf("\n\n");

            switch (slection.convertedcurrancy)
            {
            case 1:
                cad_aud();
                break;
            case 2:
                cad_usd();
                break;
            case 3:
                cad_eur();
                break;
            case 4:
                cad_inr();
                break;
            case 5:
                cad_bdt();
                break;
            case 6:
                cad_sgd();
                break;
            
            default:
                printf("\n\nInvalid input");
                break;
            }
            break;
        case 6:
            printf("\n\n\n\n                                             Your total amount : ");
            scanf("%f",&slection.amount);
            system("cls");
            printf("\n\t\tPress any key to continue...");
            getch();
            printf("\n\n\n");
            printf ("                              <1>  To Australian dollar AUD\n");
            printf ("                              <2>  To United state dollar USD\n");
            printf ("                              <3>  To European EUR\n");
            printf ("                              <4>  To Indian Rupee INR\n");
            printf ("                              <5>  To Canadian Dollar CAD\n");
            printf ("                              <6>  To Singapore dollar SGD\n");

            
             
            printf("                                               Enter your converted curancy : "); 
            scanf("%d",&slection.convertedcurrancy);

            printf("\n\t\tPress any key to continue...");
            getch();
            printf("\n\n");

            switch (slection.convertedcurrancy)
            {
            case 1:
                bdt_aud();
                break;
            case 2:
                bdt_usd();
                break;
            case 3:
                bdt_eur();
                break;
            case 4:
                bdt_inr();
                break;
            case 5:
                bdt_cad();
                break;
            case 6:
                bdt_sgd();
                break;
            
            default:
                printf("\n\nInvalid input");
                break;
            }
            break;
        case 7:
            printf("\n\n\n\n                                             Your total amount : ");
            scanf("%f",&slection.amount);
            system("cls");
            printf("\n\t\tPress any key to continue...");
            getch();
            printf("\n\n\n");
            printf ("                              <1>  To Australian dollar AUD\n");
            printf ("                              <2>  To United state dollar USD\n");
            printf ("                              <3>  To European EUR\n");
            printf ("                              <4>  To Indian Rupee INR\n");
            printf ("                              <5>  To Canadian Dollar CAD\n");
            printf ("                              <6>  To Bangladeshi Taka BDT\n");

            
             
            printf("                                               Enter your converted curancy : "); 
            scanf("%d",&slection.convertedcurrancy);

            printf("\n\t\tPress any key to continue...");
            getch();
            printf("\n\n");

            switch (slection.convertedcurrancy)
            {
            case 1:
                sgd_aud();
                break;
            case 2:
                sgd_usd();
                break;
            case 3:
                sgd_eur();
                break;
            case 4:
                sgd_inr();
                break;
            case 5:
                sgd_cad();
                break;
            case 6:
                sgd_bdt();
                break;
            
            default:
                printf("\n\nInvalid input");
                break;
            }
            break;


        default:
            printf("\n\nInvalid input");
            break;
        }
        
        printf("Print 0 to exit : ");
        scanf("%d",&c);
    } while (c!=0);
    
}