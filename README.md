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

Bonjour à vous, cher lecteur. Ce document va vous vous décrire mon premier semestre de programmation C au cours de ma
première année à l’ESIPE.

Pour cela je vais procéder d’une manière qui s’agira de vous présenter l’origine de mes expériences ainsi que le niveau
en C que j’ai quitté au troisième semestre de mon DUT. Ensuite je vous présenterai les réalisations que j’ai effectué ce
semestre tout en vous explicitant ce que j’y ai appris et les compétences que je considère comme acquises, celle qu’il
faut que je travaille et enfin les fameuses compétences qui restent un mystère pour moi. Donc je terminerais sur une
conclusion sur ce que j’ai majoritairement retenu de ce premier semestre et surtout mes objectifs de réalisation
concernant le prochain semestre !
Je passerais également en revue les review et aide que l'on m'a apporté et celle que j'ai apportés. Pour les reviews et
les aides, je les mettrais sur les réalisation des TPs.

Sur ce, je vous souhaite une bonne lecture !

# Qui suis-je, d'où viens-je ?

Comme dit précédemment, je proviens d’un DUT Informatique, celui de Champ pour être précis.

Nous n’apprenons pas véritablement à coder en C dans ce DUT, ou du moins pas avec autant de rigueur qu’à l’ESIPE, et on
nous a surtout appris à faire de petit programmes, des petits TP qui cherchent à nous faire voir des bases, mais que
j'ai mal apprises et avec difficultés. En bref, la première année nous a appris un minimum de syntaxe en C, mais pas
vraiment appris les “bonnes manières”.

Ensuite, nous avons refait du C au troisième semestre, cette fois-ci, nous avons utilisé le C à des fin algorithmiques (
Piles, Liste chainées, doublement chaînées, tables de hachages), mais ça à été un calvaire car nous avons manqué selon
moi de cours “propre” de C, (aucune utilisation de Makefile par exemple). Donc pour être franc mon niveau en C à la fin
de ce semestre était correct, mais je savais juste écrire du code que je pensais faire fonctionner, je ne connaissais
aucune notion théorique et propre au C.

Et comme je n’avais pas du tout apprécié ce cours, suivi d’une année d’abstinence de C, je suis arrivé à l’ESIPE avec
une petite rancoeur avec le C et un tri selectif sur mes connaissance vis à vis du C.

Donc plus sérieusement, pour résumer mon niveau en C au début de ce semestre, je ne savais plus comment compiler un
fichier avec GCC, je connaissais la syntaxe du C, mais dès que ça rentrait en profondeur dans certaines notions (
pointeurs, bonne gestion des tableaux, malloc…) je commençais à perdre mes repères et je ne savais pas comment procéder.
En bref, malgré mes notions de base en C, je me sentais véritablement perdu.

# Mes objectifs pour progresser

A ce stade, j’ai plusieurs objectifs en tête, le premier c’est de récupérer un tant soit peu le peu de niveau que
j’avais en C à l’époque en refaisant les premier TP, avant de bien comprendre le cours pour avoir les bases théoriques
que je n’avais pas à l’époque. Donc pour cela, faites quelques exercices du TP2 et du TP3.

L’idée est après avoir repris mes marques, d’apprendre à utiliser les Makefiles car je ne les avaient jamais utiliser (
J’utilise l’IDE Clion qui utilise le Cmake et avec une syntaxe simplifié, me permettait de compiler et d'exécuter mes
sources). Donc apprendre comment rédiger mais surtout lire un Makefile afin que tout le monde puisse compiler mes
sources. C'était extrêmement important pour la suite si je souhaitais pouvoir avoir des review et en faire.

Ensuite l’objectif est simple, continuer les TP fils rouges car je n’ai pas la prétention de pouvoir choisir mes TP au
vu du niveau que j’avais.

Ceci dit, j’avais tout de même d’autres idées en tête, j’avais fait une fonction --récupérée sur internet et adaptée
pour mes besoins-- l’année dernière pour lire un entier sur l’entrée standard. Mais elle était horrible car je ne
maîtrisais pas le passage par adresse donc je voulais la refaire correctement pour la suite des TP.

Puis surtout je souhaitais au moins commencer un projet quel qu'il soit si je pouvais me le permettre.

Donc à partir de là, les objectifs étaient fixés donc j’ai pu commencer dans de bonnes conditions.

# Mes productions:

