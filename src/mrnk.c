#include<stdlib.h>
#include<GL/glut.h>
#include<stdio.h>
#include <GL/freeglut.h>

#include "nukleobaza.h"
#include "mrnk.h"


#define pomeraj_mRNK 0.01

void generisi_osnovu_mRNK(){
	// donje desno teme x koordinata
	o_m_RNK_dd_x = 1.0;
	// donje desno teme y koordinata
	o_m_RNK_dd_y = -0.72;
	// donje levo teme x koordinata
	o_m_RNK_dl_x = -1.3;
	// donje levo teme y koordinata
	o_m_RNK_dl_y = -0.72;
	// gornje levo teme x koordinata
	o_m_RNK_gl_x = -1.3;
	// gornje levo teme y koordinata
	o_m_RNK_gl_y = -0.7;
	//gornje desno teme x koordinata
	o_m_RNK_gd_x = 1.0;
	// gornje desno teme y koordinata
	o_m_RNK_gd_y = -0.7;
}

void pomeri_mRNK(){
	
	o_m_RNK_dd_x += pomeraj_mRNK;
	o_m_RNK_dl_x += pomeraj_mRNK;
	o_m_RNK_gl_x += pomeraj_mRNK;
	o_m_RNK_gd_x += pomeraj_mRNK;
	
	int i;
	for(i = 0; i < br_nukleobaza_na_mRNK; i++){
		niz_na_mRNK[i].dd_x = niz_na_mRNK[i].dd_x + pomeraj_mRNK;
		niz_na_mRNK[i].dl_x = niz_na_mRNK[i].dl_x + pomeraj_mRNK;
		niz_na_mRNK[i].gl_x = niz_na_mRNK[i].gl_x + pomeraj_mRNK;
		niz_na_mRNK[i].s_x = niz_na_mRNK[i].s_x + pomeraj_mRNK;
		niz_na_mRNK[i].gd_x = niz_na_mRNK[i].gd_x + pomeraj_mRNK;
	}
	
}

/* Oznacavanje nukleobaza na mRNK */
void oznaci_nukleobazu(){
	
		int i;
		for(i = 1; i < br_nukleobaza_na_mRNK; i++){
			switch(i){
				case 4:
				case 7:
				case 8:
				case 9:
				case 17:
				case 18:
				case 22:
					niz_na_mRNK[i].oznaka = 'A';
					break;
				case 2:
				case 5:
				case 10:
				case 11:
				case 12:
				case 16:
				case 20:
					niz_na_mRNK[i].oznaka = 'U';
					break;
				case 1:
				case 14:
				case 21:
					niz_na_mRNK[i].oznaka = 'C';
					break;
				default:
					niz_na_mRNK[i].oznaka = 'G';
				
			}
		}
	
}


/* Generise niz nukleobaza koji su na mRNK */
void generisi_niz_na_mRNK(){
	
	/* Koordinate prve nukleobaze na osnovu koje se racunaju sve ostale */
	niz_na_mRNK[0].dd_x = -1.2;
	niz_na_mRNK[0].dd_y = -0.7;
	niz_na_mRNK[0].dl_x = -1.3;
	niz_na_mRNK[0].dl_y = -0.7;
	niz_na_mRNK[0].gl_x = -1.3;
	niz_na_mRNK[0].gl_y = -0.6;
	niz_na_mRNK[0].s_x = -1.25;
	niz_na_mRNK[0].s_y = -0.55;
	niz_na_mRNK[0].gd_x = -1.2;
	niz_na_mRNK[0].gd_y = -0.6;
	niz_na_mRNK[0].oznaka = 'A';
	
	// oznacavamo koji je nukleobazu u pitanju, tj. da li ce imati udubljenje, ispupcenje, ili nista
	oznaci_nukleobazu();
	
	int i;
	// izracunavamo koordinate za ostale nukleotide na osnovu njihovih prethodnika
	for(i = 1; i < br_nukleobaza_na_mRNK; i++){
		niz_na_mRNK[i].dd_x = niz_na_mRNK[i-1].dd_x + 0.10;
		niz_na_mRNK[i].dd_y = niz_na_mRNK[i-1].dd_y;
		niz_na_mRNK[i].dl_x = niz_na_mRNK[i-1].dl_x + 0.10;
		niz_na_mRNK[i].dl_y = niz_na_mRNK[i-1].dl_y;
		niz_na_mRNK[i].gl_x = niz_na_mRNK[i-1].gl_x + 0.10;
		niz_na_mRNK[i].gl_y = niz_na_mRNK[i-1].gl_y;
		niz_na_mRNK[i].s_x = niz_na_mRNK[i-1].s_x + 0.10;
		if(niz_na_mRNK[i].oznaka == 'A'){

			niz_na_mRNK[i].s_y = -0.55;
		}
		else if(niz_na_mRNK[i].oznaka == 'U'){
			niz_na_mRNK[i].s_y = -0.65;
		}
		else if(niz_na_mRNK[i].oznaka == 'C' || niz_na_mRNK[i].oznaka == 'G'){
			niz_na_mRNK[i].s_y = niz_na_mRNK[i-1].gl_y;	// iste je visine kao i ostala temena, pa se nece iscrtavati
		}
		niz_na_mRNK[i].gd_x = niz_na_mRNK[i-1].gd_x + 0.10;
		niz_na_mRNK[i].gd_y = niz_na_mRNK[i-1].gd_y;
	}
	
}


