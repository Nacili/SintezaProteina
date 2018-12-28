#include<stdlib.h>
#include<GL/glut.h>
#include<stdio.h>
#include <GL/freeglut.h>

#include "rrnk.h"
#include "nukleobaza.h"

void pomeri_malu_subjedinicu_nagore(){
	
	niz_rRNK[1].dd_y = niz_rRNK[1].dd_y + 0.002;
	niz_rRNK[1].dl_y = niz_rRNK[1].dl_y + 0.002;
	niz_rRNK[1].gl_y = niz_rRNK[1].gl_y + 0.002;
	niz_rRNK[1].gd_y = niz_rRNK[1].gd_y + 0.002;
	
}

void pomeri_veliku_subjedinicu_nadole(){
	
	niz_rRNK[0].dd_y = niz_rRNK[0].dd_y - 0.002;
	niz_rRNK[0].dl_y = niz_rRNK[0].dl_y - 0.002;
	niz_rRNK[0].gl_y = niz_rRNK[0].gl_y - 0.002;
	niz_rRNK[0].gd_y = niz_rRNK[0].gd_y - 0.002;
	niz_rRNK[0].gd_y_1 = niz_rRNK[0].gd_y_1 - 0.002;
    niz_rRNK[0].gl_y_1 = niz_rRNK[0].gl_y_1 - 0.002;
	
}

void pomeri_subjedinice_udesno(){
	
	niz_rRNK[0].dd_x = niz_rRNK[0].dd_x + 0.002;
	niz_rRNK[0].dl_x = niz_rRNK[0].dl_x + 0.002;
	niz_rRNK[0].gl_x = niz_rRNK[0].gl_x + 0.002;
	niz_rRNK[0].gd_x = niz_rRNK[0].gd_x + 0.002;
	niz_rRNK[0].gd_x_1 = niz_rRNK[0].gd_x_1 + 0.002;
    niz_rRNK[0].gl_x_1 = niz_rRNK[0].gl_x_1 + 0.002;
	
	
	niz_rRNK[1].dd_x = niz_rRNK[1].dd_x + 0.002;
	niz_rRNK[1].dl_x = niz_rRNK[1].dl_x + 0.002;
	niz_rRNK[1].gl_x = niz_rRNK[1].gl_x + 0.002;
	niz_rRNK[1].gd_x = niz_rRNK[1].gd_x + 0.002;
	
	
}

void odvoj_subjedinice(){
	niz_rRNK[0].dd_y = niz_rRNK[0].dd_y + 0.002;
	niz_rRNK[0].dl_y = niz_rRNK[0].dl_y + 0.002;
	niz_rRNK[0].gl_y = niz_rRNK[0].gl_y + 0.002;
	niz_rRNK[0].gd_y = niz_rRNK[0].gd_y + 0.002;
	niz_rRNK[0].gd_y_1 = niz_rRNK[0].gd_y_1 + 0.002;
    niz_rRNK[0].gl_y_1 = niz_rRNK[0].gl_y_1 + 0.002;
	
	niz_rRNK[1].dd_y = niz_rRNK[1].dd_y - 0.002;
	niz_rRNK[1].dl_y = niz_rRNK[1].dl_y - 0.002;
	niz_rRNK[1].gl_y = niz_rRNK[1].gl_y - 0.002;
	niz_rRNK[1].gd_y = niz_rRNK[1].gd_y - 0.002;
}


void oteraj_subjedinice(){
	niz_rRNK[0].dd_x = niz_rRNK[0].dd_x - 0.005;
	niz_rRNK[0].dl_x = niz_rRNK[0].dl_x - 0.005;
	niz_rRNK[0].gl_x = niz_rRNK[0].gl_x - 0.005;
	niz_rRNK[0].gd_x = niz_rRNK[0].gd_x - 0.005;
	niz_rRNK[0].gd_x_1 = niz_rRNK[0].gd_x_1 - 0.005;
    niz_rRNK[0].gl_x_1 = niz_rRNK[0].gl_x_1 - 0.005;
	
	niz_rRNK[1].dd_x = niz_rRNK[1].dd_x - 0.005;
	niz_rRNK[1].dl_x = niz_rRNK[1].dl_x - 0.005;
	niz_rRNK[1].gl_x = niz_rRNK[1].gl_x - 0.005;
	niz_rRNK[1].gd_x = niz_rRNK[1].gd_x - 0.005;
}

void generisi_rRNK(){
	
	// velika subjedinica
	niz_rRNK[0].dd_x = niz_na_mRNK[13].dd_x;
	niz_rRNK[0].dd_y = -0.5;
	niz_rRNK[0].dl_x = niz_na_mRNK[0].dl_x;
	niz_rRNK[0].dl_y = -0.5;
	niz_rRNK[0].gl_x = niz_na_mRNK[2].dl_x;
	niz_rRNK[0].gl_y = -0.3;
	niz_rRNK[0].gd_x = niz_na_mRNK[11].dd_x;
	niz_rRNK[0].gd_y = -0.3;
	niz_rRNK[0].gl_x_1 = niz_na_mRNK[4].dl_x;
	niz_rRNK[0].gl_y_1 = -0.2;
	niz_rRNK[0].gd_x_1 = niz_na_mRNK[9].dd_x;
	niz_rRNK[0].gd_y_1 = -0.2;
	
	
	// mala subjedinica
	niz_rRNK[1].dd_x = niz_na_mRNK[11].dd_x;
	niz_rRNK[1].dd_y = -1.0;
	niz_rRNK[1].dl_x = niz_na_mRNK[2].dl_x;
	niz_rRNK[1].dl_y = -1.0;
	niz_rRNK[1].gl_x = niz_na_mRNK[0].dl_x;
	niz_rRNK[1].gl_y = -0.8;
	niz_rRNK[1].gd_x = niz_na_mRNK[13].dd_x;
	niz_rRNK[1].gd_y = -0.8;
	
}

void crtaj_rRNK(){
	
	// velika subjedinica
	glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glVertex3f(niz_rRNK[0].dd_x, niz_rRNK[0].dd_y, 0);
		glColor3f(1, 1, 1);
		glVertex3f(niz_rRNK[0].dl_x, niz_rRNK[0].dl_y, 0);
		glColor3f(0, 0, 1);
		glVertex3f(niz_rRNK[0].gl_x, niz_rRNK[0].gl_y, 0);
		glColor3f(0, 0.5, 1);
		glVertex3f(niz_rRNK[0].gl_x_1, niz_rRNK[0].gl_y_1, 0);
		glColor3f(0, 0.5, 1);
		glVertex3f(niz_rRNK[0].gd_x_1, niz_rRNK[0].gd_y_1, 0);
		glColor3f(0, 0, 1);
		glVertex3f(niz_rRNK[0].gd_x, niz_rRNK[0].gd_y, 0);
	glEnd();
	
	// mala subjedinicia
	glBegin(GL_POLYGON);
		glColor3f(0, 0, 1);
		glVertex3f(niz_rRNK[1].dd_x, niz_rRNK[1].dd_y, 0);
		glColor3f(0, 0, 1);
		glVertex3f(niz_rRNK[1].dl_x, niz_rRNK[1].dl_y, 0);
		glColor3f(0, 0.9, 1);
		glVertex3f(niz_rRNK[1].gl_x, niz_rRNK[1].gl_y, 0);
		glColor3f(0, 0.9, 1);
		glVertex3f(niz_rRNK[1].gd_x, niz_rRNK[1].gd_y, 0);
	glEnd();
	

}


