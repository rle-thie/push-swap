# Push-Swap

## Description du projet

Push-Swap est un projet codé en C dans le cadre de mes études. L'objectif de ce programme est de trier une liste donnée d'entiers en minimisant le nombre d'opérations effectuées. La note finale du projet dépend fortement de cette optimisation.

Ce projet m'a permis d'acquérir plusieurs notions importantes, notamment le fonctionnement et l'utilité d'une pile (ou stack en anglais). La consigne du projet nous obligeait à utiliser deux piles et à trouver l'algorithme le plus rapide et optimisé afin de réaliser le moins d'opérations possible pour trier la suite d'entiers.

J'ai choisi d'utiliser l'algorithme de tri radix sort, car il est optimisé pour les grandes suites d'entiers. Pour les petites suites, j'ai implémenté un tri manuel. Le radix sort est un algorithme de tri qui trie les éléments en se basant sur les chiffres des nombres. Il s'agit d'un algorithme efficace et rapide.

Les opérations autorisées pour trier la liste sont les suivantes :
- Push : déplacer un élément de la pile source vers la pile cible.
- Swap : échanger les deux premiers éléments de la pile.
- Rotate : déplacer le premier élément de la pile à la fin.
- Reverse Rotate : déplacer le dernier élément de la pile au début.

## Qu'est-ce qu'une pile (stack) ?

Une pile est une structure de données abstraite qui fonctionne sur le principe du "dernier entré, premier sorti" (LIFO - Last-In-First-Out). Imaginez une pile d'assiettes : vous pouvez ajouter une nouvelle assiette (opération push) sur le dessus de la pile et retirer l'assiette du dessus (opération pop) pour accéder à l'élément le plus récemment ajouté. Vous ne pouvez ajouter ou retirer des éléments qu'à partir du sommet de la pile.

## Qu'est-ce qu'un algorithme de tri et le radix sort ?

Un algorithme de tri est une méthode utilisée pour organiser les éléments d'une liste dans un certain ordre. Le radix sort est l'un de ces algorithmes de tri. Il trie les éléments en se basant sur les chiffres des nombres. L'idée est de trier d'abord les éléments selon leur chiffre le moins significatif, puis de répéter ce processus en se déplaçant vers les chiffres les plus significatifs jusqu'à ce que toute la liste soit triée.

Voici quelques-uns des algorithmes de tri les plus connus :
- Bubble Sort (Tri à bulles)
- Insertion Sort (Tri par insertion)
- Merge Sort (Tri fusion)
- Quick Sort (Tri rapide)

## Tutoriel d'utilisation

1. Assurez-vous d'avoir le compilateur C installé sur votre système.
2. Clonez le projet Push-Swap depuis le dépôt Git.
3. Ouvrez un terminal et naviguez jusqu'au répertoire du projet.
4. Exécutez la commande `make` pour compiler le programme.
5. Une fois la compilation terminée, exécutez la commande `./push_swap "4 8 9 3 2 7 1"` pour lancer le programme. Remplacez la suite d'entiers entre guillemets par votre propre liste d'entiers à trier.
6. Le programme affichera les opérations à effectuer pour trier la liste donnée.

Amusez-vous à expérimenter avec différentes listes d'entiers et observez comment le programme minimise le nombre d'opérations pour trier les éléments.

## Tutoriel d'utilisation du testeur visuel

Avant d'utiliser le testeur visuel, assurez-vous d'avoir installé les dépendances nécessaires sur votre système. Dans un terminal, exécutez la commande suivante pour installer les dépendances :

```bash
sudo apt-get install make python3 python3-tk ruby
```

Une fois les dépendances installées, suivez les étapes ci-dessous pour utiliser le testeur visuel :

1. Exécutez la commande `make` pour compiler le programme.
2. Une fois la compilation terminée, exécutez la commande suivante pour lancer le testeur visuel :

```bash
python3 pyviz.py `ruby -e "puts (-50..50).to_a.shuffle.join(' ')"`"
```

Cette commande générera une liste aléatoire d'entiers dans l'intervalle de -50 à 50, puis exécutera le testeur visuel avec cette liste.

Le testeur visuel affichera une représentation graphique des piles et des opérations effectuées pour trier la liste d'entiers. Vous pourrez suivre visuellement les étapes du tri et observer comment les piles évoluent au fur et à mesure des opérations.

N'hésitez pas à essayer différentes listes d'entiers en modifiant les paramètres de la commande `ruby -e "puts (-50..50).to_a.shuffle.join(' ')"`. Vous pouvez spécifier votre propre plage d'entiers ou même fournir une liste prédéfinie à trier.

Profitez du testeur visuel pour mieux comprendre le fonctionnement de l'algorithme de tri et visualiser les différentes opérations effectuées pour trier la liste d'entiers.
