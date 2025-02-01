#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <limits>

struct Matiere {
    std::string nom;
    double note;
    double coefficient;
};

struct Bloc {
    std::string nom;
    std::vector<Matiere> matieres;
    double note;
    double coefficient;
};

struct Semestre
{
    std::vector<Bloc> blocs;
};

struct Master {
    std::string name;
    Semestre s1;
    Semestre s2;
};

std::unordered_map<std::string, Master> masters;

void init_gig()
{
    masters.emplace("GIG", Master{
        "GIG",
        Semestre{
            std::vector<Bloc>{
                {
                    "Maitriser les fondements de la science informatique",
                    {
                        {"Reseaux", 0.0, 1.0},
                        {"Complexite", 0.0, 2.5},
                        {"Seminaire", 0.0, 1.0},
                        {"Programmation objet concurrente", 0.0, 2.0},
                        {"Genie logiciel", 0.0, 0.5},
                        {"Methodes numeriques pour l'informatique", 0.0, 1.0}
                    },
                    0.0,
                    8.0
                },
                {
                    "Mettre en oeuvre les technologies informatiques essentielles",
                    {
                        {"Reseaux", 0.0, 2.0},
                        {"Complexite", 0.0, 0.5},
                        {"Seminaire", 0.0, 1.0},
                        {"Programmation objet concurrente", 0.0, 1.0},
                        {"Genie logiciel", 0.0, 2.5},
                        {"C++", 0.0, 1.0},
                        {"Intro. aux sciences des donnees & apprentissage automatique", 0.0, 1.0}
                    },
                    0.0,
                    9.0
                },
                {
                    "Connaitre et savoir apprehender le monde professionnel",
                    {
                        {"Seminaire", 0.0, 2.0},
                        {"Gestion de projets informatiques", 0.0, 2.0}
                    },
                    0.0,
                    4.0
                },
                {
                    "Acquerir fondements et outils de l informatique graphique",
                    {
                        {"C++", 0.0, 2.0},
                        {"Methodes numeriques pour l'informatique", 0.0, 2.0},
                        {"Intro. aux sciences des donnees & apprentissage automatique", 0.0, 2.0},
                        {"Option", 0.0, 3.0}
                    },
                    0.0,
                    9.0
                }
            }
        },
        Semestre{
            std::vector<Bloc>{
                {
                    "Maitriser les fondements de la science informatique",
                    {
                        {"ARO", 0.0, 2.0},
                        {"COM", 0.0, 1.0},
                        {"Surfaces de forme libre", 0.0, 1.0},
                        {"Mod. geom. et maillages", 0.0, 1.0},
                        {"Option", 0.0, 1.0}
                    },
                    0.0,
                    6.0
                },
                {
                    "Mettre en oeuvre les technologies informatiques essentielles",
                    {
                        {"ARO", 0.0, 1.0},
                        {"COM", 0.0, 1.0},
                        {"Programmaation graphique", 0.0, 1.0},
                        {"IHM", 0.0, 1.0},
                        {"Option", 0.0, 1.0}
                    },
                    0.0,
                    5.0
                },
                {
                    "Connaitre et savoir apprehender le monde professionnel",
                    {
                        {"COM", 0.0, 2.0},
                        {"TER ou Stage", 0.0, 4.0},
                        {"Anglais", 0.0, 2.0}
                    },
                    0.0,
                    8.0
                },
                {
                    "Acquerir fondements et outils de l informatique graphique",
                    {
                        {"TER ou Stage", 0.0, 2.0},
                        {"Programmaation graphique", 0.0, 2.0},
                        {"IHM", 0.0, 2.0},
                        {"Surfaces de forme libre", 0.0, 2.0},
                        {"Mod. geom. et maillages", 0.0, 2.0},
                        {"Option", 0.0, 1.0}
                    },
                    0.0,
                    11.0
                }
            }
        }
    });
}

