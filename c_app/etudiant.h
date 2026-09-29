#define MAX_NOM 50
#define MAX_UE 10
#define MAX_CODE_UE 10
#define TAILLE_HASH 101

typedef struct {
    char codeUE[MAX_CODE_UE];
    float note;
    float coef;
} NoteUE;

typedef struct {
    int matricule;
    char nom[MAX_NOM];
    NoteUE notes[MAX_UE];
    int nbUE;
    float moyenne;
    int rang;
    char mention[20];
} Etudiant;

typedef struct NoeudHash {
    Etudiant etudiant;
    struct NoeudHash *suivant;
} NoeudHash;

NoeudHash* tableHachage[TAILLE_HASH];
