#include<stdlib.h>
#include<GL/glut.h>
#include<stdio.h>
#include <GL/freeglut.h>

#include "nukleobaza.h"
#include "trnk.h"

void pomeri_tRNK_nadole(int ulaz){
	 
	/* prvi poprecni pravougaonik */
	niz_tRNK[ulaz].I_dd_y = niz_tRNK[ulaz].I_dd_y - 0.002;
	niz_tRNK[ulaz].I_dl_y = niz_tRNK[ulaz].I_dl_y - 0.002;
	niz_tRNK[ulaz].I_gl_y = niz_tRNK[ulaz].I_gl_y - 0.002;
	niz_tRNK[ulaz].I_gd_y = niz_tRNK[ulaz].I_gd_y - 0.002;
	/* horizontalni pravougaonik */                     
	niz_tRNK[ulaz].H_dd_y = niz_tRNK[ulaz].H_dd_y - 0.002;
	niz_tRNK[ulaz].H_dl_y = niz_tRNK[ulaz].H_dl_y - 0.002;
	niz_tRNK[ulaz].H_gl_y = niz_tRNK[ulaz].H_gl_y - 0.002;
	niz_tRNK[ulaz].H_gd_y = niz_tRNK[ulaz].H_gd_y - 0.002;
	/* drugi poprecni pravougaonik */
	niz_tRNK[ulaz].II_dd_y = niz_tRNK[ulaz].II_dd_y - 0.002;
	niz_tRNK[ulaz].II_dl_y = niz_tRNK[ulaz].II_dl_y - 0.002;
	niz_tRNK[ulaz].II_gl_y = niz_tRNK[ulaz].II_gl_y - 0.002;
	niz_tRNK[ulaz].II_gd_y = niz_tRNK[ulaz].II_gd_y - 0.002;
	
	int i;
	for(i = 0; i < triplet_tRNK; i++){
		niz_tRNK[ulaz].niz[i].dd_y = niz_tRNK[ulaz].niz[i].dd_y - 0.002;
		niz_tRNK[ulaz].niz[i].dl_y = niz_tRNK[ulaz].niz[i].dl_y - 0.002;
		niz_tRNK[ulaz].niz[i].gl_y = niz_tRNK[ulaz].niz[i].gl_y - 0.002;
		niz_tRNK[ulaz].niz[i].gd_y = niz_tRNK[ulaz].niz[i].gd_y - 0.002;
		niz_tRNK[ulaz].niz[i].s_y = niz_tRNK[ulaz].niz[i].s_y - 0.002;
	}
	
	
	niz_tRNK[ulaz].translacija2[1] = niz_tRNK[ulaz].translacija2[1] - 0.002;
	 
}

