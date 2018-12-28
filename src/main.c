#include<stdlib.h>
#include<GL/glut.h>
#include<stdio.h>
#include <GL/freeglut.h>

#include "nukleobaza.h"
#include "mrnk.h"
#include "trnk.h"
#include "rrnk.h"
#include "stop.h"
#include "text.h"

/* parametar animacije */
float animation_parameter=0;
static int animation_active;
static void on_keyboard(unsigned char key, int x, int y);
static void on_reshape(int width, int height);
static void on_display(void);
static void on_timer(int value);

int main(int argc, char **argv){

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_DEPTH|GLUT_DOUBLE);
	
	glutInitWindowSize(1600, 800);
	glutInitWindowPosition(90, 5);
	glutCreateWindow(argv[0]);
    	
    	glutKeyboardFunc(on_keyboard);
    	glutReshapeFunc(on_reshape);
    	
    	animation_parameter = 0;
    	animation_active = 0;
		
		/* inicijalizacije */
		generisi_osnovu_mRNK();
		generisi_niz_na_mRNK();
		generisi_tRNK();
		generisi_rRNK();
		generisi_stop();
		inicijalizuj_legendu();
    	
    	glClearColor(0.95, 0.7, 0.7, 0);
    	glEnable(GL_DEPTH_TEST);
		glutDisplayFunc(on_display);
    	
    	glutMainLoop();
    	
    	return 0;

}



static void on_keyboard(unsigned char key, int x, int y){

	switch(key){
	case 27:
		/*Na pritisak tastera esc se zavrsava program*/
		exit(0);
		break;
	case 'g':
	case 'G':
		/*Na pritisak tastera G (malo ili veliko) pokrece se simulacija samo ako nije vec pokrenuta*/
		if(!animation_active){
			glutTimerFunc(500, on_timer, 0);
			animation_active = 1;
		}
		break;
	case 's':
	case 'S':
		/*Zaustavljanje simulacije*/
		animation_active = 0;
		break;
	case 'r':
	case 'R':
		animation_parameter = 0;
		break;
	}
}


static void on_timer(int value){
	
	/*Provera da li callback dolazi od odgovarajuceg tajmera*/
	if(value != 0){
		return;
	}
	
	/* Azurira se vreme simulacije*/
	animation_parameter++;
	if(animation_parameter >= 1.0 && animation_parameter <= 50){
		if(animation_parameter >= 2.0){
			obrisi_slova();
		}
		pomeri_malu_subjedinicu_nagore();
	}
	if(animation_parameter >= 45.5 && animation_parameter <= 445.0){	// treba mu 7 sec da stigne
		 pomeri_tRNK_nadole(0);
	}
	
	if(animation_parameter >= 440.00 && animation_parameter <= 840.00){
		pomeri_tRNK_nadole(1);
	}
	
	if(animation_parameter >= 840.00 && animation_parameter <= 930){
		pomeri_veliku_subjedinicu_nadole();
	}
	
	
	if(animation_parameter >= 930.00 && animation_parameter <= 1125.00){
		povezi_aminokiseline(0);
	}
	if(animation_parameter >= 1120.00 && animation_parameter <= 1270.00){
		  pomeri_subjedinice_udesno();
	}
	
	if(animation_parameter >= 1265.00 && animation_parameter <= 1750.00){
		  oteraj_tRNK(0);
	}
	
	if(animation_parameter >= 1400.00 && animation_parameter <= 1800.00){
		pomeri_tRNK_nadole(2);
	}
	
	if(animation_parameter >= 1795.00 && animation_parameter <= 1990.00){
		povezi_aminokiseline(1);
	}
	
	
	if(animation_parameter >= 1985.00 && animation_parameter <= 2135.00){
		  pomeri_subjedinice_udesno();
	}
	
	if(animation_parameter >= 2130.00 && animation_parameter <= 2750.00){
		  oteraj_tRNK(1);
	}
	
	if(animation_parameter >= 2265.00 && animation_parameter <= 2665.00){
		  pomeri_tRNK_nadole(3);
	}
	
	if(animation_parameter >= 2660.00 && animation_parameter <= 2855.00){
		povezi_aminokiseline(2);
	}
	
	if(animation_parameter >= 2850.00 && animation_parameter <= 3000.00){
		  pomeri_subjedinice_udesno();
	}
	
	if(animation_parameter >= 2995.00 && animation_parameter <= 3750.00){
		  oteraj_tRNK(2);
	}
	
	if(animation_parameter >= 3130.00 && animation_parameter <= 3300.00){
		dovedi_stop1();
	}
	if(animation_parameter >= 3305.00 && animation_parameter <= 3440.00){
		dovedi_stop2();
	}
	
	if(animation_parameter >= 3440.00 && animation_parameter <= 4400.00){
		  oteraj_tRNK(3);
	}
	
	if(animation_parameter >= 3540.00 && animation_parameter <= 4300.00){
		oteraj_stop();
	}
	
	if(animation_parameter >= 3640.00 && animation_parameter <= 3750.00){
		odvoj_subjedinice();
	}
	
	if(animation_parameter > 3900.00 && animation_parameter <= 4700.00){
		oteraj_subjedinice();
	}
	
	if(animation_parameter >= 4000.00 && animation_parameter <= 5000.00){
		pomeri_mRNK();
	}
	/*
	*/

	
	/*Ponovno iscrtavanje prozora*/
	glutPostRedisplay();
	
	/*Ponovno postavljanje tajmera, po potrebi*/
	if(animation_active){
		glutTimerFunc(1.5, on_timer, 0);
	}
}


