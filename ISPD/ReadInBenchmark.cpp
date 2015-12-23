#include<iostream>
using namespace std;
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <fstream> 
#include <math.h>
#include"ReadInBenchmark.h"
#include"node.h"
#include"circuit.h"


void readPl(const char *filename) {
	char *tok;
	char buf[1024];
	const char *DELIMITERS = " \n\t:";
	
	char* node_name;
	int lowerleft_Xcoordinate;
	int lowerleft_Ycoordinate;
	char* movetype;

	node *nodes;

	FILE *plFile;
	fopen_s(&plFile,filename, "r");
	if (!plFile) {
		printf("ERROR: Could not open .pl file\n");
		exit(1);
	}

	//fscanf(plFile, "%*d %*d %d %d %d", &numnets, &numcells, &padoffset);

	// line 1 : version
	while (fgets(buf, 1024, plFile) && (buf[0] == '\n' || buf[0] == '#'));
	cout << &plFile << endl;
	
	// line XXX : placement definitions
	while (fgets(buf, 1024, plFile)) {
		if (buf[0] == '\n' || buf[0] == '#') continue;

//		tok = strtok(buf, DELIMITERS);

		/*
		// cell name
		cell = hash_find(hash_cellname, numCells, tok);
		if (!cell) {
			printf("ERROR: Could not find cell %s in .nodes file\n", tok);
			exit(1);
		}

		// position
		tok = strtok(NULL, DELIMITERS);
		cell->m_x = atof(tok);
		tok = strtok(NULL, DELIMITERS);
		cell->m_y = atof(tok);

		// hfixed
		cell->m_fixed = strtok(NULL, DELIMITERS) &&
			(tok = strtok(NULL, DELIMITERS)) &&
			!strcmp(tok, "\\FIXED");
	*/
	}
	
	fclose(plFile);

}