void oteraj_tRNK(int ulaz){
	
	/* prvi poprecni pravougaonik */
	niz_tRNK[ulaz].I_dd_y = niz_tRNK[ulaz].I_dd_y + 0.002;
	niz_tRNK[ulaz].I_dd_x = niz_tRNK[ulaz].I_dd_x - 0.002;
	niz_tRNK[ulaz].I_dl_y = niz_tRNK[ulaz].I_dl_y + 0.002;
	niz_tRNK[ulaz].I_dl_x = niz_tRNK[ulaz].I_dl_x - 0.002;
	niz_tRNK[ulaz].I_gl_y = niz_tRNK[ulaz].I_gl_y + 0.002;
	niz_tRNK[ulaz].I_gl_x = niz_tRNK[ulaz].I_gl_x - 0.002;
	niz_tRNK[ulaz].I_gd_y = niz_tRNK[ulaz].I_gd_y + 0.002;
	niz_tRNK[ulaz].I_gd_x = niz_tRNK[ulaz].I_gd_x - 0.002;
	/* horizontalni pravougaonik */                    
	niz_tRNK[ulaz].H_dd_y = niz_tRNK[ulaz].H_dd_y + 0.002;
	niz_tRNK[ulaz].H_dd_x = niz_tRNK[ulaz].H_dd_x - 0.002;
	niz_tRNK[ulaz].H_dl_y = niz_tRNK[ulaz].H_dl_y + 0.002;
	niz_tRNK[ulaz].H_dl_x = niz_tRNK[ulaz].H_dl_x - 0.002;
	niz_tRNK[ulaz].H_gl_y = niz_tRNK[ulaz].H_gl_y + 0.002;
	niz_tRNK[ulaz].H_gl_x = niz_tRNK[ulaz].H_gl_x - 0.002;
	niz_tRNK[ulaz].H_gd_y = niz_tRNK[ulaz].H_gd_y + 0.002;
	niz_tRNK[ulaz].H_gd_x = niz_tRNK[ulaz].H_gd_x - 0.002;
	/* drugi poprecni pravougaonik */
	niz_tRNK[ulaz].II_dd_y = niz_tRNK[ulaz].II_dd_y + 0.002;
	niz_tRNK[ulaz].II_dd_x = niz_tRNK[ulaz].II_dd_x - 0.002;
	niz_tRNK[ulaz].II_dl_y = niz_tRNK[ulaz].II_dl_y + 0.002;
	niz_tRNK[ulaz].II_dl_x = niz_tRNK[ulaz].II_dl_x - 0.002;
	niz_tRNK[ulaz].II_gl_y = niz_tRNK[ulaz].II_gl_y + 0.002;
	niz_tRNK[ulaz].II_gl_x = niz_tRNK[ulaz].II_gl_x - 0.002;
	niz_tRNK[ulaz].II_gd_y = niz_tRNK[ulaz].II_gd_y + 0.002;
	niz_tRNK[ulaz].II_gd_x = niz_tRNK[ulaz].II_gd_x - 0.002;
	
	int i;
	for(i = 0; i < triplet_tRNK; i++){
		niz_tRNK[ulaz].niz[i].dd_y = niz_tRNK[ulaz].niz[i].dd_y + 0.002;
		niz_tRNK[ulaz].niz[i].dd_x = niz_tRNK[ulaz].niz[i].dd_x - 0.002;
		niz_tRNK[ulaz].niz[i].dl_y = niz_tRNK[ulaz].niz[i].dl_y + 0.002;
		niz_tRNK[ulaz].niz[i].dl_x = niz_tRNK[ulaz].niz[i].dl_x - 0.002;
		niz_tRNK[ulaz].niz[i].gl_y = niz_tRNK[ulaz].niz[i].gl_y + 0.002;
		niz_tRNK[ulaz].niz[i].gl_x = niz_tRNK[ulaz].niz[i].gl_x - 0.002;
		niz_tRNK[ulaz].niz[i].gd_y = niz_tRNK[ulaz].niz[i].gd_y + 0.002;
		niz_tRNK[ulaz].niz[i].gd_x = niz_tRNK[ulaz].niz[i].gd_x - 0.002;
		niz_tRNK[ulaz].niz[i].s_y = niz_tRNK[ulaz].niz[i].s_y + 0.002;
		niz_tRNK[ulaz].niz[i].s_x = niz_tRNK[ulaz].niz[i].s_x - 0.002;
	}
	
}

void oznaci_nukleobazu_tRNK(){
	
	niz_tRNK[0].niz[0].oznaka = 'U';
	niz_tRNK[0].niz[1].oznaka = 'A';
	niz_tRNK[0].niz[2].oznaka = 'C';
	
	niz_tRNK[1].niz[0].oznaka = 'U';
	niz_tRNK[1].niz[1].oznaka = 'U';
	niz_tRNK[1].niz[2].oznaka = 'U';
	
	niz_tRNK[2].niz[0].oznaka = 'A';
	niz_tRNK[2].niz[1].oznaka = 'A';
	niz_tRNK[2].niz[2].oznaka = 'A';
	
	niz_tRNK[3].niz[0].oznaka = 'C';
	niz_tRNK[3].niz[1].oznaka = 'G';
	niz_tRNK[3].niz[2].oznaka = 'C';
		
}

