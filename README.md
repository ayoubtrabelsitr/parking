# **Gestion de Parking avec Qt**

## **Description du projet**
Ce projet est une application de gestion de parking développée en **C++** et **Qt**.  
L'application permet :  
- La gestion des entrées et sorties des véhicules.  
- Le calcul des frais de stationnement basés sur la durée.  
- L'affichage des places disponibles en temps réel.  
- Une validation par code pour autoriser les sorties.  

L'interface graphique est intuitive, grâce à **Qt Widgets** et **Qt Designer**.  

---

## **Fonctionnalités**
### **1. Gestion des entrées :**
- Enregistrement des plaques d'immatriculation.  
- Attribution de la **première place disponible**.  
- Vérification de la validité de la plaque (**minimum 6 caractères**).  
- Gestion des plaques déjà enregistrées.  

### **2. Gestion des sorties :**
- Calcul automatique des frais de stationnement.  
- Validation de sortie avec un code unique (**0000**).  
- Libération de la place après paiement.  

### **3. Affichage en temps réel :**
- Nombre de places disponibles.  
- Heure et date via un widget d'horloge.  

### **4. Interface utilisateur :**
- Texte d'aide dans les champs de saisie grâce à **placeholderText**.  
- Messages d'erreur et de confirmation via des **boîtes de dialogue**.  

---

## **Technologies utilisées**
- **Langage :** C++  
- **Framework :** Qt 5/6  
- **Interface graphique :** Qt Widgets avec `.ui` via Qt Designer  
- **Gestion des ressources :** Fichier QRC (ressources intégrées)  

---

## **Installation et exécution**
### **Pré-requis :**
- Installer **Qt** (version 5 ou 6).  
- Un compilateur compatible, comme **MinGW** ou **MSVC**.  

### **Étapes d'installation :**
1. Clonez le dépôt :
   ```bash
   git clone https://github.com/username/gestion-parking.git
   cd gestion-parking
   
2. Ouvrez le projet dans **Qt Creator** 

3. Configurez le projet 

4. Compilez le projet 
  
5. Exécutez l'application

---

## **Améliorations futures**

- Intégration avec une base de données pour stocker les informations des véhicules.
- Gestion de paiements avec l'api SMS.

 ### **Images Capturées :**

Voici les images capturées que vous pouvez consulter dans le projet :

1. **Capture 1**  
   ![Capture 1](capture%20(1).png)

2. **Capture 2**  
   ![Capture 2](capture%20(2).png)

3. **Capture 3**  
   ![Capture 3](capture%20(3).png)

4. **Capture 4**  
   ![Capture 4](capture%20(4).png)

5. **Capture 5**  
   ![Capture 5](capture%20(5).png)
