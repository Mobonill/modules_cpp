Écrivez une classe ScalarConverter qui ne contiendra qu'une seule méthode static appelée convert.

Cette méthode prendra comme paramètre une chaîne de caractères représentant un littéral C++ sous sa forme la plus courante et affichera sa valeur dans les types scalaires suivants :

    char
    int
    float
    double

⚠️ Spécifications importantes :

✅ Comme cette classe n'a pas besoin de stocker des données, elle ne doit pas être instanciable par les utilisateurs.

✅ À l'exception des paramètres de type char, seule la notation décimale sera utilisée.
📄 Exemples de littéraux :

    Littéraux char : 'c', 'a', ...
    ➡️ Pour simplifier, les caractères non affichables ne doivent pas être utilisés en tant qu'entrées.
    ➡️ Si une conversion vers char n'est pas affichable, affichez un message d'information.

    Littéraux int : 0, -42, 42, ...

    Littéraux float : 0.0f, -4.2f, 4.2f, ...
    ➡️ Vous devez également gérer les pseudo-littéraux suivants (pour la science) :
    -inff, +inff et nanf.

    Littéraux double : 0.0, -4.2, 4.2, ...
    ➡️ Vous devez également gérer les pseudo-littéraux suivants (pour le fun) :
    -inf, +inf et nan.

🧪 Exigences du programme :

    Écrivez un programme permettant de tester que votre classe fonctionne comme prévu.
    Vous devez :
        Détecter le type du littéral passé en paramètre.
        Convertir cette chaîne de caractères en son type réel.
        Convertir explicitement cette valeur vers les trois autres types.
        Afficher les résultats comme indiqué dans l'exemple.
    Si une conversion n'a aucun sens ou provoque un dépassement de capacité, affichez un message informant l'utilisateur que la conversion est impossible.
    Vous devez inclure tous les en-têtes nécessaires pour gérer les limites numériques et les valeurs spéciales.