void generisi_niz_na_tRNK(){
	
	oznaci_nukleobazu_tRNK();
	                           
	int i, j;
	
	for(i = 0; i <= br_tRNK; i++){
		j = 0;
		niz_tRNK[i].niz[j].dd_x = niz_tRNK[i].II_dl_x + 0.1;
		niz_tRNK[i].niz[j].dd_y = niz_tRNK[i].II_dl_y  - 0.1;
		niz_tRNK[i].niz[j].dl_x = niz_tRNK[i].II_dl_x;
		niz_tRNK[i].niz[j].dl_y = niz_tRNK[i].II_dl_y  - 0.1;
		niz_tRNK[i].niz[j].gl_x = niz_tRNK[i].II_dl_x;
		niz_tRNK[i].niz[j].gl_y = niz_tRNK[i].II_dl_y;
		niz_tRNK[i].niz[j].s_x = niz_tRNK[i].II_dl_x + 0.05;
		niz_tRNK[i].niz[j].gd_x = niz_tRNK[i].II_dl_x + 0.1;
		niz_tRNK[i].niz[j].gd_y = niz_tRNK[i].II_dl_y;
		if(niz_tRNK[i].niz[j].oznaka == 'A'){
			niz_tRNK[i].niz[j].s_y = niz_tRNK[i].II_dl_y - 0.15;
		}
		if(niz_tRNK[i].niz[j].oznaka == 'U'){
			niz_tRNK[i].niz[j].s_y = niz_tRNK[i].II_dl_y - 0.05;	// -0.15 je za adenin, -0.1 za citozin
		}
		if(niz_tRNK[i].niz[j].oznaka == 'C' || niz_tRNK[i].niz[j].oznaka == 'G'){
				niz_tRNK[i].niz[j].s_y = niz_tRNK[i].II_dl_y - 0.1;
		}
		
	
		for(j = 1; j < triplet_tRNK; j++){
			niz_tRNK[i].niz[j].dd_x = niz_tRNK[i].niz[j-1].dd_x + 0.1;
			niz_tRNK[i].niz[j].dd_y = niz_tRNK[i].niz[j-1].dd_y;
			niz_tRNK[i].niz[j].dl_x = niz_tRNK[i].niz[j-1].dl_x + 0.1;
			niz_tRNK[i].niz[j].dl_y = niz_tRNK[i].niz[j-1].dl_y;
			niz_tRNK[i].niz[j].gl_x = niz_tRNK[i].niz[j-1].gl_x + 0.1;
			niz_tRNK[i].niz[j].gl_y = niz_tRNK[i].niz[j-1].gl_y;
			niz_tRNK[i].niz[j].gd_x = niz_tRNK[i].niz[j-1].gd_x + 0.1;
			niz_tRNK[i].niz[j].gd_y = niz_tRNK[i].niz[j-1].gd_y;
			niz_tRNK[i].niz[j].s_x = niz_tRNK[i].niz[j-1].s_x + 0.1;
			if(niz_tRNK[i].niz[j].oznaka == 'A'){
				niz_tRNK[i].niz[j].s_y = niz_tRNK[i].II_dl_y  - 0.15;
			}
			if(niz_tRNK[i].niz[j].oznaka == 'U'){
				niz_tRNK[i].niz[j].s_y = niz_tRNK[i].II_dl_y  - 0.05;	// mozda je 15 i mozda je gore - a ovde +
			}
			if(niz_tRNK[i].niz[j].oznaka == 'C' || niz_tRNK[i].niz[j].oznaka == 'G'){
				niz_tRNK[i].niz[j].s_y = niz_tRNK[i].II_dl_y - 0.1;
			}
		}
	}
	
}

