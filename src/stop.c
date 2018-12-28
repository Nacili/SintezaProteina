#include<stdlib.h>
#include<GL/glut.h>
#include<stdio.h>
#include <GL/freeglut.h>

#include "stop.h"

void generisi_stop(){
	s.dd_x = 1.2; 
	s.dd_y = 0.0;
	s.dl_x = 0.9;
	s.dl_y = 0.0;
	s.gl_x = 0.95;
	s.gl_y = 0.2;
	s.gd_x = 1.15;
	s.gd_y = 0.2;
	s.boja[0] = 0.0;
	s.boja[1] = 1.0;
	s.boja[2] = 0.0;
	
	// svako teme ce im
// s.boja_gd[0] = 0;
// s.boja_gd[1] = 0;
// s.boja_gd[2] = 0;
//                
// s.boja_gl[0] = 0;
// s.boja_gl[1] = 0;
// s.boja_gl[2] = 0;
//                
// s.boja_dd[0] = 0;
// s.boja_dd[1] = 0;
// s.boja_dd[2] = 0;
//                
// s.boja_dl[0] = 0;
// s.boja_dl[1] = 0;
// s.boja_dl[2] = 0;
// 	
	
	
}

void dovedi_stop1(){
	s.dd_x = s.dd_x - 0.0035;
	s.dd_y = s.dd_y - 0.0025;
	s.dl_x = s.dl_x - 0.0035;
	s.dl_y = s.dl_y - 0.0025;
	s.gl_x = s.gl_x - 0.0035;
	s.gl_y = s.gl_y - 0.0025;
	s.gd_x = s.gd_x - 0.0035;
	s.gd_y = s.gd_y - 0.0025;
}

void dovedi_stop2(){
	
	s.dd_y = s.dd_y - 0.002;
	s.dl_y = s.dl_y - 0.002;
	s.gd_y = s.gd_y - 0.002;
	s.gl_y = s.gl_y - 0.002;
	
}


void oteraj_stop(){
	s.dd_x = s.dd_x - 0.005;
	s.dd_y = s.dd_y - 0.005;
	s.dl_x = s.dl_x - 0.005;
	s.dl_y = s.dl_y - 0.005;
	s.gl_x = s.gl_x - 0.005;
	s.gl_y = s.gl_y - 0.005;
	s.gd_x = s.gd_x - 0.005;
	s.gd_y = s.gd_y - 0.005;
}
