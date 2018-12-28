#define br_nukleobaza_na_RNK 23

typedef struct nukleobaza{
	/* ako je A onda je u pitanju adenin
	 * ako je U onda je u pitanju uracil
	 * ako je G onda je u pitanju guanin
	 * ako je C onda je u pitanju citozin
	 * timin nemamo nikad, posto radimo samo sa RNK*/
	char oznaka;
	/* ovo su x i y koordinate za donje desno, donje levo, gornje desno, gornje levo teme, kao i za "siljak" */
	float dd_x;
	float dd_y;
	float dl_x;
	float dl_y;
	float gl_x;
	float gl_y;
	float s_x;
	float s_y;
	float gd_x;
	float gd_y;
}nukleobaza;

/* postoje 23 nukelobaze na mRNK */
nukleobaza niz_na_mRNK[br_nukleobaza_na_RNK];