void generisi_aminokiseline(){
	
	// I
	niz_tRNK[0].sfera[0] = 0.1;
	niz_tRNK[0].sfera[1] = 10;
	niz_tRNK[0].sfera[2] = 10;
	
	niz_tRNK[0].boja[0] = 1;
	niz_tRNK[0].boja[1] = 0;
	niz_tRNK[0].boja[2] = 0.5;
	
	niz_tRNK[0].translacija[0] = - 0.75;
	niz_tRNK[0].translacija[1] = 0.8;
	niz_tRNK[0].translacija[2] = 0;
	             
	niz_tRNK[0].translacija2[0] = 0.0;
	niz_tRNK[0].translacija2[1] = 0.0;
	niz_tRNK[0].translacija2[2] = 0.0;
	
	
	// II
	niz_tRNK[1].sfera[0] = 0.1;
	niz_tRNK[1].sfera[1] = 10;
	niz_tRNK[1].sfera[2] = 10;
	        
	niz_tRNK[1].boja[0] = 1;
	niz_tRNK[1].boja[1] = 0.5;
	niz_tRNK[1].boja[2] = 0.5;
	
	niz_tRNK[1].translacija[0] =  - 0.45;
	niz_tRNK[1].translacija[1] = 0.8;
	niz_tRNK[1].translacija[2] = 0;
	             
	niz_tRNK[1].translacija2[0] = 0.0;
	niz_tRNK[1].translacija2[1] = 0.0;
	niz_tRNK[1].translacija2[2] = 0.0;
	
	
	
	// III
	niz_tRNK[2].sfera[0] = 0.1;
	niz_tRNK[2].sfera[1] = 10;
	niz_tRNK[2].sfera[2] = 10;
	        
	niz_tRNK[2].boja[0] = 0.5;
	niz_tRNK[2].boja[1] = 0;
	niz_tRNK[2].boja[2] = 0.5;
	
	niz_tRNK[2].translacija[0] = - 0.15;
	niz_tRNK[2].translacija[1] = 0.8;
	niz_tRNK[2].translacija[2] = 0;
	             
	niz_tRNK[2].translacija2[0] = 0.0;
	niz_tRNK[2].translacija2[1] = 0.0;
	niz_tRNK[2].translacija2[2] = 0.0;
	
	
	// IV
	niz_tRNK[3].sfera[0] = 0.1;
	niz_tRNK[3].sfera[1] = 10;
	niz_tRNK[3].sfera[2] = 10;
	        
	niz_tRNK[3].boja[0] = 0.75;
	niz_tRNK[3].boja[1] = 0.2;
	niz_tRNK[3].boja[2] = 0.5;
	
	niz_tRNK[3].translacija[0] = 0.15;
	niz_tRNK[3].translacija[1] = 0.8;
	niz_tRNK[3].translacija[2] = 0;
	             
	niz_tRNK[3].translacija2[0] = 0.0;
	niz_tRNK[3].translacija2[1] = 0.0;
	niz_tRNK[3].translacija2[2] = 0.0;
	
}



