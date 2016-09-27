//
//  ProjetTri.c
//  Tri
//
//  Created by Anthony Bertrant on 21/09/2016.
//  Copyright © 2016 AnthonyBertrant_BriceMaussang. All rights reserved.
//
#include <stdlib.h>
#include "ExecuteBenchmark.h"
#include "TriRapide.h"
#include "TriInsertSeq.h"
#include "TriInsertDicho.h"
#include "TriSelecPerm.h"
#include "TriBulles.h"
#include "TriFusion.h"
#include "TriArbreBin.h"
#include "TriTas.h"

#define MAX 1000000
typedef int TABLEAU[MAX];

int main()
{
    int t[17] = {10, 100, 102, 109, 300, 3, 4, 5,6, 8, 307, 29, 30, 847, 32, 1, 9};
    TriRapide(t, 0, 16);
    
    for(int i = 0; i < 17; ++i){
        printf("%d \n", t[i]);
    }
	return(0);
}
