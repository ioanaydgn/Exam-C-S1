#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//#include <conio.h>
//er#include <caca_conio.h>

char fAfisareOpt(void);
void autor(void);
///void citireTab(int *v = (int*) malloc(sizeof int)*1000, int n, int m);

/*int main() {
    int i,j,n1,m;
    int *v = (int*)malloc(sizeof (int)*1000);
    char opt;
    git:

    switch ( fAfisareOpt ()) {
        case 'Z':
            exit(0);
            break;
        case 'D':
            autor();
            break;
        case 'Q':
        yeni:
            printf("Kac tane dizi girilecek: ");
            scanf("%d",&n1);
            if(n1>=1000)
            {
                printf("Lutfen 1000'den kucuk sayi giriniz..\n");
                goto yeni;
            }
            else
            {
                v=(int*) malloc(n1*sizeof (int ));

                for(i=0;i<n1;i++)
                {
                    printf("[%d] :",i);
                    scanf("%d",&v);
                }
                getchar();
                break;

            }
        case 'W':
            printf("\nAfisare vectori\n");
            printf("V: ");
            for(i=0;i<n1;i++)
            {
                printf("%d",v);
            }
            printf("\n");
            getchar();
            break;


    }
    */

    int main(void) {
        int i,numar,j,k,temp,a;
        int *v;
        char opt;
        do{
            switch(fAfisareOpt())
            {
                case 'Q': printf("\nCitire vertori\n");
                yeni:
                    printf("V lungi:");
                    scanf("%d",&numar);

                    //Dati numar V
                    /*for (i=0; i<numar;i++){
                        printf("%d ) Dati numar:",i+1);
                        scanf("%d",&v[i]);
                    }*/
                    if(numar>=1000)
                    {
                        printf("Lutfen 1000'den kucuk sayi giriniz..\n");
                        goto yeni;
                    }
                    else
                    {
                        v=(int*) malloc(numar*sizeof (int ));

                        for(i=0;i<numar;i++)
                        {
                            printf("[%d] Dati numar :",i+1);
                            scanf("%d",&v[i]);
                        }
                    }
                    getchar();
                    break;
                case 'W': printf("\nAfisare vectori\n");
                    printf("V: ");
                    for(i=0; i<numar; i++)
                        printf("%d, ",v[i]);
                    printf("\n");
                    getchar();
                    break;
                case 'A': printf("\nAfisare numara prime\n");
                    printf("Prime numar:");
                    for(i=0; i<numar;i++)
                    {
                        int s=0;
                        for(int j=2;j<v[i];j++)
                        {
                            int k=v[i]%j;
                            if(k==0)
                            {
                                s=1;
                            }
                        }
                        if(s==0)
                        {
                            if(v[i] !=1 && v[i] !=0)
                            {
                                printf("%d, ",v[i]);
                            }
                        }
                    }
                    printf("\n");
                    getchar();
                    break;
                case 'E':
                    printf("\nElemente pare\n ");
                    printf("Pare: ");
                    for(i=0;i<=numar;i++)
                    {
                        if(i%2==0)
                            printf("%d ,",v[i]);
                    }
                    printf("\n");
                case 'U': printf("\n Suma sir \n");
                printf("Suma : ");
                int toplam=0;
                for(i=0;i<numar;i++)
                {
                    toplam+=v[i];
                }
                printf(" %d",toplam);
                    getchar();
                    break;
                case 'D':
                    autor();
                    getchar();
                    break;
                case 'Z':
                    exit(0);
                default:printf("\nOptiune invalida!");
            }
        }
        while(1);
        return 0;
    }

    // void citireTab(int *v = (int*) malloc(sizeof int)*1000, int o, int p)
   // {
   //    int i,j,n,m;
   //    for(i=0;i<=n;i++)
    //   {mat=[i]=(int*)malloc(1000*sizeof(int));

   //    }
   // }

//}
char fAfisareOpt(void)
{
    system("cls");
    printf("\nQ. Citirea unui tablou unidimesional. \n");
    printf("W. Afisare elementelor tablului. \n");
    printf("E. Determinarea, si afisare pe ecran, a sunei elementelor pare din sir. \n");
    printf("A. Afisarea pe ecran a perechilor de elemente alaturate care sunt prime intre ele. \n");
    printf("S. Reordonarea elementelor din sir in ordine crescatoare a sumei cifrelor lor. \n");
    printf("D. Afisare elementelor legate de autorul Aplicatiei. \n");
    printf("Z. Exit \n");
    printf("\n\nAlegeti o optiune:");
    char opt = toupper(getchar());
    ///return toupper(getch());
}
void autor(void)
{
    printf("\nFIESC Grupa 3113a Mert Aydogan\n");
}
