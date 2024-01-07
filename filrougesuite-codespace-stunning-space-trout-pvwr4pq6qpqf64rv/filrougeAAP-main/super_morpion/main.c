#include <stdio.h>
#include <stdlib.h>

#include "../morpion_simple/posGraph.h"
#include "../morpion_simple/morpion.h"
#include "../morpion_simple/gestionGraph.h"
#include "../morpion_simple/minimax.h"

#include "posGraphUtimate.h"
#include "morpion_to_S.h"
#include "gestionGraphUltimate.h"

int main(){
    posGraphUltimate position;
    position.joueur = 'o'; // Il faut initialisé le joueur qui commence (à automatiser)
    position.morpion[0] = newPosition("xo7",'o');
    position.morpion[1] = newPosition("2ox5",'o');
    position.morpion[2] = newPosition("o7o",'o');
    position.morpion[3] = newPosition("xo3o3",'o');
    position.morpion[4] = newPosition("xx5o1",'o');
    position.morpion[5] = newPosition("4x4",'o');
    position.morpion[6] = newPosition("oxx6",'o');
    position.morpion[7] = newPosition("o5o2",'o');
    position.morpion[8] = newPosition("8x",'o');


    position.morpion[9] = newPosition("9",'o');
    
    GameUltimate(position);

    //int coup_a_jouer[2];
    //position.joueur = 'x';
    //evaluation(position,7, 2,1, coup_a_jouer);

    //printf("%d %d",coup_a_jouer[0],coup_a_jouer[1]);

}