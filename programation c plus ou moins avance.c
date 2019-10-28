/* bonjour je vous remerci beaucoup pour votre aide et j'aime bien que vous soyer heureux avec ce code source .... et merciiii :) */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int mode3();
int mode1()//cette fonctions est pour le 1er mode de jeux "joueur avec ordinateur"
{
    int max , min=1;
    int niveau=0;//c est pour savoir le niveau
    while(niveau <1 || niveau>4)
    {
    printf("entre le nb du niveau de jeux :\n"
           "1.niveau 1: de 1 a 100\n"
           "2.niveau 2: de 1 a 1000\n"
           "3.niveau 3: de 1 a 10000\n"
           "4.revenir en ariere .\n");
    scanf("%d",&niveau);
    if (niveau >=1 && niveau <=3)//si le niveau est 1, 2,ou 3 le jeux commence selon chaque cas
    {
    switch(niveau)//selon le niveau choisie choisie le max et le min du jeux change
    {
    case 1:
           max = 100;
        break;
    case 2:
        max=1000;
        break;
    case 3:
        max =10000;
        break;
    }
    int nbcherche, nbentre;
     srand(time(NULL));//puis c'est la generations de nb aleatoire par l'ordinateur
     nbcherche= (rand() % (max - min + 1)) + min;
    int compteur = 1;
    for (nbentre=0; nbcherche!=nbentre; compteur++)//plus ou moins commence ici...
    {
    printf("entre un nb:\n");
    scanf("%d",&nbentre);
    if(nbentre==nbcherche)
        printf("bravo, vous avez trouver le nb aleatoire en %d fois\n",compteur);
    else if (nbcherche<nbentre)
        printf("plus moins \n");
    else if (nbentre<nbcherche)
        printf("plus grand \n");
    }
    }
    else if(niveau ==4)
    {
        return 4;/* si il return 4 alors la fonction mode1 sera = 4 et
         apres ds la fonctions main elle sera de meme stoquer ds une variable "reppeter" pour s'avoir si on va repeter le jeux */

    }
    else
        printf("pardon, entre un nb du niveau presenter aux dessus.\n");
    }
    printf("alors voulez vous jouer de nouveau :\n"
           "si oui tape 1\n"
           "si non tape 0\n");
           int repetter;
           scanf("%d",&repetter);
 return repetter;//repetter travaillent comme une boolens si est = 0 alors non
}                                                        //si est = 1 ou n'importe quelle autre nb alors oui
 int mode2()//cette fonction est pour le 2eme mode de jeux "joueur avec joueur"
{
    int joueur1 =0 ,joueur2=0;
    printf("alors joueur 1 entre un nb: \n");
    scanf("%d",&joueur1);//ici le joueur 1 entre son nb
    for (int rep=0; rep<40 ;rep++)
        printf("oh la la la \n");
    /*ici puisque je ne sais pais comment ne pas afficher le nb entrer par le joueur 1
    alors j'ai repeter oh la lala 40 fois pour que le nb ne sera plus devant le joueur 2 a l'ecran */
    int compteur = 1;
    for (joueur2=0 ; joueur1!=joueur2; compteur++)//plus ou moins commence ici...
    {
    printf("joueur 2 entre un nb :\n");
    scanf("%d",&joueur2);
    if(joueur2==joueur1)
        printf("bravo, vous avez trouver le nb chercher en %d fois\n",compteur);
    else if (joueur1<joueur2)
        printf("plus moins \n");
    else if (joueur2<joueur1)
        printf("plus grand \n");
    } printf("alors voulez vous jouer de nouveau :\n"
           "si oui tape 1\n"
           "si non tape 0\n");
           int repetter;
           scanf("%d",&repetter);
 return repetter;//repetter travaillent comme une boolens si est = 0 alors no
                 //si est = 1 ou n'importe quelle autre nb alors oui
}
int main()
{
    int repette;//c'est pour savoir si le joueur veut jouer de nouveau
    printf("bonjour, soyer le bien venu aux jeux plus ou moins :\n");
    do
    {
    printf("entrer le nb mode de jeux :\n"
           "1.mode 1: 1 joueur\n"
           "2.mode 2: 2 joueur\n"
           "3.mode 3: plus que 2 joueur\n"
           "4.quiter le jeux\n");
    int mode=0;//pour savoir le mode de jeux
    scanf("%d",&mode);
    if(mode==1)//si le mode est 1 alors en appele la fonction mode1 pour faire son travaille
        repette = mode1();
    else if (mode == 2)//si mode = 2 en apple la fonction mode 2
        repette = mode2();
    else if (mode == 4)//alors il quitte le jeux s'implement
        return 0;
    else if (mode == 3)
        repette = mode3();
    else
        printf("pardon , entre un nb du niveau presenter aux dessus");
    } while(repette);//repette ici travaillent comme une boulens
}
//n'hesiter pas de me donner votre conseil...:)
//merci beaucoup pour votre aide...
int mode3()//cet fonction pour le 3eme mode de jeux 2 joueur et plus
{
    printf("alors entrer le nb de joueure : \n");
    int nbjoueur=0;//cest le nb joeur en total
    scanf("%d",&nbjoueur);
    int nbchercher=0;//equivalent aux nb aleatoire
    printf("joueur 1 'principale' entre le nb cherche :\n");
    scanf("%d",&nbchercher);
    for (int changerecara=0;changerecara<50;changerecara++)
        printf("oh lalalala\n");

    int nbjoue = 2;//cest pour le nb de joueur qui joue
    int nbentrer=0;//c'est le nb entres par le joueur

    for (;nbjoue <= nbjoueur || nbentrer == nbchercher ; nbjoue++)
    {
        printf("joueur %d entre un nb :\n",nbjoue);
        scanf("%d",&nbentrer);
        if (nbentrer<nbchercher)
        {
            printf("plus grand\n");
        }
        else if (nbentrer>nbchercher)
        {
                printf("plus moins\n");
        }
        else if ( nbentrer == nbchercher )
        {
        printf("bravoo joueur %d ,tu es le premiers qui a trouve le nb cherche\n",nbjoue);
        printf("alors voulez vous jouer de nouveau ?\n"
             "si oui tape 1 \n"
             "si non tape 0\n");
             int jouernouveau=0;
             scanf("%d",&jouernouveau);
            return jouernouveau;
        }
        if (nbjoue == nbjoueur)
         nbjoue = 1;
    }
























}