Pour la nomenclature, je vais, pour chaque TP, expliciter ce que j’y ai fait, ce que je pense avoir appris, et ce que je
vais avoir besoin de revoir. Je mettrai aussi une auto-évaluation sur ce que je pense avoir eu comme compétence selon
les grilles de points trouvable à cette [page](http://igm.univ-mlv.fr/~borie/projet_info1.php).

## [TP2](https://github.com/Kwaaac/ProgC/tree/main/TP2):

Le TP2 a servi de rappel sur comment coder basiquement en C. J’ai pu revoir certaines bases que j’avais complètement
oublié comme bêtement les paramètres du main et l’utilisation de argc et argv grâce à l’exercice 2.

L’exercice 3 m’a surtout permis de revoir la récursivité très gentiment, c’est quelque chose que je n’ai pas trop perdu
car on avait l’habitude de faire énormément de récursif en DUT (python ou C).

Pour l’exercice 5, j’ai évidemment utilisé le man pour revoir l’utilisation des différentes fonctions proposées dans le
sujet pour pouvoir composer l’exercice sans trop de difficulté.

| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| TP2 | 6 | 1 | 1 | 1 | | 1 | 1 | | | | | 1 | |

## [TP3](https://github.com/Kwaaac/ProgC/tree/main/TP3):

Le TP3 m’a servis également à reprendre mes bases, ceci dit, je n’ai pas fait tout les exercices, en effet, l'exercice 5
ne m'intéressais pas à faire car c'est un exercice que j'avais vu et revue en DUT et les deux autres m'ont semblé trop
compliqué à faire au moment ou j’ai fais le TP, je souhaitais alors voir si je ne pouvais pas revoir du cours, ou bien
me lancer sur un petit projet.

L’exercice 1 n’était pas nécessairement compliqué et j’ai personnellement trouvé la version récursive bien plus simple.

L’exercice 4 était un peu compliqué à mettre en place, je n’avais pas réussi sur le coup, et c’est en faisant le cours
d'algorithmique sur la recherche dichotomique que je suis revenus le terminer. J’avais tenté de le faire avec juste un
size et comme je maîtrisais mal les tableaux, j’avais des erreur assez stupide. A ce moment il était clair que j’avais
un soucis avec les tableaux, déjà avec leurs initialisation puis avec leurs utilisations

Finalement, je n’ai pas pris le temps de revenir sur les exercices qui m'avaient posé problèmes, autre que le 4, mais
vous le lirez par la suite que j’ai fais un peu plus pour ce C1.

Donc en somme sur ce TP je suis un peu tombé sur un os, donc il fallait que je me rattrape autre part.

| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| TP3 | 3 | | | | | 1 | 1

## [”Librairie” read](https://github.com/Kwaaac/ProgC/tree/main/lib)

Comme mentionné plus haut, j’avais l’an passé adapté des fonctions de lecture d’entrée standard pour mes TP (de mémoire
c’était un petit jeu au tour par tour et donc lire les entrées de chaque joueur).

J’avais besoin d’avoir une vérification de l’entrée et d’assurer si les entrées contenait uniquement des entiers. Et
j’avais finalisé une solution à moitié stable et bien horrible puisque, ne maîtrisant pas du tout le passage par
adresse, si ma valeur de retour était l’int le plus petit possible alors je considérais que ce n’était pas bon (pour
vous dire à quel point c’était horrible).

Donc l'objectif de ce mini projet perso, c’était de refaire ces fonctions de lecture de d’entier contrôlé, mais cette
fois sans faire quelque chose qui vous fait saigner de l'œil à chaque regard.

Dans le fichier read.c, j’ai trois fonctions qui prévalent

- clear_buffer;
- read_input;
- read_int;

La première fonction va me permettre de vider le buffer à chaque fois que je ferai appel à read_input.

La seconde va évidemment lire sur l’entrée standard et renvoyer ce qu’elle a lu via le pointeur par adresse.

La troisième va alors utiliser la seconde pour lire l’entrée standard et convertir ce que l’utilisateur a écrit en
entier.

Pour cela j’utilise strtol, pour faire un contrôle d’erreur sur la conversion. je vérifie donc si l’entier est bien
compris entre les bornes d’un int, si il n’y a pas eu de problème durant la conversion et si il n’y a aucun caractère
autre que des numéros dans l’entrée lu.

Comme j’ai voulu faire quelque chose de propre, j’ai bien entendu fait passer l’entier converti par adresse et la
fonction read_int renvoie 1 ou 0 en fonction du succès de la lecture ou de l'échec de cette dernière.

J’ai réutilisé cette petite librairie tout au long de mon semestre et il faut dire qu’elle m’a bien servi à partir du
moment où j'ai eu besoin de faire appel à l’utilisateur (Entier secret, Tableaux remplis par l’utilisateur …).

Je pense qu’il y a moyen de peut-être faire plus simple voir de l’optimiser, mais je suis assez content de ce que j’ai
fait la dessus.

Et ça m’a ouvert la voie pour faire le petit projet d’entier secret !

| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Read | 6 | 1 | 1 | 1 | 1 | | |  | 1 |  |  |  |  |  | 1 | 

## [Projet d’entier secret !](https://github.com/Kwaaac/ProgC/tree/main/Projets/EntierSecret)

Le projet d’entier secret consiste en donner un nombre maximum à la machine puis l’utilisateur va retrouver cet entier
généré aléatoirement entre 1 et le nombre fourni, à chaque tentative le programme dit à l’utilisateur si le nombre
secret est plus grand ou plus petit.

Pour cela j’ai évidemment utilisé la librairie créer au dessus avec une gestion des erreurs d'entrées. Si l’utilisateur
ne met pas un nombre alors il doit recommencer l’étape (donner un nombre max ou tenter de trouver le nombre secret).

J’ai donc découpé le programme en plusieurs sous-fonction atomique ayant chacune leurs propre action unique.

Je n’ai rien créé de particulièrement révolutionnaire sur ce projet, par contre, j’y suis retourné à la fin du
semestre.<br>
Je l’ai regretté.<br>
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

Vous pourrez retrouver l’ancien main et le nouveau dans le programme. Donc au moins je sais que j’ai manifestement
progresser sur ce plan là, c’est positif !

Finalement, ce projet était surtout pour tester ma librairie et ce fut un bon crash test car selon moi, elle fonctionne
plutôt bien !
De plus j'ai correctement atomiser les fonctions pour avoir un main léger et un retour du programme vers l'utilisateur
le plus complet possible

| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Entier S | 5 | 1 | 1 | 1 |  | 1 |  |  | 1 |

## [TP4](https://github.com/Kwaaac/ProgC/tree/main/TP4)

Ce TP consistait à remplir les fonctions pour implémenter une pile en C

Je n’ai rien fait d’exceptionnel pour faire la pile, j’ai suivis le TP et remplit les fonctions comme il me semble
qu’elle devait être codée.

J’ai cependant mieux compris comment fonctionnait l’utilisation des tableaux en C avec la pile, parce que c’est en
utilisant et en pratiquant que je comprend les choses.

Nous avions fait un TP similaire en première de DUT.

Même chose pour ce qui est de la lecture de la calculatrice et son implémentation. Je n’ai pas ressenti de difficulté de
lire le code, d’y implémenter mes fichiers stack et de le modifier pour ajouter les deux fonction de modulo et de
factoriel

Et en plus j’ai fait la fonction factoriel en récursif donc je suis tout de même content. Mais après coup, je me dis que
je n’avais peut-être pas besoin de faire ce TP, je me dis que le temps investi à été mieux rentabilisé en terme
d’apprentissage, mais ça m’a permis de revoir des bases donc ce n’est pas négligeable quand même.

| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| TP4 | 6 | 1 | 1 | 1 | 1 | 1 |  |  |  |  | |  |  |  |  1 | 

## [TP5](https://github.com/Kwaaac/ProgC/tree/main/TP5)

Le TP5 à été vraiment excellent pour moi. J’avais des problèmes avec les tableaux parce que j’avais l’impression de ne
pas comprendre comment ils fonctionnaient en termes d’initialisation et en passage par adresse.

Ce TP a le grand avantage de tout revoir et de tout utiliser sur les tableaux, et fait un très bon exercice et m’a
permis de grandement progresser sur ce plan là.

Sur ce TP, j’ai pu avoir une bonne avancée en termes de completion de code. En effet, j’avais d’abord fait une première
version du TP qui fonctionnait mais une version de base, elle était classique selon moi, à part une fonction que j’ai
fait afin de factoriser pas mal de code:

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

Cette fonction va, comme l’indique le commentaire, push tout un tableau dans un autre, avec une gestion des index. Cette
fonction est extrêmement utile et est souvent utilisé pour remplacer des boucle for intempestives

Dans cette version, je n’avais pas gérer les erreurs, ni des test et le makefile n’était pas clair.

Puis Guillaume DOMART à fait la revue [#3](https://github.com/Kwaaac/ProgC/issues/3#issue-772243545) dans laquelle il a
exposé plusieurs point d’améliorations que j’ai corrigé en grande quantité !
Dans l’issue Git, vous pourrez retrouver le
commit [5c33148](https://github.com/Kwaaac/ProgC/commit/5c33148b50388ad7f924be6c0eed7fba6e1935c4) qui contient une
description de mes modifications suite à la review et toutes mes modifications qui vont avec. En résumé j’ai pousser les
tests de mes fonctions dans le main, et j’ai véritablement gérer les erreurs dans la fonction fill array pour empêcher
l’ajout de nombres négatifs ce qui rend son utilisation *normalement* impossible à rater.

Et en prime j’ai pu mettre à profit la création de Makefile.

En somme, ce TP m’a permis de grandement progresser sur l’utilisation des tableaux, la gestion des erreurs, la
factorisation de code, une gestion des tests avec des arguments données et sur l’utilisation des Makefiles.

Si il y a une chose dont je suis sûr à ce stade c’est que je pense avoir maîtrisé le principe des fonctions, des types
et des variables en C.

| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| TP5 | 7 | 1 | 1 | 1 |  |  | 1 | 1 | 1 | 1 |

## [TP6](https://github.com/Kwaaac/ProgC/tree/main/TP6)

Pour ce TP, c’est un TP qui m’a surtout appris l’algorithme de backtracking plus qu’autre chose. L’élément essentiel
était de bien suivre les indications du TP pour ne pas finir à côté de la plaque.

Tout d’abord, je suis plutôt content d’avoir réussi à mettre un système d’argument au sein même du make grâce à ce code
préprocesseur:

```makefile
# Si le premier argument c'est "run"
ifeq (sudoku,$(firstword $(MAKECMDGOALS)))
  # Je recupere le premier argument
  GRID_NAME := $(wordlist 2,2,$(MAKECMDGOALS))
  # puis je l'evalue comme n'etant pas une target
  $(eval $(GRID_NAME):;@:)
endif
```

Vous pouvez aller jeter un œil au README, pour lancer une grille de sudoku, il suffit d’écrire `make sudoku grid1`. Je
commence à être de plus en plus à l’aise avec les makefiles donc j’en profite !

Pour ce qui est du TP, l’exercice 2 était facilement faisable en suivant les consignes et ce que j’y ai appris m’a
permis de réaliser le l’exo 3. Je m’en suis véritablement rendu compte en aidant Robin et Eric qui n’avaient pas fait
comme leurs exo 2 et s'étaient retrouvés avec des seg fault ou un code qui ne résolvait qu’a moitié.

Une bonne habitude que j’ai appliqué dans le TP est le fait d’avoir des fonction qui n’ont que 1 seules applications (
les quatres fonction de vérification si un nombre est bien positionné)
1 fonction pour la vérification des lignes, 1 fonction pour la vérification des colonnes, 1 fonction pour la
vérification des régions, 1 fonction qui effectue un && logique sur les trois précédentes pour savoir si le nombre est
valide.

Pour le débogage, ça m’a énormément servi donc j’en suis plutôt content !

J’utilise à nouveau le passage par adresse pour initialiser des pointeur de int et la fonction renvoi un code d’erreur,
c’est une notion que j’ai assimilé désormais et que je réutilise de manière naturel (et que je réaliserai plus tard,
pour le tp7 et projet).

Guillaume DOMART à réaliser une review assez positive sur ce TP également que vous pouvez retrouver
ici : [#4](https://github.com/Kwaaac/ProgC/issues/4)

Finalement ce TP m’a permis de consolider ce que j'apprends depuis quelques TP et de continuer à mettre en pratique mes
nouvelles connaissances !

| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| TP6 | 10 | 1 | 1 | 1 | 1 | 1 | 2 | 1 | 1 |  |  |  |  | 1

## [TP7](https://github.com/Kwaaac/ProgC/tree/main/TP7)

Il y a deux types de personnes qui ont réalisé ce TP, ceux qui ont pu réutiliser le TP3 d’algo qui utilise une structure
et un affichage similaire aux sudoku et qui ont utilisé cette base pour faire le TP7.

Dans mon cas je l’ai fait avant qu’on fasse le TP3 et qui à créer la structure lui-même.

Dans un sens je me dis que j’aurai pu gagner pas du temps pour faire d’autre TP, mais dans l’autre, je suis quand même
très satisfait d’avoir pu sortir une structure qui me semble satisfaisante et qui en plus ressemblait au code du TP.

J’ai donc fait deux structures, une pour la grille de sudoku et une pour les cellules.

Et j’ai ajouté quelques fonctionnalités optionnelles pour le TP. En fait j’avais préparé ma structure pour ajouter la
fonctionnalité de HOVER sur les cellules (que je n’ai pas fait au final, mais une base est là). Donc j’ai fait une
énumération pour avoir des états de cellules que j’ai utilisés pour afficher mes cellules qui sont bloquées et la
cellules sélectionnée.

J’ai aussi modifier les lignes pour mettre en lumière les régions et j’ai augmenté la font.

Une petite “astuce” que j’ai apprécié rajouter c’est la gestion des clics sur une grille. Ma fonction me permet de
sortir les index de la cellule sur laquelle le joueur à cliquer, selon une grille de sudoku (la structure). Grâce à ça,
je peux changer la taille de ma grille en termes de pixel ou de case et la fonction est parfaitement polyvalente.

De plus ça m’a permis d’utiliser cette structure pour la grille de sélection, je peux la poser n’importe ou dans la
fenêtre et un clic dessus renverra toujours la bonne cellule sélectionnée.

Le seul point faible de ça, c’est que j’ai dû faire un fichier texte pour initialiser une “grille de sudoku” qui est en
fait la grille de sélection.

Sur ce plan là, j’ai pu fortement progresser et mettre en application ce que j'apprends depuis le début de ce semestre
pour faire un petit jeu et avec ça réutiliser ce que j’ai fait au TP précédent pour solver le sudoku.

A ce stade, je n’avais pas du tout utiliser de malloc et de free et mon code était manifestement une passoire à
mémoire (presque autant que la libmlv tient).

Comme je ne suis absolument pas à l’aise avec les malloc et les free (notions que je n’ai jamais compris en DUT), c’est
après avoir fait le TP3 d’algo que j’ai repris ce qu’ils avaient utilisée pour le réadapter sur mes structures. Ce fut
ma première véritable utilisation des malloc et des free et j’ai commencé à bien mieux les appréhender, au moins sur
quand et comment les utiliser.

Mais c’est quelque chose que je ne maîtrise pas du tout donc je décide de sauter le TP8 pour faire le TP9 !

| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| TP7 | 10 | 1 | 1 | 1 | 1 | 2 |  | 1 | 1 |  |  | 1 |  |  | 1 | 

## [TP9](https://github.com/Kwaaac/ProgC/tree/main/TP9)

J’ai donc réalisé ce TP pour en apprendre plus sur les malloc et les free, un environnement qui me permet de les
utiliser.

C’est donc ce que j’ai fait !

Le premier exercice du TP me permet de réutiliser les malloc sur des tableaux que j’avais pu voir au TP5 donc j’ai
réussi assez aisément cet exercice

Pour ce qui est de l’exercice 2, j’ai pu mettre en place l’exercice sans trop de difficulté car j’ai pu faire le même
exercice de remplissage de tableau sur PlaTon.

Et le deuxième exercice à été super intéressant parce que j’ai pu appliquer ce que j’avais copié du tp d’algo, mais
cette fois sans avoir la réponse, j’ai pu recommencer du début ce qui m’assure que si je dois réutiliser de l’allocation
et du free, je saurai l’utiliser sans trop de problème !

Le troisème exercice à été un peu compliqué car j'ai eu des bugs que je ne comprenais pas du à ma mauvaise manière de
copié les tableaux, j'effectuait mal le size des chaîne de caractère et ça c'est répercutés par une erreur sur le free
que je ne comprenais pas.

Comme demandé dans l'énoncé, il faut toujours adapter le malloc de l'argument au plus petit possible. Pour cela j'ai
utiliser la librairie <string.h> pour avoir la longueur de chaque chaîne de caractère puis de le multiplié par son
sizeof.

Pour pouvoir copier les arguments dans un autre tableaux, j'ai fait appel à memcpy qui permet de copier les zones
mémoires, donc la méthode que j'ai trouvé être la plus efficase pour copier un tableau de char. Comme un tableau est une
suite de zone mémoire, c'est ce qui me paraît le plus adapté puisque que j'ai tout malloc et que j'ai la taille allouée.

```c
size = strlen(argv[i]) * sizeof(char);
tab[i] = (char *) malloc(size);

if (tab[i] == NULL) {
fprintf(stderr, "Memory allocation error, %d", i);
return NULL;
}

memcpy(tab[i], argv[i], size);
```

Je ne me suis pas encore attardé sur le dernier exercice pour véritablement comprendre comment fonctionne malloc et
free, j’ai une petite conception grâce aux cours d’architectures système, mais je n’ai pas encore pris le temps de
regarder en profondeur. Et bien entendu, mes trois exercices sont leaks free !

| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| TP9 | 10 | 1 | 1 | 1 |  | 1 |  | 2 | 1 | 1 | 2 |

## [TP8](https://github.com/Kwaaac/ProgC/tree/main/TP8)

Le TP8 était intéressant à faire et j’ai beaucoup apprécié appliquer la mémoïsation mais je ne pense pas que je maîtrise
ce principe ni même si je vais le réutiliser dans des projets futurs. J’ai suivi le tp “à la lettre” en implémentant
l’algorithme, et il m’a permis de continuer à mettre en pratique les connaissances que j’ai acquises jusqu’ici.

| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| TP8 | 6 |  | 2 | 1 |  |  | 2 | 1 | 1 |

## [Projet Three To Go](https://github.com/Kwaaac/ProgC/tree/main/Projets/ThreeToPush)

Après avoir bien avancé la plupart des TP et fait ce que j’avais envie de voir pour ce premier semestre, j’avais envie
de commencer un projet.

En DUT2, nous avions appris et fait des TP sur les listes chaînées et doublement chaînées donc en lisant les quelques
projets disponibles, mes yeux ont tout de suite louché sur le three to go.

Mon objectif sur le projet n’est pas véritablement de le terminer avant la fin du semestre, mais plus de m’amuser à
faire le jeu dans un premier temps et de revoir les listes chaînées dans un second temps.

Je le précise dans le readme, mais je suis aller jusqu’au niveau 1,75 on va dire. Le jeu est jouable, mais le système de
décalage à gauche n’est pas implémenter, la structure l’y prépare, mais je ne l’ai pas encore coder.

Ce dont je suis assez fier, c’est qu’il m’a fallu assez peu de temps (tout est relatif bien sûr) comparer à ce que je
pensais investir dans ce projet. Surtout que j’ai voulu expérimenter un peu les limites des énumérations avec le niveau

1.

Dans le projet on nous demande d’attribuer moralement dès entier aux formes et couleurs. Ce que j’ai fait c’est de les
associer avec des énumération. Sur le coup, malin, ça me permet d’avoir un affichage console bien plus lisible que ce
que l’énoncé proposé et dans le code je trouve ça plus lisible d’avoir une création de token avec “TRIANGLE, ROUGE” que
“0, 2”.

Donc j’ai pu progresser sur l’utilisation des énumération et j’en suis content, mais le problème s'est avéré très casse
pied une fois rentré dans la partie graphique. Comme l’intêret de ces énumeration était surtout pour l’affichage
console, je me suis retrouvé bien idiot à devoir faire des fonctions pour traduire les énumération parce que je devais
créer des token aléatoire (donc avec des int, qui sont au final des énumerations…).

Mais je suis très content du résultat, les fonctions sont bien atomique et n’offrent qu’un seul rôle. Mes différents
modules (qui ressemble à du MVC) sont bien définis et clairs.

Grâce à cette modularité, le main du jeu est très court et concis.

Bien entendu, j’ai pu mettre en œuvre les nouvelles connaissances sur les malloc et les free pour bien allouer et free
mes structures. Dommage que la libmlv fasse autant de fuite mémoire (même un create_window → free(window) fait des
fuites de mémoire).

Je compte continuer ce projet pour le deuxième semestre et terminer le niveau 3 avec peut-être d’autres fonctionnalités
en fonction de la charge de travail. Ceci dit j’ai déjà deux pistes d'amélioration dans ce projet.

La première est de faire une documentation doxygen, c’est la première fois que je vois ce type de documentation et
j’aimerais m’y pencher pour faire de bonnes documentation de mes projets. Je vais généralement déjà les commentaires
“correctement” (/** … */ devant les fonctions), mais j’aimerais apprendre toutes la nomenclature pour produire cette doc
à chaque TP et projets.

La seconde est l’amélioration des fonctions de recherche de token à supprimer. Je veux avoir une fonction plus générique
qui me permette de supprimer plus de 3 token en fonction et qui me donne quel type de suppression à faire (pop, remove,
sur les listes doublement chaînées en couleur et forme).

Finalement, je suis tout de même content car j’ai fait quelque gribouilli sur papier avant de me lancer dans
l’architecture et j’ai réussi à la mettre en place sans trop d'accroc (autre que des erreurs d'inattention) et elle
réussit à tenir le coup jusque là et je ne pense pas que j’aurais à la refaire pour pouvoir réussir la suite.

En bref, un projet WIP qui commence bien et qui m’a bien amusé !

| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Three To Go | 10 | 1 | 1 |  | 1 | 1 | 1 | 1 | 1 | 2 | 1 |  |  |  | 1 | 

## Introduction S2

Et nous revoilà pour un tour ! Bienvenue dans la partie S2 du rapport ! Contrairement à espérer dans la première
partie (que je ne changerais pas d'ailleurs !) Je n'aurais malheuresement pas continuer mon projet, préférant me
concentrer sur les TP fils rouges qui sont pour moi, de mini projets et me semble plus formateur.

En revanche, pour faire les choses correctement, mes objectifs sont simple, essayer de faire en sorte qu'ils soit
propres et bien réaliser en essayant de réduire aux maximum les erreur de mauvaises utilisations et également commencer
à me vouloir du mal en me rajouter un maximum de flags histoire que le code soit transposable au maximum !

Les flags en questions:

```c
-Wall -Wextra -Werror -ansi -g -pedantic-errors -Wunreachable-code
```

Aussi, comme précisé au semestre précédent, j'ai bien envie de découvrir comment fonctionne Doxygen car mine de rien,
comme j'ai l'habitude de toujours faire une doc en mode "javadoc" dans mon code de base, autant s'en servir pour en
faire une belle avec site ! Donc tous les TP qui vont suivre possède une documentation Doxygen qui se génère avec la
commande:

```shell
./make doc
```

Et franchement, ça claque !

Enfin, bien entendu, chaque TP est exompt de fuite de mémoire parce que c'est important un code de qualité !

Bref, j'espère que vous apprécirez la lecture de cette suite de portfolio, et je vous souhaite de passez une agréable
lecture !
Commençons tout de suite avec le TP numéro 10 !

## [TP10](https://github.com/Kwaaac/ProgC/tree/main/TP10)

Ce TP m'a donner un peu de fil à retorde pour plusieurs raisons. Premièrement le premier exercice, j'ai eu beaucoup de
mal à le comprendre et je ne voyais absolument pas comment m'y prendre. C'est au final grâce à mon chargé de TP (M.
Borie) que j'ai pu comprendre comment il fallait s'y prendre.

Si je cast les zones mémoire donnée en paramètre, et que je les cast en char, je vais saisir les zones 1 octets par 1
octet. Dans la mémoire, lui il a simplements des 1 et des 0, c'est au compilateur d'interpréter la série binaire. Donc
si je lui dis de prendre 1 octet par 1 octet et de continuer jusqu'a ateindre la taille donnée en paramètre, alors
j'aurai inverser chaques bits en mémoire de ce que je fournis !

Ça m'a permis de comprendre un peu plus la manière dont la mémoire est gérer et cela m'a permis dans le TP11 de créer
une fonction qui reprend ce principe de balade par octet !

Ensuite, autant parler de ce qui a bien fonctioner ! Comme indiquer dans le README.md du TP, l'objectif est de mettre en
pratique les pointeurs de fonctions. C'est une notions que j'ai l'habitude d'utiliser et avec laquelle je suis familier,
ce serait-ce que en python. Nous avons appris avec M. Revuz comment trier des listes avec des pointeurs de fonctions (
E.g trier par ordre décroissant). Et au dela de ça, je l'ai également utiliseren java de la même manière avec les
interfaces fonctionnelles et les lambdas.

Donc pour le TP, j'ai réaliser les deux fonctions pour comparer deux cellules en fonction de leurs nom puis de leurs
ages et vice versa :

```c

int compare_age_then_name(Cell *p1, Cell *p2) {
int res = age_order(p1, p2);

if (!res) {
return name_order(p1, p2);
}

return res;
}

int compare_name_then_age(Cell *p1, Cell *p2) {
int res = name_order(p1, p2);

if (!res) {
return age_order(p1, p2);
}

return res;
}
```

Le but de ces fonctions est de respecter la norme des fonctions de compraison qui veut renvoyer -1 si le premier élément
est inférieur au second, 0 si il y est égal et 1 si il y est supérieur.

Une fois les fonctions créer il m'a suffit de les implanter dans la fonction ordered_insertion qui utiliser un pointeur
de fonctions:

```c
void ordered_insertion(List *list, Cell *new, int order_func(Cell *, Cell *)) {
Cell *pred;

if ((*list) == NULL) {
*list = new;
return;
}

if (order_func((*list), new) > 0) {
new->next = (*list);
(*list) = new;
return;
}

/* We catch the the good position of our new element in the list */
for (pred = (*list);
pred->next != NULL && !(order_func(pred, new) <= 0 && order_func(pred->next, new) >= 0); pred = pred->next);

new->next = pred->next;
pred->next = new;
}
```

Et voilà qui cloture les pointeurs de fonctions sur ce TP

Ma plus grosse difficulté dessus à été un objectif personnel à la noix. Si vous voulez, j'ai souvent eu des difficulté
avec la lecteur / écriture dans les différents langages que j'utilise, et dans ce TP, pas de bol, on s'y colle.

J'aurais pu lire mot par mot et faire un modulo sur les noms / prénom / age.

Mais ça aurait été trop simple. Je me suis mis en tête de tester d'autres fonctions de la librairie string.h dans l'
objectif de lire le fichier ligne par ligne puis diséquer la ligne en trois et d'y réattribuer d'abords les nom puis les
prénom puis l'age.

Pour mettre en place cela, j'ai utiliser la fonction de string.h --> char * strtok( char * string, const char *
delimiters ) !

Donc je m'en suis aller lire le man sur strtok et voici ce qui en est resorti:
Je peux découper une chaîne de caractère --> Bien !
Il faut faire attention à son utilisation c'est un peu bizare (mettre la chaîne puis NULL à chaque nouvel appel) --> Bon
ça peut passer Ce n'est pas thread-safe car ça utilise un unique pointeur de fonction --> Au dernières nouvelles, je ne
fais pas de multi threading.

Au vu de cela, c'est une idée pas trop horrible d'utiliser cette fonction pour faire ce que je souhaite.

Selon la documentation voilà comment j'ai implémenté strtok

```c
    while (fgets(str, MAX_READ, f) != NULL) {

first = strtok(str, " ");
last = strtok(NULL, " ");
age = atoi(strtok(NULL, " "));

cell = allocate_cell(first, last, age);

ordered_insertion(list, cell, compare_age_then_name);
}
```

Comme cela je récupère chaques nom, prénom et age en fonction des espaces.

Puis je me suis dit, que grâce à strtok, je pourrai alors customiser mon split !

Donc pour cela j'ai créer une section help dans le programme avec --help

```shell
kwaaac@DESKTOP-OVA9K3G:/mnt/c/Users/maxro/Documents/c/ProgC/TP10$ ./tp10 --help

This program must be use with at least a correct file. Note that we consider you using the good format and the good delimiters to your files:
./tp10 <file_name>
        --help : print this help section
        --delimiter <delimiter> : Use the delimiter between string in the file to slit the lines.
```

Et donc j'ai légèrement remanier le code du strtok pour accepter un argument spécial:

```c
    while (fgets(str, MAX_READ, f) != NULL) {

first = strtok(str, delimiter);
last = strtok(NULL, delimiter);
age = atoi(strtok(NULL, delimiter));

cell = allocate_cell(first, last, age);

ordered_insertion(list, cell, compare_age_then_name);
}
```

Delimiter correspond alors aux délimiteur personnaliser, comme par exemple, les informations d'un fichier csv !
Par conséquent j'ai testé sur un nouveaux fichier qui remplace les espaces par des "," et ça fonctionne correctement !

C'est une petite amélioration dont je suis relativement content car ça partait d'un peu d'une envie à moitié sortie de
nulle part qui mène à une finalité qui me plait et qui fonctionne correctement !

La seule chose que je n'ai pas prise en compte dans ce TP est la bonne teneur des fichiers, je considère que le fichier
fournit en argument est juste dans son contenu et qu'il respecte les délimitation (Faut pas exagérer non plus).

Au final, ce TP m'a permis de revoir les pointeurs de fonctions sans grande difficulté et de m'adapter de manière
relativement intéréssante à un petit objectif personnel que je me suis imposé pour sa réalisation en me forçant à aller
chercher dans la documentation comment split des lignes en accord avec ce que je souhaitais faire et l'utilisation de
mon programme. Le tout en me permettant d'ajouter une fonctionnalité amusante !

Voici le petit tableau de point que je me suis accordé en fonction :

| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| TP10 | 12 | 3 | 1 | 1 |  | 1 |  |  | 2 | 1 | 1 |  |  | 1 | 1 |

## [TP11](https://github.com/Kwaaac/ProgC/tree/main/TP11)

Le jeu de taquin !

Celui là, je l'ai vraiment réalisé avec beaucoup de plaisir !
L'objectif du TP est de réaliser un jeu de taquin à minima amusant à faire et je pense l'avoir réussi !

Ce TP à subit beaucoup de modification entre le début et la fin (Merci captain obvious).

Cependant, quels sont-il ?

Bon déjà en ce qui concerne le projet en lui-même, comme toutes mes production graphiques, je souhaites faire une
architecture qui tiens la route avant de poser une interface graphique. Vous pourrez alors retrouver des fonctions qui
affiche le jeu non pas en graphique mais en classique ligne de commande:

```c
void print_board_command_line(Plateau *p);
```

C'est une bonne pratique selon moi, j'ai réaliser toutes les fonctions me permettant de jouer, swap des blocs mélanger
le plateau, le créer, le free, etc. Avant de permettre de faire quoi que soit de manière graphique.

L'avantage, c'est que au moins, si il y a un problème à partir de ce moment là, ce n'est pas un problème d'architecture
car le jeu fonctionne, mais bien de partie graphique.

Donc en ce qui concerne l'architecture, rien de bien particulier, la seule petite astuce que j'ai apprécie, c'est le
fait que dans la structure de plateau, j'ai garder un champs contenant un pointeur vers le bloc noir, histoire d'éviter
d'aller le fouiller dans tout le plateau à chaque fois. Sa position est mise à jour à chaque déplacement.

hormis que j'ai réaliser une amélioration sans le vouloir. Il est précisé dans le sujet de générer un plateau avec des
entiers pour vérifier que le jeu est terminer. Puisque que je vérifie en version ligne de commande, sans lire les
améliorations, c'est ce qui m'a paru le plus simple vérifier que le tableau est bien complet et j'ai gardé cette méthode
pour la version graphique.

Maintenant, le graphique. J'ai eu plusieurs idée avant de lire la documentation, la première base était de partir sur
découper l'image puis de sauvegarder chaques images dans un fichier portant le nom de l'image. L'idée de base était que
si je souhaitais faire des sauvegarde, en sauvegardant les images, j'ai simplement à les relire dans l'ordre de
sauvegarde pour les replacer.

Après quelques essais infructueux, j'ai continuer à lire la documentation de la LibMLV en oubliant cette idée (qui je
l'accorde est à moitié foireuse), puis je suis tomber sur:

```c
MLV_copy_partial_image()
```

Magnifique ! La manière dont j'ai organiser l'architecture, il s'agit d'une structure de plateau qui contient une liste
à deux dimensions de bloc. Par conséquent, j'ai mis l'image découpée dans chaque bloc pour qu'il possède son image perso
que j'afficherai à chaque mise à jour !

En voici le code:

```c
for (i = 0; i < height; i++) {
for (j = 0; j < width; j++) {
tmp = MLV_copy_partial_image(image, j * img_height, i * img_width, img_width, img_height);

p->bloc[i][j].lig = i;
p->bloc[i][j].col = j;
p->bloc[i][j].weight = i * width + j;
p->bloc[i][j].image_bloc = tmp;
}
}
```

Donc les images ne posant plus aucun problèmes, tout fonctionna relativement rapidement ! J'ai pu réutiliser moult
fonction déjà réaliser pour les productions précédantes (Coucou le sudoku !).

Le seul petit bug que j'ai eu était que le randomizer ne fonctionnait pas bien à cause d'un mauvais opérateur donc une
fois le problème mineur corrigé, c'était plié !

Mais ensuite, j'ai chercher à améliorer la chose !

Premièrement, une petite animation pour shuffle le taquin, pas très compliqué, lors du randomizer, j'affiche le plateau
qui donne une sensation d'animation (Merci MLV_wait).

Ensuite, il faut savoir que je suis la plus grande de toute les brèle au jeu de taquin, j'ai besoin d'aide pour ce truc,
donc il me parait évident de rajouter une aide qui m'affiche l'image originale. Pour cela, j'ai pu apprendre à utiliser
les gestion des événements de la libMLV mais totale (pas le MLV_wait_mous()), ce qui ma demander de bien lire la doc sur
comment fonctionnait toutes les touches, car comme il n'y avait plus d'attente de clic bon, et bien il suffisait de
déplacer la souris pour échanger les cases.

Au final, si vous appuyez sur "m" lors du jeu, l'image apparait quelques instant. Et j'ai pu noter un soucis qui faisait
que si je spammais "m", l'image bloquait ! Donc relecture de la doc pour chercher une fonction qui flush les events qui
s'entasse

```c
MLV_flush_event_queue();
```

Hello !

Donc avec ceci, plus de problème.

Et voilà qui termine mes améliorations de bases du jeu.

Puis j'ai reçue [la review de Romain BARBE](https://github.com/Kwaaac/ProgC/issues/9) qui m'ont indiquer plusieurs
points

- Bon, déjà seg fault quand on gagne (fail des free...);
- Pas de précision qu'il manque un argument quand pas fourni;
- Si on met un mauvais fichier, ça seg fault.

Par conséquent, je corrige le free, qui était du au fait que je faisait des free en trop, j'ajoute les gestions des
argument comme au TP précédent.

Puis à la base j'ai pas envie de faire le dernier point, puis je me souviens que dans le TP on nous demande de le faire
que sur des images .gif, .png et jpg.

Donc nous sommes partie, je me suis donc amusé à refaire une fonction se base sur l'exercice 1 du TP10 pour aller
chercher les bon caractère d'une chaînes de caractère et aller regarder la documentation pour comparer des chaîne de
caractère sur une longueur données (parce que bon à la base, l'objectif était de comparer caractère par caractère puis
je me suis dit que ça devait déjà exister).

Et d'une grande inspiration de mon bot discord en JS, la fonction end_with est née:

```c
int ends_with(char *str, char *end) {
size_t size_str = strlen(str);
size_t size_end = strlen(end);
if (size_end > size_str) {
return 0;
}

return strncmp(str + size_str - size_end, end, size_end) == 0;
}
/* ... */
int main(int argc, char* argv[]){
/* ... */
if (!ends_with(argv[1], ".png") || !ends_with(argv[1], ".gif") || !ends_with(argv[1], ".jpg")) {
printf("Wrong file format, \"%s\" is not a png, gif or jpg\n", argv[1]);
return 1;
}
}
```

Et grâce à cela, on peux choisir son image (tant soit peut qu'elle fasse 512x512 pixels) et qu'elle respecte le format
demandé !

Hormis cela, la review est généralement bonne et s'enssuit alors une seconde review !

La [review de Cynthia DULYMBOIS-LOUISON](https://github.com/Kwaaac/ProgC/issues/10) à confirmer les améliorations, et
hormis le fait que pour les tests j'avais mis en commentaire le randomizer, la review est positive !

Bien entendu, la documentation Doxygen est disponible à la génération !

Voici le tableau de point associé :

| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| TP11 | 14 | 1 | 2 | 1 | 1 | 2 |  | 1 | 1 | 2 | 2 |  |  |  | 1 |

## [TP12](https://github.com/Kwaaac/ProgC/tree/main/TP12)

L'objectif de ce TP était du TP était de voir les grandes différences entre listes chaînée et les tables de hashages. Je
ne pense pas avoir réinventer la roue sur ce TP, comparer aux autres TP, celui ci ne regorge pas de petites amélioration
en tout genre.

Cependant, c'est toujours intéréssant d'appliquer ce genre d'algorithmes, comme c'est quelque chose que nous avions déjà
vu en algorithmie, c'est un bon rappel à comment les tables de hachage fonctionne.

C'est pour quoi, sur ce TP, je me suis donner l'objectif de ne pas copier coler mes fonctions mais d'abord essayer de
refaire depuis le début en essayant de m'en souvenir.

Ça c'est correctement bien passer, j'ai eu des trou de mémoire à certain moment donc je suis aller voir ce que j'avais
fait auparavant uniquement en ce qui concerne les tables de hachages.

Et une fois terminer je suis tomber sur un warning de valgrind que je n'avais jamais eu auparavant.

Un unitilise warning, je fesait un check de NULL sur une variable non initialisé, je ne mettais pas les variables
allouée à NULL. Pour cela plutôt qu'un malloc, j'ai utiliser un calloc, comme cela, mes variables était initialisé sans
soucis.

C'est à partir de là que j'ai été vérifier mes autres TP et certain l'avait aussi, donc j'ai tout corrigé avec un calloc
qui permet de mettre tous les bit à 0 et donc de vider la zone mémoire.

Tout comme les autres TP, ce TP possède une documentation Doxygen et ne possède (plus) pas de fuite mémoire !

Voici le tableau de points:

| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| TP12 | 11 | 2 | 1 | 1 |  |  |  | 1 | 1 | 2 | 1 | 1 |  |  |  |

## [TP13](https://github.com/Kwaaac/ProgC/tree/main/TP13)

Le jeu des 8 dames! J'attendais ce TP au tournant car j'ai la manipulation de bit est une notions que je trouve
compliqué à appréhender et donc c'est un sujet sur lequel je souhaitais faire quelque chose de propre.

Et donc pour la partie Bit à Bit, j'estime que c'est réussi sauf pour la fonction pour mettre le bit à 0.

Pour le mettre à 1, j'ai fait ceci:

```c
void set_positive_bit_ULI(unsigned long int *n, int position) {
*n = *n | (((*n >> position) | 1) << position);
}
```

Modifier la positions par rapport à n et non par rapport à un 1 permet une meilleur adaptation, pas besoin de cast et
j'ai utiliser cette méthode dans toutes les autres fonctions égalements, je la trouve légèrement plus compliqué à
comprendre, mais également plus adéquat à une utilisation générale.

Ceci dit, après avoir plancher dessus, je n'ai pas réussi à mettre en place la même chose pour mettre le bit à 0 avec
cette méthode donc je me suis résigner à utiliser le cast:

```c
void set_negative_bit_ULI(unsigned long int *n, int position) {
*n = (*n) & ~((unsigned long int) 1 << position);
}
```

Cela fonctionne parfaitement mais le fait que je n'ai pas réussi à mettre en place avec la position est dommage selon
moi, mais cela fait parti des difficultés rencontrer et rien de mal à ça !

Pour ce qui est de la suite du TP, tout comme le jeu de taquin, j'ai tout d'abord effectuer le jeu uniquement par ligne
de commande, donc vous retrouverez encore les fonctions qui affiche en ligne de commande. Le plus compliqué après la
manipulation de bit à été la gestions de la mise à 1 des bits de la ligne, colonne et diagonale.

J'ai mis beaucoup de temps à faire quelque chose qui me plait et j'en suis relativement fier.

L'idée, c'est que de base, je souhaitait simplement faire 3 fonctions et chaqu'une boucle dans un sens puis dans l'autre
pour mettre les bits à 1.

Mais bon, ça se ressemble beaucoup tout de même, donc je me suis mis en tête de factoriser cette fonction au mieux, et
ça à correctement réussi selon moi !

```c

/**
 * This function will update every bits to 1 corresponding to the parameters
 *
 * @param n The board
 * @param position The actual position of the queen
 * @param start_index The starting index (either row or column)
 * @param delta The next position of the bit
 */
void set_cells(unsigned long int *n, int position, int start_index, int delta) {
int i, pos_update;

for (i = start_index, pos_update = position;
i < 8 && pos_update >= 0 && pos_update < 64; i++, pos_update = pos_update + delta) {
set_positive_bit_ULI(n, pos_update);
}

for (i = start_index, pos_update = position;
i >= 0 && pos_update >= 0 && pos_update < 64; i--, pos_update = pos_update - delta) {
set_positive_bit_ULI(n, pos_update);
}
}
```

La fonction va alors prendre en paramètre la position de la reine, on lui donne un index de départ, soit colonne ou
ligne et quel est le prochain bit à 1 avec le delta.

Grâce à cette fonction, les trois autres fonctions pour mettre à jours les lignes, colonnes et diagonales sont
extrêmement simple et courte, sans duplication de code:

```c
/**
 * Set every bits of the board to 1 on the line of the given position
 *
 * @param n The board
 * @param position The position of the queen
 */
void set_line(unsigned long int *n, int position) {
set_cells(n, position, position % 8, 1);
}

/**
 * Set every bits of the board to 1 on the column of the given position
 *
 * @param n The board
 * @param position The position of the queen
 */
void set_column(unsigned long int *n, int position) {
set_cells(n, position, position / 8, 8);
}

/**
 * Set every bits of the board to 1 on the diagonals of the given position
 *
 * @param n The board
 * @param position The position of the queen
 */
void set_diagonals(unsigned long int *n, int position) {
/*First diagonal*/
set_cells(n, position, position % 8, 9);

/*Second diagonal*/
set_cells(n, position, position % 8, -7);
}
```

Enfin, ce qui concerne la partie graphique de ce TP, rien de bien nouveau comparé au jeu de taquin, elle à été
relativement simple à mettre en place, et elle fonctionne comme il faut !

En somme ce TP à résulter en beaucoup de reflexion sur la manipulation de bit et comment le rendre propre puis comment
rendre correct selon moi le code du jeu avec un tableau et non une matrice comme à mon habitude.

Malgré le changement de dimension, je n'ai pas trouver ça trop perturbant, une fois que j'avait compris comment
fonctionnait les mathématiques derrières, tout est aller relativement rapidement !

Comme d'habitude, pas de fuite mémoire et une documentation est fournit !

Voici le tableau de point:

| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| TP13 | 13 | 1 | 1 | 1 | 1 | 2 |  | 1 | 1 |  | 1 |  | 2 |  | 1 |

# Review et aide

## Semestre 1

Voilà ce qui termine la review de mes TP. En parlant de review, je passe nonchalamment sur les (la) review que j’ai
effectué sur celle de Robin sur son TP6 que j’ai effectué juste
ici: [Review](https://github.com/Kwaaac/ProgC/blob/main/reviews/RIEUTORD%20Robin/review.md)

Je n’ai peut-être pas fait de review, mais j’ai eu la chance d’assister quelques personnes de la promo !

SI quelqu’un demandait de l’aide sur le discord que ce soit sur les TP de C ou sur les TP d’algo (en C), je n’ai pas
hésité à les aider, mais les personnes que j’ai le plus aidé ont été Christopher WILLIAM et Éric ROBERT.

Dans un premier temps, j’ai assisté Éric dans sa réalisation de ces TP 5, 6 et 7 car il était littéralement à côté de
moi pendant la semaine de partiel à cause de sa distance face à l’école (les mesures barrières ont été respectées, ne
vous en faites pas). Donc forcément quand il avait besoin d’un débogage parce que seg fault, j’ai pu l’aider à droite à
gauche.

Je souhaites tout de même insister dessus, mais autant au début de ce semestre j’avais un niveau en C pitoyable, je
trouve que je me suis beaucoup amélioré et j’ai réussi à prendre certain automatisme que j’espère sont correct. Mais
comparé à moi Christopher à véritablement débuté le C et avait beaucoup de problèmes quant à la compréhension de ce
dernier au début. Certe ce n’est pas devenu un expert C, mais pour l’avoir accompagné sur ces TP du TP4 jusqu’au TP6 et
sur ces TP d’algo, je souhaites vraiment vous dire qu’il a fait de sacré progrès, par rapport à ces débuts, j’espère que
vous le remarquerez dans sa production du portfolio, mais je tenais à le mettre ici aussi.

De mon côté, ça à été un apprentissage vraiment hors du commun, car j’ai pu véritablement mettre en pratique mes
connaissances et expliquer ce que j’ai fait, ce que j’ai compris est selon moi le meilleur moyen d’enfoncer le clou sur
l'assimilation de ces compétences. J’ai pu fortement échanger et d'autres camarades ont pu soulever mes nombreuses
erreurs (Un grand merci à Guillaume DOMART et Mehdi KHENISSI qui m’ont beaucoup aidé).

Je souhaite tout de même vous informer que la manière avec laquelle j’ai aidé ces personnes a été similaire à celle que
j’ai employée avec des élèves que j’ai pu tutoré en javascript. Je ne leur donne pas la solution, je pousse à les faire
réfléchir pour les faire arriver aux conclusions que j’ai expérimenté, mon objectif n’étant pas de les faire terminer
les TP mais de comprendre ce qu’ils ont écrit, c’était long, mais, encore une fois, j’ai pu voir de très bon progrès
chez Christopher. PlaTon Petit aparté sur les notes que j’ai eu sur PlaTon que j’ai effectué la semaine avant l’examen
pour m'entraîner, et je suis assez content du résultat, surtout sur la partie fonction !

## Semestre 2

Ce semestre, j'ai réaliser un peu plus de review, voici la liste:

- [TP14 de KHENISSI Mehdi](https://github.com/khenissimehdi/C-TP/issues/2)
- [TP12 de BARBE Romain](https://github.com/Kwaaac/ProgC/blob/main/reviews/BARBE_Romain/TP12/reviewTP12.md)
- [TP10 de Cynthia DULYMBOIS-LOUISON]()

Tout comme le semestre précedent, nous sommes une promotion qui, je trouve s'entraide beaucoup et au moindre soucis, que
ça soit moi qui ai une question ou quelqu'un qui en ai une, il y a toujours un coup de main disponible que j'ai su
tendre ou prendre.

Les review que j'ai donner on permis des améliorations, et les review que l'on m'a faite on permis de beaucoup améliorer
mon jeu de taquin ! Dont je suis tout particulièrement fier !

Cette fois ci, pas de platon poussé pour moi par manque de temps.

# Conclusion

## Semestre 1

En conclusion, je suis très satisfait de ce semestre. Selon moi j’ai réussi à atteindre mes objectifs que je m'étais
fixé en début de semestre et j’ai retrouvé les compétences que j’avais en DUT et au delà de ça j’ai pu véritablement
apprendre de manière bien plus “théorique” le C. Je suis encore loin d’avoir un excellent niveau, mais j’ai à mon sens
réussi à atteindre une certaine aisance qui me conforte dans l’idée que j’apprécie coder dans ce langage et que j’arrive
à fournir des rendu qui sont un tant soit peu corrects.

Pour ce qui va être du C2, je compte bien entendu faire les TP fils rouge du C2 car ce sont toujours un moyens sûr de
mettre en pratique mes connaissance et de me donner des objectifs clair sur ce que je dois faire, mais j’ai discuté avec
Guillaume DOMART pour que nous fassion le Push It Down comme projet commun et on prévoit de faire le faire à 100% et
d’ajouter de nombreuses fonctionnalités (comme un générateur de niveau aléatoire et un éditeur de niveau). Et bien sûr
terminer le projet Three To Go.

## Semestre 2

Ahh les prévisions revue à la baisse quel plaisir !
Ceci dit, même si nous n'avons pas pris le temps avec Guillaume de faire notre super projet et moi de terminer le Three
To Go, ça à tout de même été un semestre très riche en approfondissement des notions de bases que j'avais acquise lors
de ce premier semestre.

Après avoir fait une année entière de C, je me sens confiant de l'idée de me dire que je sache programmer en C, je pense
avoir compris le paradigme et les attente du langage et ce qu'on veut faire avec, et au-delà de ça, le fait d'avoir
réussi les différents TP en sachant quoi faire, sans me retrouver bloquer et planter et perdu c'est une bonne chose.

Si j'avais une idée en tête, je savais ou aller chercher pour la réaliser, la documentation en C était un calvaire à
comprendre auparavant et je la déchiffre facilement aujourd'hui (ne serait-ce que pour le strtok ou bien la review de
Mehdi qui m'a poussé à aller lire la doc de ftw et stat pour comprendre comment ça fonctionnait et s'il avait fait
quelque chose de correct). Et cette aisance est importante pour moi car si je me retrouve à refaire du C à un quelconque
moment, ce sont des apprentissage que je pense garder et si je terminer par les oublié ce portfolion et les exercices
que j'ai réaliser pourront toujours me servir de base, car tout y est documenté, ma reflexion y est expliqué.

Donc si il y a bien une chose dont je suis content, c'est que comparé aux dernière fois ou j'ai appris le C, J'ai
véritablement l'impressions d'avoir compris comment fonctionne le langage et comment programmer dessus.

Et il faut le dire. Mais cette année, j'ai mieux compris les pointeurs, chose qui étaient une sorte de brouillard
étrange que je n'espérai jamais visualiser un jour

Si je peux me permettre de faire un apparté, le système de ce portfolio à très bien fonctionner sur moi, il m'a motivé à
faire plus sur certains TP et ne pas les voir comme un travail que je dois fournir avec X cahier des charges à
respecter, mais me permettre de faire plus si l'envie m'en prenais et cet envie de faire plus est ajouter sur le long
terme et seulement sur le TP en questions.

## Points total accumulé:

| Projet | Pts | I/0 | Type | Progr | Module | Compil | Récursion | Tableaux | Pointeurs | Structures | Allocation | Fichier | Bit à bit | Fct Pointer | Biblio |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Total | 130 | 16 | 16 | 13 | 10 | 15 | 7 | 10 | 8 | 8 | 8 | 4 | 2 | 1 | 7 | 

Les points accumulés dépassent les objectifs de base établis en 2018 donc je suis fier de ça !

Merci d’avoir lu ce rapport sur mon activité de l'année ! Je vous souhaite un bon courage après avoir lu ces pavés !
Et pour la suite des corrections !

(Pensez à vous hydrater).

