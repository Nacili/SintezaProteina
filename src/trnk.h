/* broj nukleobaza na tRNK */
#define triplet_tRNK 3
/* broj tRNK */
#define br_tRNK 4

/* tRNK je oblika deteline sa 3 lista.
 * Ovde ce se sastojati od 3 pravougaonika i
 * tripleta azotnih baza.
 * Iscrtavace se gore navedeno i jedna sfera
 * koja predstavlja aminokiselinu. */
typedef struct tRNK{
	/* ako je M onda nosi metionin
	 *        S           serin
	 *        V           valin*/
	char oznaka;
	/* prvi poprecni pravougaonik */
	float I_dd_x;
	float I_dd_y;
	float I_dl_x;
	float I_dl_y;
	float I_gl_x;
	float I_gl_y;
	float I_gd_x;
	float I_gd_y;
	/* horizontalni pravougaonik */
	float H_dd_x;
	float H_dd_y;
	float H_dl_x;
	float H_dl_y;
	float H_gl_x;
	float H_gl_y;
	float H_gd_x;
	float H_gd_y;
	/* drugi poprecni pravougaonik */
	float II_dd_x;
	float II_dd_y;
	float II_dl_x;
	float II_dl_y;
	float II_gl_x;
	float II_gl_y;
	float II_gd_x;
	float II_gd_y;
	/* triplet nukleobaza */
	nukleobaza niz[triplet_tRNK];
	/* aminokiselina:
	 * sfera - niz u kojem se cuvaju parametri za f-ju glutWireSphere
	 * translacija - niz u kojem se cuva vektor translacije pomocu kojeg se sfera postavlja na nosac
	 * translacija2 - niz u kojem se cuva vektor translacije za kretanja sfere
	 * rotacija - niz u kojem se cuva vektor rotacije
	 * boja - niz u kojem se cuva boja aminokiseline */
	float sfera[3];
	float translacija[3];
	float translacija2[3];
	float boja[3];
}tRNK;

tRNK niz_tRNK[br_tRNK];

void generisi_tRNK();
void generisi_niz_na_tRNK();
void pomeri_tRNK_nadole(int ulaz);
void oteraj_tRNK(int ulaz);
void povezi_aminokiseline(int ulaz);
void oznaci_nukleobazu_tRNK();
void generisi_niz_na_tRNK();
void generisi_aminokiseline();
void generisi_tRNK();
void crtaj_niz_tRNK();
void oteraj_tRNK(int ulaz);