/* f-ja za generisanje pocetnih vrednosti niza tRNK */
void generisi_tRNK(){
	
	/* prva tRNK na osnovu koje se iscrtavaju ostale, uz odgovarajuci pomeraj */
	/* prvi poprecni pravougaonik */
	niz_tRNK[0].I_dd_x = niz_na_mRNK[6].dd_x;	// donje desno teme tReba da ima istu x koordinatu kao i donje desno teme guanina u mRNK
	niz_tRNK[0].I_dd_y = 0.6;
	niz_tRNK[0].I_dl_x = niz_na_mRNK[4].dl_x;	// donje levo teme tReba da ima istu x koordinatu kao i donje levo teme adenina u mRNK
	niz_tRNK[0].I_dl_y = 0.6;
	niz_tRNK[0].I_gl_x = niz_na_mRNK[4].dl_x;
	niz_tRNK[0].I_gl_y = 0.7;
	niz_tRNK[0].I_gd_x = niz_na_mRNK[6].dd_x;
	niz_tRNK[0].I_gd_y = 0.7;
	/* horizontalni pravougaonik */
	niz_tRNK[0].H_dd_x = niz_tRNK[0].I_dl_x + 0.2;
	niz_tRNK[0].H_dd_y = 0.4;
	niz_tRNK[0].H_dl_x = niz_tRNK[0].I_dl_x + 0.1;
	niz_tRNK[0].H_dl_y = 0.4;
	niz_tRNK[0].H_gl_x = niz_tRNK[0].I_dl_x + 0.1;
	niz_tRNK[0].H_gl_y = niz_tRNK[0].I_dd_y;
	niz_tRNK[0].H_gd_x = niz_tRNK[0].I_dl_x + 0.2;
	niz_tRNK[0].H_gd_y = niz_tRNK[0].I_dd_y;
	/* drugi poprecni pravougaonik */
	niz_tRNK[0].II_dd_x = niz_na_mRNK[6].dd_x;
	niz_tRNK[0].II_dd_y = 0.3;
	niz_tRNK[0].II_dl_x = niz_na_mRNK[4].dl_x;
	niz_tRNK[0].II_dl_y = 0.3;
	niz_tRNK[0].II_gl_x = niz_na_mRNK[4].dl_x;
	niz_tRNK[0].II_gl_y = 0.4;
	niz_tRNK[0].II_gd_x = niz_na_mRNK[6].dd_x;
	niz_tRNK[0].II_gd_y = 0.4;
	
	
	int i = 0;
	for(i = 1; i < br_tRNK; i++){
		niz_tRNK[i].I_dd_x = niz_tRNK[i-1].I_dd_x + 0.3;
		niz_tRNK[i].I_dd_y = niz_tRNK[i-1].I_dd_y;
		niz_tRNK[i].I_dl_x = niz_tRNK[i-1].I_dl_x + 0.3;
		niz_tRNK[i].I_dl_y = niz_tRNK[i-1].I_dl_y;
		niz_tRNK[i].I_gl_x = niz_tRNK[i-1].I_gl_x + 0.3;
		niz_tRNK[i].I_gl_y = niz_tRNK[i-1].I_gl_y;
		niz_tRNK[i].I_gd_x = niz_tRNK[i-1].I_gd_x + 0.3;
		niz_tRNK[i].I_gd_y = niz_tRNK[i-1].I_gd_y;
		
		niz_tRNK[i].H_dd_x = niz_tRNK[i-1].H_dd_x + 0.3;
		niz_tRNK[i].H_dd_y = niz_tRNK[i-1].H_dd_y;
		niz_tRNK[i].H_dl_x = niz_tRNK[i-1].H_dl_x + 0.3;
		niz_tRNK[i].H_dl_y = niz_tRNK[i-1].H_dl_y;
		niz_tRNK[i].H_gl_x = niz_tRNK[i-1].H_gl_x + 0.3;
		niz_tRNK[i].H_gl_y = niz_tRNK[i-1].H_gl_y;
		niz_tRNK[i].H_gd_x = niz_tRNK[i-1].H_gd_x + 0.3;
		niz_tRNK[i].H_gd_y = niz_tRNK[i-1].H_gd_y;
		
		niz_tRNK[i].II_dd_x = niz_tRNK[i-1].II_dd_x + 0.3;
		niz_tRNK[i].II_dd_y = niz_tRNK[i-1].II_dd_y;
		niz_tRNK[i].II_dl_x = niz_tRNK[i-1].II_dl_x + 0.3;
		niz_tRNK[i].II_dl_y = niz_tRNK[i-1].II_dl_y;
		niz_tRNK[i].II_gl_x = niz_tRNK[i-1].II_gl_x + 0.3;
		niz_tRNK[i].II_gl_y = niz_tRNK[i-1].II_gl_y;
		niz_tRNK[i].II_gd_x = niz_tRNK[i-1].II_gd_x + 0.3;
		niz_tRNK[i].II_gd_y = niz_tRNK[i-1].II_gd_y;
	}
	
	
	/* genirisi niz nukleobaza na tRNK */
	generisi_niz_na_tRNK();
	generisi_aminokiseline();
	
}



