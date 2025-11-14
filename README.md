# 42 C Piscine

Ce dépôt contient mes solutions pour la Piscine C de l'école 42, ainsi que des travaux pratiques réalisés à l'IUT.

## 📚 Structure du Projet

### Modules C (C00 - C09)

La piscine C est organisée en différents modules, chacun ciblant des concepts spécifiques de programmation en C :

- **C00** (6 exercices) : Introduction aux fonctions de base
  - Affichage de caractères et chaînes
  - Manipulation de nombres

- **C01** (8 exercices) : Pointeurs et manipulation de mémoire
  - Utilisation des pointeurs
  - Fonctions de manipulation de variables via pointeurs
  - Tableaux d'entiers

- **C02** (9 exercices) : Chaînes de caractères
  - Manipulation de strings
  - Fonctions de copie et vérification de caractères
  - Validation de formats

- **C03** (6 exercices) : Fonctions de comparaison de chaînes
  - Implémentation de strcmp, strncmp
  - Concaténation de chaînes

- **C04** (6 exercices) : Conversion et analyse de chaînes
  - Conversion de nombres en chaînes
  - Parsing et analyse

- **C05** (8 exercices) : Récursivité
  - Factorielles, fibonacci
  - Fonctions récursives avancées

- **C06** (4 exercices) : Arguments de programmes
  - Manipulation de argc et argv
  - Tri de paramètres

- **C07** (6 exercices) : Allocation dynamique
  - malloc et gestion de mémoire
  - Création de tableaux dynamiques

- **C08** (6 exercices) : Headers et préprocesseur
  - Création de fichiers .h
  - Structures et macros

- **C09** (2 exercices) : Makefiles
  - Compilation automatisée
  - Organisation de projets

### 🏃 Projets Rush

Les Rush sont des projets collaboratifs réalisés en 48 heures :

- **rush00** : Création de formes géométriques en ASCII
  - Différents patterns (rush00, rush01, rush02, rush03, rush04)
  - Utilisation de dimensions paramètrables

- **rush01** : Puzzle de logique

- **rush02** : Dictionnaire de nombres

### 🐚 Exercices Shell

- **shell00** (6 exercices) : Introduction aux commandes shell basiques
  - Navigation dans le système de fichiers
  - Permissions et attributs

- **shell01** (7 exercices) : Scripts shell avancés
  - Manipulation de texte
  - Filtres et pipes

### 🎓 Travaux IUT

Le dossier `iut/` contient des travaux pratiques complémentaires :
- TP1_TP2
- TP3_TP4
- TP5_TP6
- TP7_TP8
- projet

## 🔧 Compilation et Utilisation

### Compilation d'un exercice individuel

Pour compiler un exercice C spécifique :

```bash
# Exemple avec C00/ex00
gcc -Wall -Wextra -Werror C00/ex00/ft_putchar.c -o ft_putchar
./ft_putchar
```

### Compilation avec les flags de la norme 42

La norme 42 impose l'utilisation des flags suivants :

```bash
gcc -Wall -Wextra -Werror fichier.c -o executable
```

- `-Wall` : Active tous les avertissements
- `-Wextra` : Active des avertissements supplémentaires
- `-Werror` : Traite les avertissements comme des erreurs

### Compilation d'un Rush

```bash
cd rush00/ex00
gcc -Wall -Wextra -Werror *.c -o rush
./rush 5 3
```

## 📖 Normes et Bonnes Pratiques

### La Norme 42

Tous les exercices respectent la norme de programmation de 42 qui impose :

- Maximum 25 lignes par fonction
- Maximum 5 fonctions par fichier
- Pas de for, do...while, switch, case ou goto
- En-têtes standardisés pour tous les fichiers
- Nommage cohérent des variables et fonctions
- Indentation avec des tabulations

### Structure des Headers

Tous les fichiers source incluent un header standardisé :

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filename.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by mmellier          #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by mmellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
```

## 🎯 Objectifs d'Apprentissage

Cette piscine permet d'acquérir :

1. **Maîtrise du langage C** : Syntaxe, pointeurs, gestion mémoire
2. **Algorithmique** : Résolution de problèmes, optimisation
3. **Travail en équipe** : Collaboration sur les Rush
4. **Rigueur** : Respect de normes strictes de codage
5. **Autonomie** : Apprentissage par la pratique et la recherche

## 📝 Notes

- Certains exercices peuvent nécessiter des fichiers de test supplémentaires
- Les Rush sont des projets de groupe, reflétant le travail collaboratif
- Le respect de la norme est vérifié automatiquement par Moulinette (système de correction automatique de 42)

## 👤 Auteur

**Mathias Mellier** (mmellier)
- Login 42 : mmellier
- Email : marvin@42.fr

## 📄 Licence

Ces exercices font partie du cursus de l'école 42 et sont à des fins éducatives.

---

*Ce repository documente mon parcours d'apprentissage lors de la Piscine C de 42.*
