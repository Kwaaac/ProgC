# TP5 - On joue avec les tableaux

## Petit readme à l'attention des reviewers

### Makefile

Vous trouverez un makefile au sein du projet. Pour pouvoir compiler le projet il faut bien avoir la librairie read.c/read.h qui vient avec tout mes projets.<br>
Pour compiler le projet voici les deux commandes qui peut-être utilisé:<br>
`make` --> Clean, compile puis execute le programme sans la notion d'utilisateur (voir chapitre `Test`).<br>
`make user` --> Clean, compule puis execute le programme avec la notion d'utilisateur (voir chapitre `Test`).<br>

#### Desciption du makefile
`run`       --> Clean, compile puis execute le programme sans la notion d'utilisateur<br>
`user`      --> Clean, compule puis execute le programme avec la notion d'utilisateur.<br>
`exe`       --> Compile le programme<br>
`main.o`    --> Compile le main.c<br>
`array.o`   --> Compile le array.c<br>
`read.o`    --> Compile la librairie read.c<br>
`clean`     --> Clean le projet<br>
### Test
L'objectif du TP étant d'avoir une librairie de fonction pour créer et effectué des actions avec des tableaux, l'execution du programme lance des tests.<br>
Pour la revue il vous sera nécéssaire de lire le code vous-même. Donc vous pouvez profiter des tests pour vérifier des tests de bases que j'ai vérifié.<br>
Il y a deux types de tests, les tests qui ne nécéssite pas l'action de la personne derrière le clavier et ceux qui la nécéssite.<br>
Donc selon le make que vous effectuez, préparez vous à devoir taper sur votre clavier pour tester les fonctions.

## Remerciements
Merci à Mehdi qui m'a fait remarquer des bétises dans mon code.<br>
Merci à Guillaume pour la revue de code.<br>
Et un grand merci à ma maman parce que c'est une crème.<br>