void init_fsi()
{
    masters.emplace("FSI", Master{
        "FSI",
        Semestre{
            std::vector<Bloc>{
                {
                    "Maitriser les fondements de la science informatique",
                    {
                        {"Reseaux", 0.0, 1.0},
                        {"Complexite", 0.0, 2.5},
                        {"Seminaire", 0.0, 1.0},
                        {"Programmation objet concurrente", 0.0, 2.0},
                        {"Genie logiciel", 0.0, 0.5},
                        {"Cryptographie", 0.0, 1.0}
                    },
                    0.0,
                    8.0
                },
                {
                    "Mettre en oeuvre les technologies informatiques essentielles",
                    {
                        {"Reseaux", 0.0, 2.0},
                        {"Complexite", 0.0, 0.5},
                        {"Seminaire", 0.0, 1.0},
                        {"Programmation objet concurrente", 0.0, 1.0},
                        {"Genie logiciel", 0.0, 2.5},
                        {"Securité des applications", 0.0, 1.0},
                        {"Intro. aux sciences des donnees & apprentissage automatique", 0.0, 1.0}
                    },
                    9.0
                },
                {
                    "Connaitre et savoir apprehender le monde professionnel",
                    {
                        {"Seminaire", 0.0, 2.0},
                        {"Gestion de projets informatiques", 0.0, 2.0}
                    },
                    0.0,
                    4.0
                },
                {
                    "Acquerir principes et techniques pour des systèmes surs",
                    {
                        {"Securité des applications", 0.0, 2.0},
                        {"Cryptographie", 0.0, 2.0},
                        {"Intro. aux sciences des donnees & apprentissage automatique", 0.0, 2.0},
                        {"Option", 0.0, 3.0}
                    },
                    0.0,
                    9.0
                }
            }
        },
        Semestre{
            std::vector<Bloc>{
                {
                    "Maitriser les fondements de la science informatique",
                    {
                        {"ARO", 0.0, 2.0},
                        {"COM", 0.0, 1.0},
                        {"Analyse de programmes", 0.0, 1.0},
                        {"Algorithmes et systemes robuste", 0.0, 1.0},
                        {"Option", 0.0, 1.0}
                    },
                    0.0,
                    6.0
                },
                {
                    "Mettre en oeuvre les technologies informatiques essentielles",
                    {
                        {"ARO", 0.0, 1.0},
                        {"COM", 0.0, 1.0},
                        {"Fiabilite logicielle", 0.0, 1.0},
                        {"Des conteneurs au cloud", 0.0, 1.0},
                        {"Option", 0.0, 1.0}
                    },
                    0.0,
                    5.0
                },
                {
                    "Connaitre et savoir apprehender le monde professionnel",
                    {
                        {"COM", 0.0, 2.0},
                        {"TER ou Stage", 0.0, 4.0},
                        {"Anglais", 0.0, 2.0}
                    },
                    0.0,
                    8.0
                },
                {
                    "Acquerir principes et techniques pour des systèmes surs",
                    {
                        {"TER ou Stage", 0.0, 2.0},
                        {"Fiabilité logicielle", 0.0, 2.0},
                        {"Des conteneurs au cloud", 0.0, 2.0},
                        {"Analyse de programmes", 0.0, 2.0},
                        {"Algorithmes et systemes robuste", 0.0, 2.0},
                        {"Option", 0.0, 1.0}
                    },
                    0.0,
                    11.0
                }
            }
        }
    });
}