/* Iscrtava mRNK */
void crtaj_mRNK(){
	
	glBegin(GL_POLYGON);
		glColor3f(1, 0.5, 0);
		glVertex3f(o_m_RNK_dd_x, o_m_RNK_dd_y, 0);
		glColor3f(1, 0.5, 0);
		glVertex3f(o_m_RNK_dl_x, o_m_RNK_dl_y, 0);
		glColor3f(1, 0, 0);
		glVertex3f(o_m_RNK_gl_x, o_m_RNK_gl_y, 0);
		glColor3f(1, 0, 0);
		glVertex3f(o_m_RNK_gd_x, o_m_RNK_gd_y, 0);
	glEnd();
	
	int i;
	for(i = 0; i < br_nukleobaza_na_mRNK; i++){
		if(niz_na_mRNK[i].oznaka == 'A'){
			glBegin(GL_POLYGON);
				glColor3f(1, 0.5, 0);
				glVertex3f(niz_na_mRNK[i].dd_x, niz_na_mRNK[i].dd_y, 0);
				glColor3f(1, 1, 0);
				glVertex3f(niz_na_mRNK[i].dl_x, niz_na_mRNK[i].dl_y, 0);
				glColor3f(1, 1, 0);
				glVertex3f(niz_na_mRNK[i].gl_x, niz_na_mRNK[i].gl_y, 0);
				glColor3f(1, 0.9, 0);
				glVertex3f(niz_na_mRNK[i].s_x, niz_na_mRNK[i].s_y, 0);
				glColor3f(1, 0.5, 0);
				glVertex3f(niz_na_mRNK[i].gd_x, niz_na_mRNK[i].gd_y, 0);
			glEnd();
		}
		if(niz_na_mRNK[i].oznaka == 'U'){
			glBegin(GL_POLYGON);
				glColor3f(1, 0.5, 0);
				glVertex3f(niz_na_mRNK[i].dd_x, niz_na_mRNK[i].dd_y, 0);
				glColor3f(1, 0, 0);
				glVertex3f(niz_na_mRNK[i].dl_x, niz_na_mRNK[i].dl_y, 0);
				glColor3f(1, 0, 0);
				glVertex3f(niz_na_mRNK[i].gl_x, niz_na_mRNK[i].gl_y, 0);
				glColor3f(1, 0.3, 0);
				glVertex3f(niz_na_mRNK[i].s_x, niz_na_mRNK[i].s_y, 0);
				glColor3f(1, 0.5, 0);
				glVertex3f(niz_na_mRNK[i].gd_x, niz_na_mRNK[i].gd_y, 0);
			glEnd();
		}
		if(niz_na_mRNK[i].oznaka == 'C'){
			glBegin(GL_POLYGON);
				glColor3f(1, 1, 0);
				glVertex3f(niz_na_mRNK[i].dd_x, niz_na_mRNK[i].dd_y, 0);
				glColor3f(0, 1, 1);
				glVertex3f(niz_na_mRNK[i].dl_x, niz_na_mRNK[i].dl_y, 0);
				glColor3f(0, 1, 1);
				glVertex3f(niz_na_mRNK[i].gl_x, niz_na_mRNK[i].gl_y, 0);
				glColor3f(0, 1, 0);
				glVertex3f(niz_na_mRNK[i].s_x, niz_na_mRNK[i].s_y, 0);
				glColor3f(1, 1, 0);
				glVertex3f(niz_na_mRNK[i].gd_x, niz_na_mRNK[i].gd_y, 0);
			glEnd();
		}
		if(niz_na_mRNK[i].oznaka == 'G'){
			glBegin(GL_POLYGON);
				glColor3f(0, 1, 1);
				glVertex3f(niz_na_mRNK[i].dd_x, niz_na_mRNK[i].dd_y, 0);
				glColor3f(1, 0, 0);
				glVertex3f(niz_na_mRNK[i].dl_x, niz_na_mRNK[i].dl_y, 0);
				glColor3f(1, 0, 0);
				glVertex3f(niz_na_mRNK[i].gl_x, niz_na_mRNK[i].gl_y, 0);
				glColor3f(0, 0, 1);
				glVertex3f(niz_na_mRNK[i].s_x, niz_na_mRNK[i].s_y, 0);
				glColor3f(0, 1, 1);
				glVertex3f(niz_na_mRNK[i].gd_x, niz_na_mRNK[i].gd_y, 0);
			glEnd();
		}
	}
	
}
