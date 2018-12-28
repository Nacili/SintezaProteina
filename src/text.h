/* Ovde se nalaze funkcije i strukture za
 * iscrtavanje teksta na ekranu,
 * odnosno za obelezavanje onoga sto se
 * iscrtava na sceni */


 /* slova su ono sto ce pisati na ekranu
  * a x i y su koordinate teksta */

typedef struct legenda{
	char *slova;
	float x;
	float y;
}legenda;

legenda adenin;
legenda guanin;
legenda uracil;
legenda citozin;
legenda mrnk;
legenda mala_subjedinica;
legenda velika_subjedinica;
legenda trnk;
legenda metionin;
legenda lizin;
legenda fenilalanin;
legenda glicin;
legenda stop_stop;

void inicijalizuj_legendu();
void RenderString(float x, float y, void *font, const char* string, float r, float g, float b);
void crtaj_slova(legenda l);
void napravi_legendu();
void obrisi_slova();