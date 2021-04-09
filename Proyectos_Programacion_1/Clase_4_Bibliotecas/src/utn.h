/*
 * utn.h
 *
 *  Created on: 25 mar. 2021
 *      Author: laplu
 */

#ifndef UTN_H_
#define UTN_H_

int utn_getNumero(int *pResultado,char* pTexto,char* ptextoError, int min, int max, int reintentos); // INT
float utn_getNumeroFloat(float *pResultado,char* pTexto,char* ptextoError, float min, float max, int reintentos); // FLOAT
int utn_getChar(char * pResultado,char* pTexto,char* ptextoError, char min, char max, int reintentos);

#endif /* UTN_H_ */
