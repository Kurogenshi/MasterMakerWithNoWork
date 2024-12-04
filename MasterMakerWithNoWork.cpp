#include <iostream>
#include <vector>
#include <string>

struct Matiere {
    std::string nom;
    double note;
    double coefficient;
};

struct Bloc {
    std::string nom;
    std::vector<Matiere> matieres;
    double coefficient;
};

double calculerMoyenneBloc(const Bloc& bloc) {
    double sommeNotes = 0.0;
    double sommeCoefficients = 0.0;

    for (const auto& matiere : bloc.matieres) {
        sommeNotes += matiere.note * matiere.coefficient;
        sommeCoefficients += matiere.coefficient;
    }

    if (sommeCoefficients == 0.0) return 0.0;
    double result = sommeNotes / sommeCoefficients;

    std::cout << bloc.nom << ": " << result << std::endl;

    return result;
}

double calculerMoyenneSemestre(const std::vector<Bloc>& blocs) {
    double sommeMoyennes = 0.0;
    double sommeCoefficients = 0.0;

    for (const auto& bloc : blocs) {
        double moyenneBloc = calculerMoyenneBloc(bloc);
        sommeMoyennes += moyenneBloc * bloc.coefficient;
        sommeCoefficients += bloc.coefficient;
    }

    if (sommeCoefficients == 0.0) return 0.0;
    return sommeMoyennes / sommeCoefficients;
}

int main()
{
    double n_reseaux = 8.0f;
    double n_complexite = 9.0f;
    double n_seminaire = 5.0f;
    double n_poc = 10.0f;
    double n_gl = 14.0f;
    double n_crypto = 10.0f;
    double n_gpi = 15.0f;
    double n_cpp = 16.0f;
    double n_mni = 4.0f;

    Bloc bloc1 = {
        "Maitriser les fondements de la science informatique",
        {
            {"Reseaux", n_reseaux, 1.0},
            {"Complexite", n_complexite, 2.5},
            {"Seminaire", n_seminaire, 1.0},
			{"Programmation objet concurrente", n_poc, 2.0},
            {"Genie logiciel", n_gl, 0.5},
			{"Méthodes numériques pour l'informatique", n_mni, 1.0}
        },
        8.0
    };

    Bloc bloc2 = {
        "Mettre en oeuvre les technologies informatiques essentielles",
        {
            {"Reseaux", n_reseaux, 2.0},
            {"Complexite", n_complexite, 0.5},
            {"Seminaire", n_seminaire, 1.0},
            {"Programmation objet concurrente", n_poc, 1.0},
            {"Genie logiciel", n_gl, 2.5},
            {"C++", n_cpp, 1.0}
        },
        8
    };

    Bloc bloc3 = {
        "Connaitre et savoir apprehender le monde professionne",
        {
            {"Seminaire", n_seminaire, 2.0},
			{"Gestion de projets informatiques", n_gpi, 2.0}
        },
        4
    };

    Bloc bloc4 = {
        "Acquerir fondements et outils de l informatique graphique",
        {
            {"Cryptographie", n_crypto, 3.0},
			{"C++", n_cpp, 2.0},
            {"Méthodes numériques pour l'informatique", n_mni, 2.0}
        },
        7
    };

    std::vector<Bloc> blocs = { bloc1, bloc2, bloc3, bloc4 };

    double moyenneSemestre = calculerMoyenneSemestre(blocs);

    std::cout << "Moyenne du semestre : " << moyenneSemestre << std::endl;

    return 0;
}
