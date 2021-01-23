# Rapport de relecture de code

Production soumise à la relecture : **TP6**
Projet/code produit par **Robin RIEUTORD**
Relecture opérée par **Maxime RODRIGUEZ** le 10 janvier 2021

## Concision et propreté des rendus

Les contenus transmis sont à la fois concis et complets. Un maximum d'éléments sont générés
automatiquement rendant la production minimale en taille lors de sa diffusion.

Tous les fichiers sont présent, les makefiles font le travail.
Partie séparant l'exercice 2 et le solveur de sudoku.
L'énoncé est aussi présent, et ça c'est beau.

## Installation et compilation des sources transmises

Un makefile propre, lisible et complet permet la compilation de toutes les sources sans aucun warning
et avec les drapeaux -Wall et -ansi (voire -pedantic). Le makefile gère correctement les dépendances
et intègre une règle pour le nettoyage des produits de compilation.

Les deux makefiles permettent la générations adéquates des executables et ne nécéssite aucune documentation supplémentaire car ils sont explicite et se suffisent à eux-même.
Intégration du pedantic !

## Fonctionnalités implantées dans les rendus

Les programmes démontrent, durant leurs exécutions, qu'ils réalisent correctement l'intégralité
du cahier des charges.

Le TP est presque parfaitement remplis !
Si nous sommes tatillons, la dernière question demandait de donner le nombre de solution de la grille 5, le programme renvoie ceci-dit les solutions possibles, c'est à nous de compter  horreur.
Plus sérieusement, le programme répond complètement au cahier des charges.

## Utilisations et sécurité des programmes produits

Tous les cas d'utilisations normales sont traités correctement par les programmes.

Le programme s'exécute sans aucun accro dans la mesure ou l'utilisateur ne se trompe pas dans le nom des grilles résultant en une boucle infinis ou le programme tente de résoudre un sudoku qui contient -215181351861, un peu compliqué.

## Nommage des éléments dans les productions rendues

Les identifiants suivent des règles de nommages sur tout le code de manière cohérente.

Dans sa globalité, le nom des éléments décrivent leurs contenus, sauf pour deux coquilles !
height et width ne représentent ni une largeur ni une longueur mais des index d'une matrice. Se comprend en lisant ceci-dit

## Efficacité et performance des productions rendues

Les programmes sont basés sur des algorithmes attendues.

Ici l'éfficacité et performance de la production n'est pas pertinent.
Robin à démontrer l'application de l'algorithme de solveur de sudoku en backtracking comme il se doit puisque ses programmes sont concis et n'ont pas de duplication.

## Commentaires dans les sources des productions rendues

Un passage trop rusé ou surprenant manque de commentaires ou encore un commentaire est présent mais non-éclairant .

Ici toutes les fonctions n'ont pas de commentaire sur ce qu'elle font, renvoies, paramètres qu'elles requières ce qui rend le décodage compliqué si l'on ne connait pas le sujet.

Une fonction contient des commentaires sur ses différentes boucles: elem_valide

Attention aux commentaires qui parlent de vestiges de fonctions et de tests qui datent d'un ancien temps ;-)

## derniers commentaires :

Dans sa globalité le programme fonctionne parfaitement et répond aux exigence qui lui sont demandés. Si l'on connait le sujet et/ou a déjà fait le TP, il est compréhensible et est très bien réalisé.

1 Point négatif:
Fuite mémoire !
Robin à réaliser un malloc dans la fonction "add_elem" mais pas de free résultant en une fuite mémoire (tester avec valgrind).

Points d'améliorations - Point qui ne sont pas ultimes, mais juste des observations de ce que j'aurais fait à la place qui me semble intéréssant de souligné, je peux avoir tord -:
La fonction parcourir ne renvoit rien et tu utilise le passage par adresse pour initialiser les variables height et width.
Ensuite tu vérifies si elle sont initialisé pour continue le programme.
Un moyen qui me semble plus intéressant serait que ta fonction parcourir renvoie un int pour déterminer si tu peux continuer le programme ou non.

On nous rabache à tour de bras qu'il faut atomiser les fonctions et il faut qu'elle ne fasse que une seule chose. Si l'on suis cette logique les trois boucle qui verifie si un élément est valide auraient pu être décaler dans des fonction séparées pour rendre atomique la vérification par ligne, colonne ou région.