void init_imd()
{
    masters.emplace("IMD", Master{
        "IMD",
        Semestre{
            std::vector<Bloc>{
                {
                    "Maitriser les fondements de la science informatique",
                    {
                        {"Reseaux", 0.0, 1.0},
                        {"Complexite", 0.0, 2.5},
                        {"Seminaire", 0.0, 1.0},
                        {"Programmation objet concurrente", 0.0, 2.0},
                        {"Genie logiciel", 0.0, 0.5},
                        {"Programmation fonctionnelle", 0.0, 1.0},
                        {"Methodes numeriques pour l'informatique", 0.0, 1.0},
                        {"Probabilités pour l'informatique", 0.0, 1.0}
                    },
                    0.0,
                    10.0
                },
                {
                    "Mettre en oeuvre les technologies informatiques essentielles",
                    {
                        {"Reseaux", 0.0, 2.0},
                        {"Complexite", 0.0, 0.5},
                        {"Seminaire", 0.0, 1.0},
                        {"Programmation objet concurrente", 0.0, 1.0},
                        {"Genie logiciel", 0.0, 2.5}
                    },
                    7.0
                },
                {
                    "Connaitre et savoir apprehender le monde professionnel",
                    {
                        {"Seminaire", 0.0, 2.0},
                        {"Gestion de projets informatiques", 0.0, 2.0}
                    },
                    0.0,
                    4.0
                },
                {
                    "Raisonner a l aide des formalismes de l informatique",
                    {
                        {"Programmation fonctionnelle", 0.0, 2.0},
                        {"Methodes numeriques pour l'informatique", 0.0, 2.0},
                        {"Probabilités pour l'informatique", 0.0, 2.0},
                        {"Option", 0.0, 3.0}
                    },
                    0.0,
                    9.0
                }
            }
        },
        Semestre{
            std::vector<Bloc>{
                {
                    "Maitriser les fondements de la science informatique",
                    {
                        {"ARO", 0.0, 2.0},
                        {"COM", 0.0, 1.0},
                        {"Algos a perfs garanties", 0.0, 1.0},
                        {"Calculabilite avancee", 0.0, 1.0},
                        {"Theorie de la complexite", 0.0, 1.0},
                        {"Theorie structurelle des graphs", 0.0, 1.0}
                    },
                    0.0,
                    7.0
                },
                {
                    "Mettre en oeuvre les technologies informatiques essentielles",
                    {
                        {"ARO", 0.0, 1.0},
                        {"COM", 0.0, 1.0},
                        {"Option", 0.0, 2.0}
                    },
                    0.0,
                    4.0
                },
                {
                    "Connaitre et savoir apprehender le monde professionnel",
                    {
                        {"COM", 0.0, 2.0},
                        {"TER ou Stage", 0.0, 4.0},
                        {"Anglais", 0.0, 2.0}
                    },
                    0.0,
                    8.0
                },
                {
                    "Raisonner a l aide des formalismes de l informatique",
                    {
                        {"TER ou Stage", 0.0, 2.0},
                        {"Option", 0.0, 1.0},
                        {"Algos a perfs garanties", 0.0, 2.0},
                        {"Calculabilite avancee", 0.0, 2.0},
                        {"Theorie de la complexite", 0.0, 2.0},
                        {"Theorie structurelle des graphs", 0.0, 2.0}
                    },
                    0.0,
                    11.0
                }
            }
        }
    });
}

