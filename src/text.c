#include<stdlib.h>
#include<GL/glut.h>
#include<stdio.h>
#include <GL/freeglut.h>

#include <GL/freeglut.h>
#include "text.h"

/* Funkcija za dodelu pocetnih vrednosti
 * promenljivama tipa legenda */

void inicijalizuj_legendu(){
	adenin.x = -1.38;
	adenin.y = -0.45;
	adenin.slova = "A";
	
	guanin.x = -1.18;
	guanin.y = -0.45;
	guanin.slova = "G";
	
	uracil.x = -1.24;
	uracil.y = -0.45;
	uracil.slova = "U";
	
	citozin.x = -1.32;
	citozin.y = -0.45;
    citozin.slova = "C";
	
	mrnk.x = -1.52;
	mrnk.y = -0.48;
    mrnk.slova = "mRNK";
	
	mala_subjedinica.x = -1.09;
	mala_subjedinica.y = -0.6;
    mala_subjedinica.slova = "mala subjedinica";
	
	velika_subjedinica.x = -1.09;
	velika_subjedinica.y = -0.3;
    velika_subjedinica.slova = "velika subjedinica";
	
	trnk.x = -1.07;
	trnk.y = 0.42;
	trnk.slova = "tRNK";
	
	metionin.x = -1.07;
	metionin.y = 0.61;
	metionin.slova = "Met";
	
	lizin.x = -0.86;
	lizin.y = 0.61;
	lizin.slova = "Lys";
	
	fenilalanin.x = -0.65;
	fenilalanin.y = 0.61;
	fenilalanin.slova = "Phe";
	
	glicin.x = -0.44;
	glicin.y = 0.61;
	glicin.slova = "Gly";
	
	stop_stop.x = 0.1;
	stop_stop.y = 0.05;
	stop_stop.slova = "STOP";
}

/* Funkcije za ispis teksta na sceni.
 * Prva od njih je preuzeta iz projekta kolege Luke Zivanovica */

void RenderString(float x, float y, void *font, const char* string, float r, float g, float b){
  GLfloat emission_coeffs[] = { r, g, b, 1 };
  glRasterPos3f(x, y, 1);
  glutBitmapString(font, string);
  glMaterialfv(GL_FRONT, GL_EMISSION, emission_coeffs);
}

void crtaj_slova(legenda l){
  RenderString(l.x, l.y, GLUT_BITMAP_HELVETICA_18, l.slova, 0, 0, 0);
}

void obrisi_slova(){
	adenin.slova = "";
	guanin.slova = "";
	citozin.slova = "";
	uracil.slova = "";
	mrnk.slova = "";
	trnk.slova = "";
	mala_subjedinica.slova = "";
	velika_subjedinica.slova = "";
	metionin.slova = "";
	lizin.slova = "";
	glicin.slova = "";
	fenilalanin.slova = "";
	stop_stop.slova = "";
	napravi_legendu();
}

void napravi_legendu(){
	crtaj_slova(adenin);
	crtaj_slova(guanin);
	crtaj_slova(uracil);
	crtaj_slova(citozin);
	crtaj_slova(mrnk);
	crtaj_slova(mala_subjedinica);
	crtaj_slova(velika_subjedinica);
	crtaj_slova(trnk);
	crtaj_slova(metionin);
	crtaj_slova(lizin);
	crtaj_slova(fenilalanin);
	crtaj_slova(glicin);
	crtaj_slova(stop_stop);
}