/* f-ja za iscrtavanje 4 tRNK */
void crtaj_niz_tRNK(){
	
	int i, j;
	for(i = 0; i < br_tRNK; i++){
		/* prvi poprecni pravougaonik */
		glBegin(GL_POLYGON);
			glColor3f(1, 0, 0);
			glVertex3f(niz_tRNK[i].I_dd_x, niz_tRNK[i].I_dd_y, 0);
			glColor3f(1, 0, 0);
			glVertex3f(niz_tRNK[i].I_dl_x, niz_tRNK[i].I_dl_y, 0);
			glColor3f(1, 0.5, 0);
			glVertex3f(niz_tRNK[i].I_gl_x, niz_tRNK[i].I_gl_y, 0);
			glColor3f(1, 0.5, 0);
			glVertex3f(niz_tRNK[i].I_gd_x, niz_tRNK[i].I_gd_y, 0);
		glEnd();
		/* horizontalni pravougaonik */
		glBegin(GL_POLYGON);
			glColor3f(1, 0.5, 0);
			glVertex3f(niz_tRNK[i].H_dd_x, niz_tRNK[i].H_dd_y, 0);
			glColor3f(1, 0.5, 0);
			glVertex3f(niz_tRNK[i].H_dl_x, niz_tRNK[i].H_dl_y, 0);
			glColor3f(1, 0, 0);
			glVertex3f(niz_tRNK[i].H_gl_x, niz_tRNK[i].H_gl_y, 0);
			glColor3f(1, 0, 0);
			glVertex3f(niz_tRNK[i].H_gd_x, niz_tRNK[i].H_gd_y, 0);
		glEnd();
		/* drugi poprecni pravougaonik */
		glBegin(GL_POLYGON);
			glColor3f(1, 0, 0);
			glVertex3f(niz_tRNK[i].II_dd_x, niz_tRNK[i].II_dd_y, 0);
			glColor3f(1, 0, 0);
			glVertex3f(niz_tRNK[i].II_dl_x, niz_tRNK[i].II_dl_y, 0);
			glColor3f(1, 0.5, 0);
			glVertex3f(niz_tRNK[i].II_gl_x, niz_tRNK[i].II_gl_y, 0);
			glColor3f(1, 0.5, 0);
			glVertex3f(niz_tRNK[i].II_gd_x, niz_tRNK[i].II_gd_y, 0);
		glEnd();
		/* niz nukleobaza na tRNK */
		for(j = 0; j <  3; j++){	// tReba tRiplet_tRNK
			if(niz_tRNK[i].niz[j].oznaka == 'A'){
				glBegin(GL_POLYGON);
					glColor3f(1, 0.5, 0);
					glVertex3f(niz_tRNK[i].niz[j].s_x, niz_tRNK[i].niz[j].s_y, 0);
					glColor3f(1, 1, 0);
					glVertex3f(niz_tRNK[i].niz[j].dl_x,niz_tRNK[i].niz[j].dl_y, 0);
					glColor3f(1, 1, 0);
					glVertex3f(niz_tRNK[i].niz[j].gl_x,niz_tRNK[i].niz[j].gl_y, 0);
					glColor3f(1, 0.9, 0);
					glVertex3f(niz_tRNK[i].niz[j].gd_x,niz_tRNK[i].niz[j].gd_y, 0);
					glColor3f(1, 0.5, 0);
					glVertex3f(niz_tRNK[i].niz[j].dd_x,niz_tRNK[i].niz[j].dd_y, 0);
				glEnd();	
			}
			if(niz_tRNK[i].niz[j].oznaka == 'U'){
				glBegin(GL_POLYGON);
					glColor3f(1, 0.5, 0);
					glVertex3f(niz_tRNK[i].niz[j].s_x, niz_tRNK[i].niz[j].s_y, 0);
					glColor3f(1, 0, 0);
					glVertex3f(niz_tRNK[i].niz[j].dl_x,niz_tRNK[i].niz[j].dl_y, 0);
					glColor3f(1, 0, 0);
					glVertex3f(niz_tRNK[i].niz[j].gl_x,niz_tRNK[i].niz[j].gl_y, 0);
					glColor3f(1, 0.3, 0);
					glVertex3f(niz_tRNK[i].niz[j].gd_x,niz_tRNK[i].niz[j].gd_y, 0);
					glColor3f(1, 0.5, 0);
					glVertex3f(niz_tRNK[i].niz[j].dd_x,niz_tRNK[i].niz[j].dd_y, 0);
				glEnd();
			}
			if(niz_tRNK[i].niz[j].oznaka == 'C'){
				glBegin(GL_POLYGON);
					glColor3f(1, 1, 0);
					glVertex3f(niz_tRNK[i].niz[j].s_x, niz_tRNK[i].niz[j].s_y, 0);
					glColor3f(0, 1, 1);
					glVertex3f(niz_tRNK[i].niz[j].dl_x,niz_tRNK[i].niz[j].dl_y, 0);
					glColor3f(0, 1, 1);
					glVertex3f(niz_tRNK[i].niz[j].gl_x,niz_tRNK[i].niz[j].gl_y, 0);
					glColor3f(0, 1, 0);
					glVertex3f(niz_tRNK[i].niz[j].gd_x,niz_tRNK[i].niz[j].gd_y, 0);
					glColor3f(1, 1, 0);
					glVertex3f(niz_tRNK[i].niz[j].dd_x,niz_tRNK[i].niz[j].dd_y, 0);
				glEnd();
			}
			if(niz_tRNK[i].niz[j].oznaka == 'G'){;
				glBegin(GL_POLYGON);
					glColor3f(0, 1, 1);
					glVertex3f(niz_tRNK[i].niz[j].s_x, niz_tRNK[i].niz[j].s_y, 0);
					glColor3f(1, 0, 0);
					glVertex3f(niz_tRNK[i].niz[j].dl_x,niz_tRNK[i].niz[j].dl_y, 0);
					glColor3f(1, 0, 0);
					glVertex3f(niz_tRNK[i].niz[j].gl_x,niz_tRNK[i].niz[j].gl_y, 0);
					glColor3f(0, 0, 1);
					glVertex3f(niz_tRNK[i].niz[j].gd_x,niz_tRNK[i].niz[j].gd_y, 0);
					glColor3f(0, 1, 1);
					glVertex3f(niz_tRNK[i].niz[j].dd_x,niz_tRNK[i].niz[j].dd_y, 0);
				glEnd();
			}
		}
		glPushMatrix();
			glColor3f(niz_tRNK[i].boja[0], niz_tRNK[i].boja[1], niz_tRNK[i].boja[2]);
			glTranslatef(niz_tRNK[i].translacija2[0], niz_tRNK[i].translacija2[1], niz_tRNK[i].translacija2[2]);
			glTranslatef(niz_tRNK[i].translacija[0], niz_tRNK[i].translacija[1], niz_tRNK[i].translacija[2]);
			glutWireSphere(niz_tRNK[i].sfera[0], niz_tRNK[i].sfera[1], niz_tRNK[i].sfera[2]);
		glPopMatrix();
	}
	
}