void init_idl()
{
    masters.emplace("IDL", Master{
        "IDL",
        Semestre{
            std::vector<Bloc>{
                {
                    "Maitriser les fondements de la science informatique",
                    {
                        {"Reseaux", 0.0, 1.0},
                        {"Complexite", 0.0, 2.5},
                        {"Seminaire", 0.0, 1.0},
                        {"Programmation objet concurrente", 0.0, 2.0},
                        {"Genie logiciel", 0.0, 0.5}
                    },
                    0.0,
                    7.0
                },
                {
                    "Mettre en oeuvre les technologies informatiques essentielles",
                    {
                        {"Reseaux", 0.0, 2.0},
                        {"Complexite", 0.0, 0.5},
                        {"Seminaire", 0.0, 1.0},
                        {"Programmation objet concurrente", 0.0, 1.0},
                        {"Genie logiciel", 0.0, 2.5},
                        {"Securité des applications", 0.0, 1.0},
                        {"Bases de donnees avancees", 0.0, 1.0},
                        {"Donnees post-relationnelles", 0.0, 1.0}
                    },
                    0.0,
                    10.0
                },
                {
                    "Connaitre et savoir apprehender le monde professionnel",
                    {
                        {"Seminaire", 0.0, 2.0},
                        {"Gestion de projets informatiques", 0.0, 2.0}
                    },
                    0.0,
                    4.0
                },
                {
                    "Analyser un besoin et concevoir une solution logicielle",
                    {
                        {"Bases de donnees avancees", 0.0, 2.0},
                        {"Donnees post-relationnelles", 0.0, 2.0},
                        {"Securité des applications", 0.0, 2.0},
                        {"Option", 0.0, 3.0}
                    },
                    0.0,
                    9.0
                }
            }
        },
        Semestre{
            std::vector<Bloc>{
                std::vector<Bloc>{
                    {
                        "Maitriser les fondements de la science informatique",
                        {
                            {"ARO", 0.0, 2.0},
                            {"COM", 0.0, 1.0},
                            {"Option", 0.0, 1.0}
                        },
                        0.0,
                        4.0
                    },
                    {
                        "Mettre en oeuvre les technologies informatiques essentielles",
                        {
                            {"ARO", 0.0, 1.0},
                            {"COM", 0.0, 1.0},
                            {"Option", 0.0, 1.0},
                            {"Genie logiciel avance", 0.0, 1.0},
                            {"Fiabilite logicielle", 0.0, 1.0},
                            {"Des conteneurs au cloud", 0.0, 1.0},
                            {"Architextures JEE", 0.0, 1.0},
                        },
                        0.0,
                        7.0
                    },
                    {
                        "Connaitre et savoir apprehender le monde professionnel",
                        {
                            {"COM", 0.0, 2.0},
                            {"TER ou Stage", 0.0, 4.0},
                            {"Anglais", 0.0, 2.0}
                        },
                        0.0,
                        8.0
                    },
                    {
                        "Analyser un besoin et concevoir une solution logicielle",
                        {
                            {"TER ou Stage", 0.0, 2.0},
                            {"Option", 0.0, 1.0},
                            {"Genie logiciel avance", 0.0, 2.0},
                            {"Fiabilite logicielle", 0.0, 2.0},
                            {"Des conteneurs au cloud", 0.0, 2.0},
                            {"Architextures JEE", 0.0, 2.0},
                        },
                        0.0,
                        11.0
                    }
                }
            }
        }
    });
}

