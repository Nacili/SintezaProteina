/* rRNK, sastoji se iz 2 subjedinice, male i velike
 * Ovde ce biti prikazana preko 2 trapeza,
 * koji sadrze po 3 mesta za nukleotide koji treba da se uklope u njih. */
typedef struct rNK{
	/* ako je M, onda je mala subjedinica
	 *        V          velika         */
	char oznaka;
	/* koordinate za trapez */
	float dd_x;
	float dd_y;
	float dl_x;
	float dl_y;
	float gl_x;
	float gl_y;
	float gl_x_1;
	float gl_y_1;
	float gd_x_1;
	float gd_y_1;
	float gd_x;
	float gd_y;
}rRNK;

/* prvi clan niza je velika subjedinica, a drugi je mala */
rRNK niz_rRNK[2];

void generisi_rRNK();

void pomeri_malu_subjedinicu_nagore();
void pomeri_veliku_subjedinicu_nadole();
void pomeri_subjedinice_udesno();
void odvoj_subjedinice();
void oteraj_subjedinice();
void crtaj_rRNK();
