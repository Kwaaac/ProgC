# Rapport de relecture de code

Production soumise à la relecture : **TP12**
Projet/code produit par **BARBÉ Romain**
Relecture opérée par **RODRIGUEZ Maxime** le 6 juin 2021

## Concision et propreté des rendus

Les contenus transmis sont à la fois concis et complets. Un maximum d'éléments sont générés 
automatiquement rendant la production minimale en taille lors de sa diffusion.

Les exercies sont séprarer dans deux packages, chacun comprenant son propre makefile et sources, avec en prime le sujet du TP inclue.
Si il fallait chipoter, il manque un README introduisant le contexte

## Installation et compilation des sources transmises

Le makefile est bien documenté, il propose un haut niveau de verbose et intègre des règles 
pour générer un ou plusieurs contenus annexes (documentation avec doxygen, 
programme de tests supplémentaires, etc).

Les makefiles ne prodiguent pas de contenue annexe autre que ce qu'il leurs est demander de produire. En revanche il sont entièrement documenter et lisible dans leurs composition.

## Fonctionnalités implantées dans les rendus

Les programmes démontrent, durant leurs exécutions, qu'ils réalisent correctement l'intégralité 
du cahier des charges.

Les productions donnent effectivement le nombre de mots distinct comme requis par le cahier des charges.

## Utilisations et sécurité des programmes produits

Les programmes informent l'utilisateur et le conseillent en cas de mauvaise utilisation.

Il faut donner un argument au programme, si celui-ci n'est pas fourni un message d'utilisation du programme est fourni et très apprécié.

Note à part, si on fournit au programme un fichier autre que .txt, il va tout de même lire le nombre de mots, même sur des format non adéquat (Images par exemples). 
Les formats vidéos provoquent un Seg Fault.

Si l'on exclue les format un peu étrange, le code est résistant aux erreurs et fonctionne très bien de ce point de vue.

## Nommage des éléments dans les productions rendues

Les éléments des productions sont correctement nommés.

Il n'y a pas de séparation entre les différents modules (le mains, réalise la création et l'allocation des list/hash et contient les fonctions de lectures de fichier. Pour l'exo 2, le main contient également des fonctions lié aux tables de hashage qui devrait être dans link.c/h)

Dans un TP comme celui-ci, ce n'est pas dramatique, mais dans un projet de plus grande envergure, il faut penser à rendre les modules atomiques. 

En dehors des modules, les fonctions et variables à l'intérieur sont clair et ne facilite la compréhension du programme et c'est très appréciable !

## Efficacité et performance des productions rendues

Les programmes sont basés sur des algorithmes attendues.

Les algorithmes requise respectent bien leurs complexités (pour les tables de hashages) !

Une amélioration possible serait les fonctions "size_list" et "size_hashtable", aller chercher leurs taille va requérir de tout parcourir et selon les texte, ça peut monter très haut, surtout quand l'objectif d'une table de hashage est d'avoir un temps moyen de O(1).
Une alternative envisageable serait de passer dans les structure une variable "size" qui est mise à jour en fonction des ajout et suppression des éléments, ce qui permet de garder une complexité de O(1) même sur la taille de la liste/table de hashage

## Commentaires dans les sources des productions rendues

Un passage trop rusé ou surprenant manque de commentaires ou encore un commentaire est présent mais non-éclairant .

Le nombre de commentaire s'élève à 6 dans chaque exercices. Dont 5 qui sont de l'ancien code commenté. Et le 6ème est dupliqué.

Malgré le fait que le code soit compréhensible par quelqu'un qui a déjà travailler sur le TP ou sur sujet en général, une personne qui aborde pour la première fois les tables de hachage ou liste chaînée ne comprendrai pas grand chose.
Commenter l'intérieur des fonctions n'est pas nécessaire car les algorithmes parle d'eux même pour la plupart, mais il est important d'a minima commenter sur ce que font chaque fonctions dans le .h

## derniers commentaires :

Le TP est très bien réaliser, il exécute avec brio l'objectif du TP qui est de mettre en application le peu de complexité algorithme qu'offre les tables de hachage comparé aux listes chainées pour le stockage d'éléments. La différences est flagrante dans le code fournit et son implémentation est compréhensible pour quelqu'un qui à déjà travailler dessus.

Attention aux commentaires !