void init_iaaa()
{
    masters.emplace("IAAA", Master{
        "IAAA",
        Semestre{
            std::vector<Bloc>{
                {
                    "Maitriser les fondements de la science informatique",
                    {
                        {"Reseaux", 0.0, 1.0},
                        {"Complexite", 0.0, 2.5},
                        {"Seminaire", 0.0, 1.0},
                        {"Programmation objet concurrente", 0.0, 2.0},
                        {"Genie logiciel", 0.0, 0.5},
                        {"Methodes numeriques pour l'informatique", 0.0, 1.0},
                        {"Probabilités pour l'informatique", 0.0, 1.0}
                    },
                    0.0,
                    9.0
                },
                {
                    "Mettre en oeuvre les technologies informatiques essentielles",
                    {
                        {"Reseaux", 0.0, 2.0},
                        {"Complexite", 0.0, 0.5},
                        {"Seminaire", 0.0, 1.0},
                        {"Programmation objet concurrente", 0.0, 1.0},
                        {"Genie logiciel", 0.0, 2.5},
                        {"Intro. aux sciences des donnees & apprentissage automatique", 0.0, 1.0}
                    },
                    0.0,
                    8.0
                },
                {
                    "Connaitre et savoir apprehender le monde professionnel",
                    {
                        {"Seminaire", 0.0, 2.0},
                        {"Gestion de projets informatiques", 0.0, 2.0}
                    },
                    0.0,
                    4.0
                },
                {
                    "Comprendre les fondements et outils de l apprentissage auto.",
                    {
                        {"Methodes numeriques pour l'informatique", 0.0, 2.0},
                        {"Intro. aux sciences des donnees & apprentissage automatique", 0.0, 2.0},
                        {"Probabilités pour l'informatique", 0.0, 2.0},
                        {"Option", 0.0, 3.0}
                    },
                    0.0,
                    9.0
                }
            }
        },
        Semestre{
            std::vector<Bloc>{
                {
                    "Maitriser les fondements de la science informatique",
                    {
                        {"ARO", 0.0, 2.0},
                        {"COM", 0.0, 1.0},
                        {"Option", 0.0, 1.0},
                        {"Apprentissage artificiel", 0.0, 1.0},
                        {"Reseaux de neurones", 0.0, 1.0}
                    },
                    0.0,
                    6.0
                },
                {
                    "Mettre en oeuvre les technologies informatiques essentielles",
                    {
                        {"ARO", 0.0, 1.0},
                        {"COM", 0.0, 1.0},
                        {"Option", 0.0, 1.0},
                        {"traitement auto langues", 0.0, 1.0},
                        {"Mod. et res. decision", 0.0, 1.0}
                    },
                    0.0,
                    5.0
                },
                {
                    "Connaitre et savoir apprehender le monde professionnel",
                    {
                        {"COM", 0.0, 2.0},
                        {"TER ou Stage", 0.0, 4.0},
                        {"Anglais", 0.0, 2.0}
                    },
                    0.0,
                    8.0
                },
                {
                    "Comprendre les fondements et outils de l apprentissage auto.",
                    {
                        {"TER ou Stage", 0.0, 2.0},
                        {"Option", 0.0, 1.0},
                        {"Apprentissage artificiel", 0.0, 2.0},
                        {"Reseaux de neurones", 0.0, 2.0},
                        {"traitement auto langues", 0.0, 2.0},
                        {"Mod. et res. decision", 0.0, 2.0}
                    },
                    0.0,
                    11.0
                }
            }
        }
    });
}

void init_sid()
{
    masters.emplace("SID", Master{
        "SID",
        Semestre{
            std::vector<Bloc>{
                {
                    "Maitriser les fondements de la science informatique",
                    {
                        {"Reseaux", 0.0, 1.0},
                        {"Complexite", 0.0, 2.5},
                        {"Seminaire", 0.0, 1.0},
                        {"Programmation objet concurrente", 0.0, 2.0},
                        {"Genie logiciel", 0.0, 0.5}
                    },
                    0.0,
                    7.0
                },
                {
                    "Mettre en oeuvre les technologies informatiques essentielles",
                    {
                        {"Reseaux", 0.0, 2.0},
                        {"Complexite", 0.0, 0.5},
                        {"Seminaire", 0.0, 1.0},
                        {"Programmation objet concurrente", 0.0, 1.0},
                        {"Genie logiciel", 0.0, 2.5},
                        {"Intro. aux sciences des donnees & apprentissage automatique", 0.0, 1.0},
                        {"Bases de donnees avancees", 0.0, 1.0},
                        {"Donnees post-relationnelles", 0.0, 1.0}
                    },
                    0.0,
                    10.0
                },
                {
                    "Connaitre et savoir apprehender le monde professionnel",
                    {
                        {"Seminaire", 0.0, 2.0},
                        {"Gestion de projets informatiques", 0.0, 2.0}
                    },
                    0.0,
                    4.0
                },
                {
                    "Comprendre fondements et techniques des sciences des donnees",
                    {
                        {"Bases de donnees avancees", 0.0, 2.0},
                        {"Donnees post-relationnelles", 0.0, 2.0},
                        {"Intro. aux sciences des donnees & apprentissage automatique", 0.0, 2.0},
                        {"Option", 0.0, 3.0}
                    },
                    0.0,
                    9.0
                }
            }
        },
        Semestre{
            std::vector<Bloc>{
                {
                    "Maitriser les fondements de la science informatique",
                    {
                        {"ARO", 0.0, 2.0},
                        {"COM", 0.0, 1.0},
                        {"Option", 0.0, 1.0},
                        {"Exploration des donnees", 0.0, 1.0}
                    },
                    0.0,
                    5.0
                },
                {
                    "Mettre en oeuvre les technologies informatiques essentielles",
                    {
                        {"ARO", 0.0, 1.0},
                        {"COM", 0.0, 1.0},
                        {"Option", 0.0, 1.0},
                        {"Analyse des donnees", 0.0, 1.0},
                        {"Integration des donnees", 0.0, 1.0},
                        {"Traitement auto langues", 0.0, 1.0}
                    },
                    0.0,
                    6.0
                },
                {
                    "Connaitre et savoir apprehender le monde professionnel",
                    {
                        {"COM", 0.0, 2.0},
                        {"TER ou Stage", 0.0, 4.0},
                        {"Anglais", 0.0, 2.0}
                    },
                    0.0,
                    8.0
                },
                {
                    "Comprendre fondements et techniques des sciences des donnees",
                    {
                        {"TER ou Stage", 0.0, 2.0},
                        {"Option", 0.0, 1.0},
                        {"Analyse des donnees", 0.0, 2.0},
                        {"Exploration des donnees", 0.0, 2.0},
                        {"Integration des donnees", 0.0, 2.0},
                        {"Traitement auto langues", 0.0, 2.0}
                    },
                    0.0,
                    11.0
                }
            }
        }
    });
}