void povezi_aminokiseline(int ulaz){		// ulaz je indikator koju kiselinu tReba povezati sa ostalim
	/* Prva aminokiselina se povezuje sa drugom, tako sto se "lepi" na nju */
	if(ulaz == 0){
		niz_tRNK[0].translacija2[0] = niz_tRNK[0].translacija2[0] + 0.0015;
		niz_tRNK[0].translacija2[1] = niz_tRNK[0].translacija2[1] + 0.0009;
	}
	/* Prva i druga se lepe na trecu */
	if(ulaz == 1){
		niz_tRNK[1].translacija2[0] = niz_tRNK[1].translacija2[0] + 0.0015;
		niz_tRNK[1].translacija2[1] = niz_tRNK[1].translacija2[1] + 0.0009;
		                                           
		niz_tRNK[0].translacija2[0] = niz_tRNK[0].translacija2[0] + 0.0015;
		niz_tRNK[0].translacija2[1] = niz_tRNK[0].translacija2[1] + 0.0009;
	}
	/* Prva, druga i treca se lepe na cetvrtu */
	if(ulaz == 2){
		niz_tRNK[2].translacija2[0] = niz_tRNK[2].translacija2[0] + 0.0015;
		niz_tRNK[2].translacija2[1] = niz_tRNK[2].translacija2[1] + 0.0009;
		                                           
		niz_tRNK[1].translacija2[0] = niz_tRNK[1].translacija2[0] + 0.0015;
		niz_tRNK[1].translacija2[1] = niz_tRNK[1].translacija2[1] + 0.0009;
												
		niz_tRNK[0].translacija2[0] = niz_tRNK[0].translacija2[0] + 0.0015;
		niz_tRNK[0].translacija2[1] = niz_tRNK[0].translacija2[1] + 0.0009;
	}
}
