## TP13 - Jeu des 8 Dames

## Objectif

L'objectif de ce TP est de créer le jeu des 8 dames en C.

## Utilisation

Après avoir compiler les sources, executer le programme avec le fichier de nom en argument

```shell
./tp13 
```

Si vous souhaitez vérifier le valgrind, je vous invite à mettre l'affichage total, car la libMLV est une légère passoire
de mémoire donc pour voir si mon code à des fuites, executez ceci:

```shell
valgrind --leak-check=full --leak-resolution=med --track-origins=yes --vgdb=no ./tp13
```

## Documentation

Pour générer la documentation du TP, veuillez effectuer le make suivant:

```shell
make doc
```