void init_masters()
{
    init_gig();
    init_fsi();
    init_imd();
    init_idl();
    init_iaaa();
    init_sid();
}

Master choisir_master() {
    std::cout << "Choisissez un master parmi les suivants :\n";
    for (const auto& [key, master] : masters) {
        std::cout << "- " << key << "\n";
    }

    std::string choix;
    while (true) {
        std::cout << "Votre choix : ";
        std::getline(std::cin, choix);
        if (masters.find(choix) != masters.end()) {
            return masters[choix];
        }
        else {
            std::cout << "Master invalide. Réessayez.\n";
        }
    }
}

void demander_notes(Semestre& semestre) {
    std::unordered_map<std::string, double> notes;

    for (auto& bloc : semestre.blocs) {
        for (auto& matiere : bloc.matieres) {
            std::unordered_map<std::string, double>::iterator it = notes.find(matiere.nom);
            if (it != notes.end())
            {
                matiere.note = it->second;
            }
            else
            {
                std::cout << "Entrez la note pour " << matiere.nom << " : ";
                std::cin >> matiere.note;
                notes.insert({ matiere.nom, matiere.note });
            }
        }
    }
}

double calculer_moyenne_bloc(const Bloc& bloc) {
    double sommeNotes = 0.0;
    double sommeCoefficients = 0.0;

    for (const auto& matiere : bloc.matieres) {
        sommeNotes += matiere.note * matiere.coefficient;
        sommeCoefficients += matiere.coefficient;
    }

    if (sommeCoefficients == 0.0) return 0.0;
    double result = sommeNotes / sommeCoefficients;

    return result;
}

double calculer_moyenne_semestre(std::vector<Bloc>& blocs) {
    double sommeMoyennes = 0.0;
    double sommeCoefficients = 0.0;

    for (auto& bloc : blocs) {
        double moyenneBloc = calculer_moyenne_bloc(bloc);
        bloc.note = moyenneBloc;
        sommeMoyennes += moyenneBloc * bloc.coefficient;
        sommeCoefficients += bloc.coefficient;
    }

    if (sommeCoefficients == 0.0) return 0.0;
    return sommeMoyennes / sommeCoefficients;
}

