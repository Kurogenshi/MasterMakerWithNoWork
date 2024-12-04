#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>
#include <unordered_set>

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

struct Option {
    std::string nom;
    double coefficient;
    std::unordered_set<std::string> blocsConcernees;
};

struct Master {
    std::string name;
    std::vector<Bloc> blocs;
    std::vector<Option> options;
};

std::unordered_map<std::string, Master> masters;
std::unordered_map<std::string, std::vector<Bloc>> options;

double calculer_moyenne_bloc(const Bloc& bloc) {
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

double calculer_moyenne_semestre(const std::vector<Bloc>& blocs) {
    double sommeMoyennes = 0.0;
    double sommeCoefficients = 0.0;

    for (const auto& bloc : blocs) {
        double moyenneBloc = calculer_moyenne_bloc(bloc);
        sommeMoyennes += moyenneBloc * bloc.coefficient;
        sommeCoefficients += bloc.coefficient;
    }

    if (sommeCoefficients == 0.0) return 0.0;
    return sommeMoyennes / sommeCoefficients;
}

void init_masters()
{
    masters["GIG"] = {
		"GIG",
        {
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
                    {"Intro. aux sciences des données & apprentissage automatique", 0.0, 1.0}
				},
				8.0
			},
            {
				"Connaitre et savoir apprehender le monde professionne",
                {
					{"Seminaire", 0.0, 2.0},
					{"Gestion de projets informatiques", 0.0, 2.0}
				},
				4.0
			},
            {
				"Acquerir fondements et outils de l informatique graphique",
                {
					{"C++", 0.0, 2.0},
					{"Methodes numeriques pour l'informatique", 0.0, 2.0},
                    {"Intro. aux sciences des données & apprentissage automatique", 0.0, 2.0}
				},
				7.0
			}
		},
        {
            {"Programmation fonctionnelle", 3.0, {"Acquerir fondements et outils de l informatique graphique"}},
            {"Cryptographie", 3.0, {"Acquerir fondements et outils de l informatique graphique"}},
            {"Probabilites pour l'informatique", 3.0, {"Acquerir fondements et outils de l informatique graphique"}}
        }
	};

    masters["FSI"] = {
        "FSI",
        {
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
                    {"Sécurité des applications", 0.0, 1.0},
                    {"Intro. aux sciences des données & apprentissage automatique", 0.0, 1.0}
                },
                8.0
            },
            {
                "Connaitre et savoir apprehender le monde professionne",
                {
                    {"Seminaire", 0.0, 2.0},
                    {"Gestion de projets informatiques", 0.0, 2.0}
                },
                4.0
            },
            {
                "Acquérir principes et techniques pour des systèmes sûrs",
                {
                    {"Sécurité des applications", 0.0, 2.0},
                    {"Cryptographie", 0.0, 2.0},
                    {"Intro. aux sciences des données & apprentissage automatique", 0.0, 2.0}
                },
                7.0
            }
        },
        {
            {"Probabilités pour l'informatique", 3.0, {"Acquérir principes et techniques pour des systèmes sûrs"}},
            {"Programmation C++", 3.0, {"Acquérir principes et techniques pour des systèmes sûrs"}}
        }
    };
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

void demander_notes(Master& master) {
    std::unordered_map<std::string, double> notes;

    for (auto& bloc : master.blocs) {
        //std::cout << "Bloc : " << bloc.nom << "\n";
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

void choisirOptions(Master& master) {
    if (master.options.empty()) {
        std::cout << "Aucune option disponible pour ce master.\n";
        return;
    }

    std::cout << "\n-----------------------------------------------------------\n";
    std::cout << "Options disponibles :\n";
    for (size_t i = 0; i < master.options.size(); ++i) {
        std::cout << i + 1 << ". " << master.options[i].nom << " (Coefficient : "
            << master.options[i].coefficient << ")\n";
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Choisissez une option : ";
    std::string choix;
    std::getline(std::cin, choix);

    std::istringstream ss(choix);
    int index;
    while (ss >> index) {
        if (index == 0) break;
        if (index < 1 || index > master.options.size()) {
            std::cout << "Option invalide. Réessayez.\n";
            continue;
        }

        Option& opt = master.options[index - 1];
        for (const auto& blocNom : opt.blocsConcernees) {
            for (auto& bloc : master.blocs) {
                if (bloc.nom == blocNom) {
                    std::cout << "Entrez la note pour " << opt.nom << " : ";
                    double note;
                    std::cin >> note;
                    bloc.matieres.push_back({ opt.nom, note, opt.coefficient });
                    
                }
            }
        }
    }
}

int main()
{
    init_masters();

    Master master = choisir_master();
    demander_notes(master);
    choisirOptions(master);

    std::cout << "\n-----------------------------------------------------------\n";
    double moyenne = calculer_moyenne_semestre(master.blocs);
    std::cout << "Moyenne du semestre pour le master " << master.name << " : " << moyenne << std::endl;

    return 0;
}