static void on_reshape(int width, int height)
{
    /* Postavlja se viewport. */
    glViewport(0, 0, width, height);

    /* Postavljaju se parametri projekcije. */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45, (float) width /height, 1, 100);
}


static void on_display(void){
	
	
	
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(0, 0, 3, 0, 0, 0, 0, 1, 0);
	
	glPushMatrix();
	glTranslatef(-0.8, 0, 0);
	
	/* crta STOP */
	glPushMatrix();
// 	glColor3f(s.boja[0], s.boja[1], s.boja[2]);
	glBegin(GL_POLYGON);
		glColor3f(0, 1, 0.7);
		glVertex3f(s.dd_x, s.dd_y, 0);
		glColor3f(0, 1, 0);
		glVertex3f(s.dl_x, s.dl_y, 0);
		glColor3f(0, 0.5, 0.1);
		glVertex3f(s.gl_x, s.gl_y, 0);
		glColor3f(0, 0.2, 0);
		glVertex3f(s.gd_x, s.gd_y, 0);
	glEnd();
	glPopMatrix();
	
// 	glPushMatrix();
// 	glBegin(GL_POLYGON);
// 		glColor3f(s.boja_dd[0], s.boja_dd[1], s.boja_dd[2]);
// 		glVertex3f(s.dd_x, s.dd_y, 0);
// 		glColor3f(s.boja_dl[0], s.boja_dl[1], s.boja_dl[2]);
// 		glVertex3f(s.dl_x, s.dl_y, 0);
// 		glColor3f(s.boja_gl[0], s.boja_gl[1], s.boja_gl[2]);
// 		glVertex3f(s.gl_x, s.gl_y, 0);
// 		glColor3f(s.boja_gd[0], s.boja_gd[1], s.boja_gd[2]);
// 		glVertex3f(s.gd_x, s.gd_y, 0);
// 	glEnd();
// 	glPopMatrix();
	
	
	/* Crta mRNK i niz na njoj */
	crtaj_mRNK();
	
   /* Transportne RNK */
	
	glPushMatrix();
		crtaj_niz_tRNK();
	glPopMatrix();	// pop za tRNK
	
	glPushMatrix();
		crtaj_rRNK();
	glPopMatrix();

	
	glPopMatrix();	// pop za mRNK matricu
	
	glPushMatrix();
		glColor3f(0	, 0, 0);
		napravi_legendu();
	glPopMatrix();	// pop za legendu
	
	


	glutSwapBuffers();
	
}