void calculer_moyenne_des_semestre(Master& master) {
    std::unordered_map<std::string, std::pair<double, double>> moyennes_blocs;
    double somme_ponderee_annee = 0.0;
    double somme_coeff_annee = 0.0;

    for (const auto& semestre : { master.s1, master.s2 }) {
        for (const auto& bloc : semestre.blocs) {
            if (moyennes_blocs.find(bloc.nom) == moyennes_blocs.end()) {
                moyennes_blocs[bloc.nom] = { bloc.note * bloc.coefficient, bloc.coefficient };
            }
            else {
                moyennes_blocs[bloc.nom].first += bloc.note * bloc.coefficient;
                moyennes_blocs[bloc.nom].second += bloc.coefficient;
            }
        }
    }

    for (const auto& [nom_bloc, data] : moyennes_blocs) {
        double moyenne_finale_bloc = (data.second > 0) ? data.first / data.second : 0.0;
        std::cout << "Moyenne du bloc \"" << nom_bloc << "\" sur l annee : " << moyenne_finale_bloc << std::endl;
        somme_ponderee_annee += moyenne_finale_bloc * data.second;
        somme_coeff_annee += data.second;
    }

    double moyenne_finale_annee = (somme_coeff_annee > 0) ? somme_ponderee_annee / somme_coeff_annee : 0.0;
    std::cout << "Moyenne finale de l annee : " << moyenne_finale_annee << std::endl;
}


std::unordered_map<int, std::string> menu_choix_semestre;

int main()
{
    init_masters();

    Master master = choisir_master();

    menu_choix_semestre.insert({ 1, "Semestre 1" });
    menu_choix_semestre.insert({ 2, "Semestre 2" });
    menu_choix_semestre.insert({ 3, "Semestre 1 et 2" });

    double moyenne_s1;
    double moyenne_s2;

    while (true) {
        std::cout << "Choisissez le semestre: " << std::endl;
        std::cout << "    1. Semestre 1" << std::endl;
        std::cout << "    2. Semestre 2" << std::endl;
        std::cout << "    3. Semestre 1 et 2" << std::endl;
        int choix_semestre;
        std::cin >> choix_semestre;
        if (menu_choix_semestre.find(choix_semestre) != menu_choix_semestre.end()) {
            if (choix_semestre == 1) {
                demander_notes(master.s1);

                std::cout << "\n-----------------------------------------------------------\n";
                moyenne_s1 = calculer_moyenne_semestre(master.s1.blocs);

                for (auto& bloc : master.s1.blocs) {
                    std::cout << bloc.nom << ": " << bloc.note << std::endl;
                }

                std::cout << "Moyenne du semestre 1 pour le master " << master.name << " : " << moyenne_s1 << std::endl;

                return 0;
			}
            else if (choix_semestre == 2) {
                demander_notes(master.s2);

                std::cout << "\n-----------------------------------------------------------\n";
                moyenne_s2 = calculer_moyenne_semestre(master.s2.blocs);

                for (auto& bloc : master.s2.blocs) {
                    std::cout << bloc.nom << ": " << bloc.note << std::endl;
                }

                std::cout << "Moyenne du semestre 2 pour le master " << master.name << " : " << moyenne_s2 << std::endl;

                return 0;
			}
            else {
                demander_notes(master.s1);

                std::cout << "\n-----------------------------------------------------------\n";
                moyenne_s1 = calculer_moyenne_semestre(master.s1.blocs);

                for (auto& bloc : master.s1.blocs) {
                    std::cout << bloc.nom << ": " << bloc.note << std::endl;
                }

                std::cout << "Moyenne du semestre 1 pour le master " << master.name << " : " << moyenne_s1 << std::endl;

                std::cout << "\n-----------------------------------------------------------\n";

                demander_notes(master.s2);

                std::cout << "\n-----------------------------------------------------------\n";
                moyenne_s2 = calculer_moyenne_semestre(master.s2.blocs);

                for (auto& bloc : master.s2.blocs) {
                    std::cout << bloc.nom << ": " << bloc.note << std::endl;
                }

                std::cout << "Moyenne du semestre 2 pour le master " << master.name << " : " << moyenne_s2 << std::endl;

                std::cout << "\n-----------------------------------------------------------\n";

                calculer_moyenne_des_semestre(master);

                std::cout << "\n-----------------------------------------------------------\n";

                return 0;
			}
        }
        else {
            std::cout << "Choix invalide. Réessayez.\n";
        }
    }

    return 0;
}
