# Rapport de relecture de code

Production soumise à la relecture : **TP10**
Projet/code produit par **DULYMBOIS-LOUISON Cynthia**
Relecture opérée par **RODRIGUEZ Maxime** le 7 juin 2021

## Concision et propreté des rendus

Les contenus transmis sont à la fois concis et complets. Un maximum d'éléments sont générés 
automatiquement rendant la production minimale en taille lors de sa diffusion.

Production parfaitement compréhensible, lisible et organisée. Il y a même l'énoncé et c'est fort appréciable.

## Installation et compilation des sources transmises

Le makefile est bien documenté, il propose un haut niveau de verbose et intègre des règles 
pour générer un ou plusieurs contenus annexes (documentation avec doxygen, 
programme de tests supplémentaires, etc).

Le pedantic est activé et ne sort aucun warning ! Bien jouer !
Les makefiles proposent également le run automatique ainsi qu'un run avec valgrind ! Très propre

## Fonctionnalités implantées dans les rendus

Les programmes démontrent, durant leurs exécutions, qu'ils réalisent correctement l'intégralité 
du cahier des charges.

Le cahier des charges est entièrement respecter, les deux méthodes de comparaison retourne une liste correctement triée.

## Utilisations et sécurité des programmes produits

Les programmes ne produisent pas d'erreur même en cas d'utilisation non conforme.

Pas de mauvaise utilisation possible, l'utilisateur ne peux appliquer le programme que sur le fichier liste_nom.txt

## Nommage des éléments dans les productions rendues

Les identifiants apportent de l'information facilitant la compréhension par autrui.

Le code apporte à lui même toutes les informations nécessaire à sa compréhension et il est également très propre !

Il y a juste les méthodes de comparaison qui sont, à mon sens des usines à gaz.
Une bonne méthode pour éviter de faire une chaîne de condition dans un if qui peut être lourd à lire et à débuguer est de faire des fonctions auxiliaires:

Dans cet exemple, nous aurions pu avoir deux autre fonctions de comparaison, une qui compare deux noms et une autre qui compare deux âges.

```c
int compare_age(Cell *p1, Cell *p2) {
    if (p1->age < p2->age) {
        return -1;
    } else if (p1->age > p2->age) {
        return 1;
    }

    return 0;
}

int compare_name(Cell *p1, Cell *p2) {
    int cmp = strcmp(p1->last_name, p2->last_name);

    if (cmp == 0) {
        return strcmp(p1->first_name, p2->first_name);
    }

    return cmp;
}
```

Alors par exemple, dans la fonction age order:
On prend la comparison entre les ages;
Si les ages sont identiques, alors on renvoie le résultat de la fonction de comparaison entre deux noms;
Sinon, on renvoie le résultat de la comparaison entre les âges.

ce qui donnerai 
```c
int age_order(Cell *p1, Cell *p2) {
    int cmp = compare_age(p1, p2);

    if (cmp == 0) {
        return compare_name(p1, p2);
    }

    return cmp;
}

```

C'est une autre manière de procéder qui garde cette idée de fonction de comparaison et qui permet un code plus lisible selon moi !


## Efficacité et performance des productions rendues

Les programmes suppriment tout calcul non nécessaire à l'aide d'astuces simples et expliquées.

Le code s'éxecute parfaitement au rythme attendue ! 

Mention spéciale pour la lecture du fichier qui est très propre et très lisible

## Commentaires dans les sources des productions rendues

Les commentaires présentent les intentions et justifient les choix de programmation de l'auteur.

Il n'y a rien à redire sur les commentaires, présent là ou il faut, et toutes les fonctions sont commenté dans le style de la javadoc !

## derniers commentaires :

C'est un TP très bien réaliser qui respecte et accomplie tout ce qu'il doit faire. Ça à été très simple à lire du fait que tout y est détailler et que toute l'architecture est bien organisé, sans compter que le code est de qualité en terme d'algorithmie et aucune fonction est inutiles !

Bravo !