# 🧠 C++ — Module 02 (CPP02)

**Thèmes principaux :**  
- Ad-hoc polymorphism  
- Operator overloading  
- Orthodox Canonical Class Form (OCCF)

**Version :** 9.1  
**Objectif :** Approfondir la programmation orientée objet en C++98 et maîtriser la création de classes robustes, l’opérateur overload et les constructeurs/destructeurs.

---

## 📌 Présentation

Ce module initie à la **programmation orientée objet en C++**, en mettant l’accent sur :

- La définition de classes selon la **forme canonique orthodoxe** (constructeur par défaut, constructeur de copie, opérateur d’assignation et destructeur).  
- La surcharge d’opérateurs pour créer des objets manipulables de manière naturelle.  
- La création et manipulation de **types numériques fixes (fixed-point numbers)**.  
- La gestion correcte de la mémoire et des copies d’objets.  

Toutes les classes sont développées en **C++98**, sans utiliser de bibliothèques externes ni STL (autorisée seulement dans les modules avancés).  

---

## 📂 Structure générale du projet

CPP02/
├── ex00/ # Ma première classe en Orthodox Canonical Form
├── ex01/ # Classe Fixed plus complète
├── ex02/ # Surcharge d’opérateurs et fonctions utilitaires
├── ex03/ # BSP (Binary Space Partitioning) optionnel
├── src/
├── includes/
└── README.md


---

## 🧪 Exercices et compétences acquises

### 🔹 ex00 — Ma première classe en Orthodox Canonical Form

**Objectif :** Créer une classe Fixed avec un entier interne et 8 bits fractionnaires.  

**Fonctionnalités :**
- Constructeur par défaut, constructeur de copie, opérateur d’assignation, destructeur  
- `getRawBits()` et `setRawBits()`  

**Compétences :**
- Création de classes
- Gestion de la mémoire et des copies d’objets  
- Débogage et tests unitaires  

---

### 🔹 ex01 — Classe Fixed plus utile

**Objectif :** Ajouter la conversion vers et depuis les types int et float.  

**Fonctionnalités :**
- Constructeurs `Fixed(int)` et `Fixed(float)`  
- `toFloat()` et `toInt()`  
- Surcharge de l’opérateur `<<` pour l’affichage  

**Compétences :**
- Conversion de types  
- Utilisation de fonctions C++ standards (`roundf`)  
- Surcharge d’opérateurs  

---

### 🔹 ex02 — Surcharge avancée d’opérateurs

**Objectif :** Ajouter comparaison, arithmétique et incrément/décrément.  

**Fonctionnalités :**
- 6 opérateurs de comparaison (`>`, `<`, `>=`, `<=`, `==`, `!=`)  
- 4 opérateurs arithmétiques (`+`, `-`, `*`, `/`)  
- Opérateurs pré/post-incrément et pré/post-décrément  
- Fonctions statiques `min()` et `max()`  

**Compétences :**
- Ad-hoc polymorphism  
- Programmation orientée objet avancée  
- Gestion des références et const correctness  

---

### 🔹 ex03 — BSP (Binary Space Partitioning) [optionnel]

**Objectif :** Déterminer si un point est à l’intérieur d’un triangle en 2D.  

**Fonctionnalités :**
- Classe Point en Orthodox Canonical Form  
- Fonction `bsp(Point a, Point b, Point c, Point point)`  
- Retourne `true` si le point est strictement à l’intérieur du triangle  

**Compétences :**
- Application pratique des classes Fixed  
- Compréhension des coordonnées et géométrie 2D  
- Mise en œuvre de fonctions utilitaires robustes  

---

## 🚀 Compétences globales développées

- Programmation orientée objet (OOP) en C++98  
- Création de classes selon l’**Orthodox Canonical Form**  
- Surcharge d’opérateurs pour rendre les objets naturels à utiliser  
- Gestion des conversions de types et précision numérique  
- Débogage, tests et bonnes pratiques de code indépendant et lisible  

---

## 🏁 Conclusion

Le **Module 02** m’a permis de :  
- Comprendre profondément la POO en C++  
- Créer des classes robustes, testables et réutilisables  
- Manipuler des types numériques avancés (Fixed)  
- Préparer le terrain pour le polymorphisme, l’héritage et les modules suivants
