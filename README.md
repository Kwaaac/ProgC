# Table des matières
1. [Introduction](#introduction)
2. [Qui suis-je, d'où viens-je ?](#qui-suis-je-doù-viens-je-)
3. [Mes objectifs pour progresser](#mes-objectifs-pour-progresser)
4. [Mes productions](#mes-productions)
    1. [TP2](#tp2)
    2. [TP3](#tp3)
    3. [”Librairie” read](#librairie-read)
    4. [Projet d’entier secret !](#projet-dentier-secret-)
    5. [TP4](#tp4)
    6. [TP5](#tp5)
    7. [TP6](#tp6)
    8. [TP7](#tp7)
    9. [TP9](#tp9)
    10. [TP8](#tp8)
    11. [Projet Three To Go](#projet-three-to-go)
5. [Review et aide](#review-et-aide)
6. [Conclusion](#conclusion)
    1. [Points total accumulé](#points-total-accumulé)



# Introduction
Bonjour à vous, cher lecteur. Ce document va vous vous décrire mon premier semestre de programmation C au cours de ma première année à l’ESIPE.

Pour cela je vais procéder d’une manière qui s’agira de vous présenter l’origine de mes expériences ainsi que le niveau en C que j’ai quitté au troisième semestre de mon DUT. Ensuite je vous présenterai les réalisations que j’ai effectué ce semestre tout en vous explicitant ce que j’y ai appris et les compétences que je considère comme acquises, celle qu’il faut que je travaille et enfin les fameuses compétences qui restent un mystère pour moi.
Donc je terminerais sur une conclusion sur ce que j’ai majoritairement retenu de ce premier semestre et surtout mes objectifs de réalisation concernant le prochain semestre !
Je passerais également en revue les review et aide que l'on m'a apporté et celle que j'ai apportés. Pour les reviews et les aides, je les mettrais sur les réalisation des TPs.

Sur ce, je vous souhaite une bonne lecture !

# Qui suis-je, d'où viens-je ?
Comme dit précédemment, je proviens d’un DUT Informatique, celui de Champ pour être précis.

Nous n’apprenons pas véritablement à coder en C dans ce DUT, ou du moins pas avec autant de rigueur qu’à l’ESIPE, et on nous a surtout appris à faire de petit programmes, des petits TP qui cherchent à nous faire voir des bases, mais que j'ai mal apprises et avec difficultés.
En bref, la première année nous a appris un minimum de syntaxe en C, mais pas vraiment appris les “bonnes manières”.

Ensuite, nous avons refait du C au troisième semestre, cette fois-ci, nous avons utilisé le C à des fin algorithmiques (Piles, Liste chainées, doublement chaînées, tables de hachages), mais ça à été un calvaire car nous avons manqué selon moi de cours “propre” de C, (aucune utilisation de Makefile par exemple). Donc pour être franc mon niveau en C à la fin de ce semestre était correct, mais je savais juste écrire du code que je pensais faire fonctionner, je ne connaissais aucune notion théorique et propre au C.

Et comme je n’avais pas du tout apprécié ce cours, suivi d’une année d’abstinence de C, je suis arrivé à l’ESIPE avec une petite rancoeur avec le C et un tri selectif sur mes connaissance vis à vis du C.

Donc plus sérieusement, pour résumer mon niveau en C au début de ce semestre, je ne savais plus comment compiler un fichier avec GCC, je connaissais la syntaxe du C, mais dès que ça rentrait en profondeur dans certaines notions (pointeurs, bonne gestion des tableaux, malloc…) je commençais à perdre mes repères et je ne savais pas comment procéder. En bref, malgré mes notions de base en C, je me sentais véritablement perdu.

# Mes objectifs pour progresser

A ce stade, j’ai plusieurs objectifs en tête, le premier c’est de récupérer un tant soit peu le peu de niveau que j’avais en C à l’époque en refaisant les premier TP, avant de bien comprendre le cours pour avoir les bases théoriques que je n’avais pas à l’époque. Donc pour cela, faites quelques exercices du TP2 et du TP3.

L’idée est après avoir repris mes marques, d’apprendre à utiliser les Makefiles car je ne les avaient jamais utiliser (J’utilise l’IDE Clion qui utilise le Cmake et avec une syntaxe simplifié, me permettait de compiler et d'exécuter mes sources). Donc apprendre comment rédiger mais surtout lire un Makefile afin que tout le monde puisse compiler mes sources. C'était extrêmement important pour la suite si je souhaitais pouvoir avoir des review et en faire.

Ensuite l’objectif est simple, continuer les TP fils rouges car je n’ai pas la prétention de pouvoir choisir mes TP au vu du niveau que j’avais. 

Ceci dit, j’avais tout de même d’autres idées en tête, j’avais fait une fonction --récupérée sur internet et adaptée pour mes besoins-- l’année dernière pour lire un entier sur l’entrée standard. Mais elle était horrible car je ne maîtrisais pas le passage par adresse donc je voulais la refaire correctement pour la suite des TP.

Puis surtout je souhaitais au moins commencer un projet quel qu'il soit si je pouvais me le permettre.

Donc à partir de là, les objectifs étaient fixés donc j’ai pu commencer dans de bonnes conditions.


# Mes productions:
Pour la nomenclature, je vais, pour chaque TP, expliciter ce que j’y ai fait, ce que je pense avoir appris, et ce que je vais avoir besoin de revoir. Je mettrai aussi une auto-évaluation sur ce que je pense avoir eu comme compétence selon les grilles de points trouvable à cette [page](http://igm.univ-mlv.fr/~borie/projet_info1.php).

## [TP2](https://github.com/Kwaaac/ProgC/tree/main/TP2):
Le TP2 a servi de rappel sur comment coder basiquement en C.
J’ai pu revoir certaines bases que j’avais complètement oublié comme bêtement les paramètres du main et l’utilisation de argc et argv grâce à l’exercice 2.

L’exercice 3 m’a surtout permis de revoir la récursivité très gentiment, c’est quelque chose que je n’ai pas trop perdu car on avait l’habitude de faire énormément de récursif en DUT (python ou C).

Pour l’exercice 5, j’ai évidemment utilisé le man pour revoir l’utilisation des différentes fonctions proposées dans le sujet pour pouvoir composer l’exercice sans trop de difficulté.

| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| TP2 | 6 | 1 | 1 | 1 | | 1 | 1 | | | | | 1 | | 

## [TP3](https://github.com/Kwaaac/ProgC/tree/main/TP3):
Le TP3 m’a servis également à reprendre mes bases, ceci dit, je n’ai pas fait tout les exercices, en effet, l'exercice 5 ne m'intéressais pas à faire car c'est un exercice que j'avais vu et revue en DUT et les deux autres m'ont semblé trop compliqué à faire au moment ou j’ai fais le TP, je souhaitais alors voir si je ne pouvais pas revoir du cours, ou bien me lancer sur un petit projet.

L’exercice 1 n’était pas nécessairement compliqué et j’ai personnellement trouvé la version récursive bien plus simple.

L’exercice 4 était un peu compliqué à mettre en place, je n’avais pas réussi sur le coup, et c’est en faisant le cours d'algorithmique sur la recherche dichotomique que je suis revenus le terminer. J’avais tenté de le faire avec juste un size et comme je maîtrisais mal les tableaux, j’avais des erreur assez stupide.
A ce moment il était clair que j’avais un soucis avec les tableaux, déjà avec leurs initialisation puis avec leurs utilisations

Finalement, je n’ai pas pris le temps de revenir sur les exercices qui m'avaient posé problèmes, autre que le 4, mais vous le lirez par la suite que j’ai fais un peu plus pour ce C1.

Donc en somme sur ce TP je suis un peu tombé sur un os, donc il fallait que je me rattrape autre part.



| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| TP3 | 3 | | | | | 1 | 1 


## [”Librairie” read](https://github.com/Kwaaac/ProgC/tree/main/lib)
Comme mentionné plus haut, j’avais l’an passé adapté des fonctions de lecture d’entrée standard pour mes TP (de mémoire c’était un petit jeu au tour par tour et donc lire les entrées de chaque joueur).

J’avais besoin d’avoir une vérification de l’entrée et d’assurer si les entrées contenait uniquement des entiers. Et j’avais finalisé une solution à moitié stable et bien horrible puisque, ne maîtrisant pas du tout le passage par adresse, si ma valeur de retour était l’int le plus petit possible alors je considérais que ce n’était pas bon (pour vous dire à quel point c’était horrible).

Donc l'objectif de ce mini projet perso, c’était de refaire ces fonctions de lecture de d’entier contrôlé, mais cette fois sans faire quelque chose qui vous fait saigner de l'œil à chaque regard.

Dans le fichier read.c, j’ai trois fonctions qui prévalent
- clear_buffer;
- read_input;
- read_int;

La première fonction va me permettre de vider le buffer à chaque fois que je ferai appel à read_input.

La seconde va évidemment lire sur l’entrée standard et renvoyer ce qu’elle a lu via le pointeur par adresse.

La troisième va alors utiliser la seconde pour lire l’entrée standard et convertir ce que l’utilisateur a écrit en entier.

Pour cela j’utilise strtol, pour faire un contrôle d’erreur sur la conversion. je vérifie donc si l’entier est bien compris entre les bornes d’un int, si il n’y a pas eu de problème durant la conversion et si il n’y a aucun caractère autre que des numéros dans l’entrée lu.

Comme j’ai voulu faire quelque chose de propre, j’ai bien entendu fait passer l’entier converti par adresse et la fonction read_int renvoie 1 ou 0 en fonction du succès de la lecture ou de l'échec de cette dernière.

J’ai réutilisé cette petite librairie tout au long de mon semestre et il faut dire qu’elle m’a bien servi à partir du moment où j'ai eu besoin de faire appel à l’utilisateur (Entier secret, Tableaux remplis par l’utilisateur …).

Je pense qu’il y a moyen de peut-être faire plus simple voir de l’optimiser, mais je suis assez content de ce que j’ai fait la dessus.

Et ça m’a ouvert la voie pour faire le petit projet d’entier secret !

| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Read | 6 | 1 | 1 | 1 | 1 | | |  | 1 |  |  |  |  |  | 1 | 



## [Projet d’entier secret !](https://github.com/Kwaaac/ProgC/tree/main/Projets/EntierSecret)
Le projet d’entier secret consiste en donner un nombre maximum à la machine puis l’utilisateur va retrouver cet entier généré aléatoirement entre 1 et le nombre fourni, à chaque tentative le programme dit à l’utilisateur si le nombre secret est plus grand ou plus petit.

Pour cela j’ai évidemment utilisé la librairie créer au dessus avec une gestion des erreurs d'entrées. Si l’utilisateur ne met pas un nombre alors il doit recommencer l’étape (donner un nombre max ou tenter de trouver le nombre secret).

J’ai donc découpé le programme en plusieurs sous-fonction atomique ayant chacune leurs propre action unique.

Je n’ai rien créé de particulièrement révolutionnaire sur ce projet, par contre, j’y suis retourné à la fin du semestre.
Je l’ai regretté.
Plus exactement je me suis rendu compte à quel point je ne maîtrisait pas les pointer, petit exemple de ma boucherie: 
```c
int max_limit;
int *p_max_limit = &max_limit;
/* ... */
read_user_input(p_max_limit);
```
Donc j’ai corrigé ça de manière à ce que ça soit plus joli et en prime, de faire un malloc & free.

```c
int *max_limit = (int *) malloc(sizeof(int));
/* ... */
free(max_limit);
```

Vous pourrez retrouver l’ancien main et le nouveau dans le programme.
Donc au moins je sais que j’ai manifestement progresser sur ce plan là, c’est positif !

Finalement, ce projet était surtout pour tester ma librairie et ce fut un bon crash test car selon moi, elle fonctionne plutôt bien !
De plus j'ai correctement atomiser les fonctions pour avoir un main léger et un retour du programme vers l'utilisateur le plus complet possible

| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Entier S | 5 | 1 | 1 | 1 |  | 1 |  |  | 1 | 


## [TP4](https://github.com/Kwaaac/ProgC/tree/main/TP4)

Ce TP consistait à remplir les fonctions pour implémenter une pile en C

Je n’ai rien fait d’exceptionnel pour faire la pile, j’ai suivis le TP et remplit les fonctions comme il me semble qu’elle devait être codée. 

J’ai cependant mieux compris comment fonctionnait l’utilisation des tableaux en C avec la pile, parce que c’est en utilisant et en pratiquant que je comprend les choses.

Nous avions fait un TP similaire en première de DUT.

Même chose pour ce qui est de la lecture de la calculatrice et son implémentation.
Je n’ai pas ressenti de difficulté de lire le code, d’y implémenter mes fichiers stack et de le modifier pour ajouter les deux fonction de modulo et de factoriel

Et en plus j’ai fait la fonction factoriel en récursif donc je suis tout de même content.
Mais après coup, je me dis que je n’avais peut-être pas besoin de faire ce TP, je me dis que le temps investi à été mieux rentabilisé en terme d’apprentissage, mais ça m’a permis de revoir des bases donc ce n’est pas négligeable quand même.


| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| TP4 | 6 | 1 | 1 | 1 | 1 | 1 |  |  |  |  | |  |  |  |  1 | 


## [TP5](https://github.com/Kwaaac/ProgC/tree/main/TP5)

Le TP5 à été vraiment excellent pour moi. J’avais des problèmes avec les tableaux parce que j’avais l’impression de ne pas comprendre comment ils fonctionnaient en termes d’initialisation et en passage par adresse.

Ce TP a le grand avantage de tout revoir et de tout utiliser sur les tableaux, et fait un très bon exercice et m’a permis de grandement progresser sur ce plan là.

Sur ce TP, j’ai pu avoir une bonne avancée en termes de completion de code.
En effet, j’avais d’abord fait une première version du TP qui fonctionnait mais une version de base, elle était classique selon moi, à part une fonction que j’ai fait afin de factoriser pas mal de code:

```c
/**
 * Push the second array into the first
 *
 * @param first First array
 * @param second Second array
 * @param first_index Starting index to fill the first array
 * @param second_index Starting index to push from the second array
 * @param size_second Size of the second array
 */
void push_array(int *first, int *second, int first_index, int second_index, int size_second) {
    int i;
    for (i = second_index; i < size_second; i++, first_index++) {
        first[first_index] = second[i];
    }

    first[first_index] = -1;
}
```

Cette fonction va, comme l’indique le commentaire, push tout un tableau dans un autre, avec une gestion des index. 
Cette fonction est extrêmement utile et est souvent utilisé pour remplacer des boucle for intempestives

Dans cette version, je n’avais pas gérer les erreurs, ni des test et le makefile n’était pas clair.

Puis Guillaume DOMART à fait la revue [#3](https://github.com/Kwaaac/ProgC/issues/3#issue-772243545) dans laquelle il a exposé plusieurs point d’améliorations que j’ai corrigé en grande quantité !
Dans l’issue Git, vous pourrez retrouver le commit [5c33148](https://github.com/Kwaaac/ProgC/commit/5c33148b50388ad7f924be6c0eed7fba6e1935c4) qui contient une description de mes modifications suite à la review et toutes mes modifications qui vont avec.
En résumé j’ai pousser les tests de mes fonctions dans le main, et j’ai véritablement gérer les erreurs dans la fonction fill array pour empêcher l’ajout de nombres négatifs ce qui rend son utilisation *normalement* impossible à rater.

Et en prime j’ai pu mettre à profit la création de Makefile.

En somme, ce TP m’a permis de grandement progresser sur l’utilisation des tableaux, la gestion des erreurs, la factorisation de code, une gestion des tests avec des arguments données et sur l’utilisation des Makefiles.

Si il y a une chose dont je suis sûr à ce stade c’est que je pense avoir maîtrisé le principe des fonctions, des types et des variables en C.


| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| TP5 | 7 | 1 | 1 | 1 |  |  | 1 | 1 | 1 | 1 | 


## [TP6](https://github.com/Kwaaac/ProgC/tree/main/TP6)

Pour ce TP, c’est un TP qui m’a surtout appris l’algorithme de backtracking plus qu’autre chose. L’élément essentiel était de bien suivre les indications du TP pour ne pas finir à côté de la plaque.

Tout d’abord, je suis plutôt content d’avoir réussi à mettre un système d’argument au sein même du make grâce à ce code préprocesseur:
```makefile
# Si le premier argument c'est "run"
ifeq (sudoku,$(firstword $(MAKECMDGOALS)))
  # Je recupere le premier argument
  GRID_NAME := $(wordlist 2,2,$(MAKECMDGOALS))
  # puis je l'evalue comme n'etant pas une target
  $(eval $(GRID_NAME):;@:)
endif
```

Vous pouvez aller jeter un œil au README, pour lancer une grille de sudoku, il suffit d’écrire `make sudoku grid1`.
Je commence à être de plus en plus à l’aise avec les makefiles donc j’en profite !

Pour ce qui est du TP, l’exercice 2 était facilement faisable en suivant les consignes et ce que j’y ai appris m’a permis de réaliser le l’exo 3. Je m’en suis véritablement rendu compte en aidant Robin et Eric qui n’avaient pas fait comme leurs exo 2 et s'étaient retrouvés avec des seg fault ou un code qui ne résolvait qu’a moitié.

Une bonne habitude que j’ai appliqué dans le TP est le fait d’avoir des fonction qui n’ont que 1 seules applications (les quatres fonction de vérification si un nombre est bien positionné)
1 fonction pour la vérification des lignes,
1 fonction pour la vérification des colonnes,
1 fonction pour la vérification des régions,
1 fonction qui effectue un && logique sur les trois précédentes pour savoir si le nombre est valide.

Pour le débogage, ça m’a énormément servi donc j’en suis plutôt content !

J’utilise à nouveau le passage par adresse pour initialiser des pointeur de int et la fonction renvoi un code d’erreur, c’est une notion que j’ai assimilé désormais et que je réutilise de manière naturel (et que je réaliserai plus tard, pour le tp7 et projet).

Guillaume DOMART à réaliser une review assez positive sur ce TP également que vous pouvez retrouver ici : [#4](https://github.com/Kwaaac/ProgC/issues/4)

Finalement ce TP m’a permis de consolider ce que j'apprends depuis quelques TP et de continuer à mettre en pratique mes nouvelles connaissances !


| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| TP6 | 10 | 1 | 1 | 1 | 1 | 1 | 2 | 1 | 1 |  |  |  |  | 1 


## [TP7](https://github.com/Kwaaac/ProgC/tree/main/TP7)

Il y a deux types de personnes qui ont réalisé ce TP, ceux qui ont pu réutiliser le TP3 d’algo qui utilise une structure et un affichage similaire aux sudoku et qui ont utilisé cette base pour faire le TP7. 

Dans mon cas je l’ai fait avant qu’on fasse le TP3 et qui à créer la structure lui-même.

Dans un sens je me dis que j’aurai pu gagner pas du temps pour faire d’autre TP, mais dans l’autre, je suis quand même très satisfait d’avoir pu sortir une structure qui me semble satisfaisante et qui en plus ressemblait au code du TP.

J’ai donc fait deux structures, une pour la grille de sudoku et une pour les cellules. 

Et j’ai ajouté quelques fonctionnalités optionnelles pour le TP.
En fait j’avais préparé ma structure pour ajouter la fonctionnalité de HOVER sur les cellules (que je n’ai pas fait au final, mais une base est là). Donc j’ai fait une énumération pour avoir des états de cellules que j’ai utilisés pour afficher mes cellules qui sont bloquées et la cellules sélectionnée.

J’ai aussi modifier les lignes pour mettre en lumière les régions et j’ai augmenté la font.

Une petite “astuce” que j’ai apprécié rajouter c’est la gestion des clics sur une grille.
Ma fonction me permet de sortir les index de la cellule sur laquelle le joueur à cliquer, selon une grille de sudoku (la structure). Grâce à ça, je peux changer la taille de ma grille en termes de pixel ou de case et la fonction est parfaitement polyvalente. 

De plus ça m’a permis d’utiliser cette structure pour la grille de sélection, je peux la poser n’importe ou dans la fenêtre et un clic dessus renverra toujours la bonne cellule sélectionnée.

Le seul point faible de ça, c’est que j’ai dû faire un fichier texte pour initialiser une “grille de sudoku” qui est en fait la grille de sélection.

Sur ce plan là, j’ai pu fortement progresser et mettre en application ce que j'apprends depuis le début de ce semestre pour faire un petit jeu et avec ça réutiliser ce que j’ai fait au TP précédent pour solver le sudoku.

A ce stade, je n’avais pas du tout utiliser de malloc et de free et mon code était manifestement une passoire à mémoire (presque autant que la libmlv tient).

Comme je ne suis absolument pas à l’aise avec les malloc et les free (notions que je n’ai jamais compris en DUT), c’est après avoir fait le TP3 d’algo que j’ai repris ce qu’ils avaient utilisée pour le réadapter sur mes structures. Ce fut ma première véritable utilisation des malloc et des free et j’ai commencé à bien mieux les appréhender, au moins sur quand et comment les utiliser.

Mais c’est quelque chose que je ne maîtrise pas du tout donc je décide de sauter le TP8 pour faire le TP9 !


| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| TP7 | 10 | 1 | 1 | 1 | 1 | 2 |  | 1 | 1 |  |  | 1 |  |  | 1 | 

## [TP9](https://github.com/Kwaaac/ProgC/tree/main/TP9)

J’ai donc réalisé ce TP pour en apprendre plus sur les malloc et les free, un environnement qui me permet de les utiliser.

C’est donc ce que j’ai fait !

Le premier exercice du TP me permet de réutiliser les malloc sur des tableaux que j’avais pu voir au TP5 donc j’ai réussi assez aisément cet exercice

Pour ce qui est de l’exercice 2, j’ai pu mettre en place l’exercice sans trop de difficulté car j’ai pu faire le même exercice de remplissage de tableau sur PlaTon.

Et le deuxième exercice à été super intéressant parce que j’ai pu appliquer ce que j’avais copié du tp d’algo, mais cette fois sans avoir la réponse, j’ai pu recommencer du début ce qui m’assure que si je dois réutiliser de l’allocation et du free, je saurai l’utiliser sans trop de problème ! 

Le troisème exercice à été un peu compliqué car j'ai eu des bugs que je ne comprenais pas du à ma mauvaise manière de copié les tableaux, j'effectuait mal le size des chaîne de caractère et ça c'est répercutés par une erreur sur le free que je ne comprenais pas.

Comme demandé dans l'énoncé, il faut toujours adapter le malloc de l'argument au plus petit possible. Pour cela j'ai utiliser la librairie <string.h> pour avoir la longueur de chaque chaîne de caractère puis de le multiplié par son sizeof.

Pour pouvoir copier les arguments dans un autre tableaux, j'ai fait appel à memcpy qui permet de copier les zones mémoires, donc la méthode que j'ai trouvé être la plus efficase pour copier un tableau de char. Comme un tableau est une suite de zone mémoire, c'est ce qui me paraît le plus adapté puisque que j'ai tout malloc et que j'ai la taille allouée.
```c
size = strlen(argv[i]) * sizeof(char);
        tab[i] = (char *) malloc(size);

        if (tab[i] == NULL) {
            fprintf(stderr, "Memory allocation error, %d", i);
            return NULL;
        }

        memcpy(tab[i], argv[i], size);
```

Je ne me suis pas encore attardé sur le dernier exercice pour véritablement comprendre comment fonctionne malloc et free, j’ai une petite conception grâce aux cours d’architectures système, mais je n’ai pas encore pris le temps de regarder en profondeur.
Et bien entendu, mes trois exercices sont leaks free !


| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| TP9 | 10 | 1 | 1 | 1 |  | 1 |  | 2 | 1 | 1 | 2 | 


## [TP8](https://github.com/Kwaaac/ProgC/tree/main/TP8)

Le TP8 était intéressant à faire et j’ai beaucoup apprécié appliquer la mémoïsation mais je ne pense pas que je maîtrise ce principe ni même si je vais le réutiliser dans des projets futurs.
J’ai suivi le tp “à la lettre” en implémentant l’algorithme, et il m’a permis de continuer à mettre en pratique les connaissances que j’ai acquises jusqu’ici.


| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| TP8 | 6 |  | 2 | 1 |  |  | 2 | 1 | 1 | 


## [Projet Three To Go](https://github.com/Kwaaac/ProgC/tree/main/Projets/ThreeToPush)

Après avoir bien avancé la plupart des TP et fait ce que j’avais envie de voir pour ce premier semestre, j’avais envie de commencer un projet.

En DUT2, nous avions appris et fait des TP sur les listes chaînées et doublement chaînées donc en lisant les quelques projets disponibles, mes yeux ont tout de suite louché sur le three to go.

Mon objectif sur le projet n’est pas véritablement de le terminer avant la fin du semestre, mais plus de m’amuser à faire le jeu dans un premier temps et de revoir les listes chaînées dans un second temps.

Je le précise dans le readme, mais je suis aller jusqu’au niveau 1,75 on va dire.
Le jeu est jouable, mais le système de décalage à gauche n’est pas implémenter, la structure l’y prépare, mais je ne l’ai pas encore coder.

Ce dont je suis assez fier, c’est qu’il m’a fallu assez peu de temps (tout est relatif bien sûr) comparer à ce que je pensais investir dans ce projet. Surtout que j’ai voulu expérimenter un peu les limites des énumérations avec le niveau 1.

Dans le projet on nous demande d’attribuer moralement dès entier aux formes et couleurs. Ce que j’ai fait c’est de les associer avec des énumération. Sur le coup, malin, ça me permet d’avoir un affichage console bien plus lisible que ce que l’énoncé proposé et dans le code je trouve ça plus lisible d’avoir une création de token avec “TRIANGLE, ROUGE” que “0, 2”.

Donc j’ai pu progresser sur l’utilisation des énumération et j’en suis content, mais le problème s'est avéré très casse pied une fois rentré dans la partie graphique. Comme l’intêret de ces énumeration était surtout pour l’affichage console, je me suis retrouvé bien idiot à devoir faire des fonctions pour traduire les énumération parce que je devais créer des token aléatoire (donc avec des int, qui sont au final des énumerations…).

Mais je suis très content du résultat, les fonctions sont bien atomique et n’offrent qu’un seul rôle. Mes différents modules (qui ressemble à du MVC) sont bien définis et clairs.

Grâce à cette modularité, le main du jeu est très court et concis.

Bien entendu, j’ai pu mettre en œuvre les nouvelles connaissances sur les malloc et les free pour bien allouer et free mes structures. Dommage que la libmlv fasse autant de fuite mémoire (même un create_window → free(window) fait des fuites de mémoire).

Je compte continuer ce projet pour le deuxième semestre et terminer le niveau 3 avec peut-être d’autres fonctionnalités en fonction de la charge de travail.
Ceci dit j’ai déjà deux pistes d'amélioration dans ce projet.

La première est de faire une documentation doxygen, c’est la première fois que je vois ce type de documentation et j’aimerais m’y pencher pour faire de bonnes documentation de mes projets. Je vais généralement déjà les commentaires “correctement” (/** … */ devant les fonctions), mais j’aimerais apprendre toutes la nomenclature pour produire cette doc à chaque TP et projets.

La seconde est l’amélioration des fonctions de recherche de token à supprimer. Je veux avoir une fonction plus générique qui me permette de supprimer plus de 3 token en fonction et qui me donne quel type de suppression à faire (pop, remove, sur les listes doublement chaînées en couleur et forme).

Finalement, je suis tout de même content car j’ai fait quelque gribouilli sur papier avant de me lancer dans l’architecture et j’ai réussi à la mettre en place sans trop d'accroc (autre que des erreurs d'inattention) et elle réussit à tenir le coup jusque là et je ne pense pas que j’aurais à la refaire pour pouvoir réussir la suite.

En bref, un projet WIP qui commence bien et qui m’a bien amusé !


| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Three To Go | 10 | 1 | 1 |  | 1 | 1 | 1 | 1 | 1 | 2 | 1 |  |  |  | 1 | 


# Review et aide
Voilà ce qui termine la review de mes TP.
En parlant de review, je passe nonchalamment sur les (la) review que j’ai effectué sur celle de Robin sur son TP6 que j’ai effectué juste ici: [Review](https://github.com/Kwaaac/ProgC/blob/main/reviews/RIEUTORD%20Robin/review.md) 

Je n’ai peut-être pas fait de review, mais j’ai eu la chance d’assister quelques personnes de la promo !

SI quelqu’un demandait de l’aide sur le discord que ce soit sur les TP de C ou sur les TP d’algo (en C), je n’ai pas hésité à les aider, mais les personnes que j’ai le plus aidé ont été Christopher WILLIAM et Éric ROBERT.

Dans un premier temps, j’ai assisté Éric dans sa réalisation de ces TP 5, 6 et 7 car il était littéralement à côté de moi pendant la semaine de partiel à cause de sa distance face à l’école (les mesures barrières ont été respectées, ne vous en faites pas).
Donc forcément quand il avait besoin d’un débogage parce que seg fault, j’ai pu l’aider à droite à gauche.

Je souhaites tout de même insister dessus, mais autant au début de ce semestre j’avais un niveau en C pitoyable, je trouve que je me suis beaucoup amélioré et j’ai réussi à prendre certain automatisme que j’espère sont correct. Mais comparé à moi Christopher à véritablement débuté le C et avait beaucoup de problèmes quant à la compréhension de ce dernier au début.
Certe ce n’est pas devenu un expert C, mais pour l’avoir accompagné sur ces TP du TP4 jusqu’au TP6 et sur ces TP d’algo, je souhaites vraiment vous dire qu’il a fait de sacré progrès, par rapport à ces débuts, j’espère que vous le remarquerez dans sa production du portfolio, mais je tenais à le mettre ici aussi.

De mon côté, ça à été un apprentissage vraiment hors du commun, car j’ai pu véritablement mettre en pratique mes connaissances et expliquer ce que j’ai fait, ce que j’ai compris est selon moi le meilleur moyen d’enfoncer le clou sur l'assimilation de ces compétences. J’ai pu fortement échanger et d'autres camarades ont pu soulever mes nombreuses erreurs (Un grand merci à Guillaume DOMART et Mehdi KHENISSI qui m’ont beaucoup aidé).

Je souhaite tout de même vous informer que la manière avec laquelle j’ai aidé ces personnes a été similaire à celle que j’ai employée avec des élèves que j’ai pu tutoré en javascript. Je ne leur donne pas la solution, je pousse à les faire réfléchir pour les faire arriver aux conclusions que j’ai expérimenté, mon objectif n’étant pas de les faire terminer les TP mais de comprendre ce qu’ils ont écrit, c’était long, mais, encore une fois, j’ai pu voir de très bon progrès chez Christopher. 
PlaTon
Petit aparté sur les notes que j’ai eu sur PlaTon que j’ai effectué la semaine avant l’examen pour m'entraîner, et je suis assez content du résultat, surtout sur la partie fonction !


# Conclusion

En conclusion, je suis très satisfait de ce semestre. Selon moi j’ai réussi à atteindre mes objectifs que je m'étais fixé en début de semestre et j’ai retrouvé les compétences que j’avais en DUT et au delà de ça j’ai pu véritablement apprendre de manière bien plus “théorique” le C. Je suis encore loin d’avoir un excellent niveau, mais j’ai à mon sens réussi à atteindre une certaine aisance qui me conforte dans l’idée que j’apprécie coder dans ce langage et que j’arrive à fournir des rendu qui sont un tant soit peu corrects.

Pour ce qui va être du C2, je compte bien entendu faire les TP fils rouge du C2 car ce sont toujours un moyens sûr de mettre en pratique mes connaissance et de me donner des objectifs clair sur ce que je dois faire, mais j’ai discuté avec Guillaume DOMART pour que nous fassion le Push It Down comme projet commun et on prévoit de faire le faire à 100% et d’ajouter de nombreuses fonctionnalités (comme un générateur de niveau aléatoire et un éditeur de niveau).
Et bien sûr terminer le projet Three To Go.


## Points total accumulé:


| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Total | 80 | 9 | 11 | 9 | 8 | 10 | 7 | 7 | 3 | 3 | 3 | 3 | 0 | 0 | 4 | 

Les points accumulés dépassent largement les objectifs de base établis en 2018 donc je suis véritablement très fier de ça ! Bon ça démontre plus que je me suis arraché à faire les TP, après est-ce qu’ils sont correctement réalisés, c’est une autre affaire.

Merci d’avoir lu ce rapport sur mon activité du semestre 1 ! Je vous souhaite un bon courage après avoir lu ces pavés !

