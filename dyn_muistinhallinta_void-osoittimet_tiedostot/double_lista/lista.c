#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

DblSolmu * ds_luo(double data, DblSolmu *seur)
{
  DblSolmu *ds = malloc(sizeof(DblSolmu));
  ds->data = data;
  ds->seur = seur;
  return ds;
}

DblLista * dl_luo(void)
{
  DblLista *dl = malloc(sizeof(DblLista));
  dl->n = 0;
  dl->paa = NULL;
  return dl;
}

void dl_tuhoa(DblLista *dl)
{
  while(dl->n > 0)
  {
    dl_poistaEdesta(dl);
  }
  free(dl);
}

DblSolmu * dl_lisaaEteen(DblLista *dl, double arvo)
{
  dl->paa = ds_luo(arvo, dl->paa);
  dl->n += 1;
  return dl->paa;
}

double dl_poistaEdesta(DblLista *dl)
{
  double arvo = 0;
  if(dl->n > 0)
  {
    DblSolmu *vanhaPaa = dl->paa;
    arvo = dl->paa->data;
    dl->paa = dl->paa->seur;
    free(vanhaPaa);
    dl->n -= 1;
  }
  return arvo;
}

void dl_tulosta(const DblLista *lista)
{
  DblSolmu *s;
  printf("Lista:");
  for(s = lista->paa; s != NULL; s = s->seur)
  {
    printf(" %.1f", s->data);
  }
  printf("\n");
}


double dl_alkio(const DblLista *lista,size_t i)
{
	size_t j;
	DblSolmu *nodeptr = lista->paa;
	j = 0;
	while (nodeptr != NULL){
		if (j == i)
			return nodeptr->data;
		j++;
		nodeptr = nodeptr->seur;
	}
	return 0;
}

DblSolmu * dl_lisaa(DblLista *lista, size_t i, double arvo)
{
	size_t j;
	DblSolmu *new_node = NULL;
	DblSolmu *prev = NULL;

	DblSolmu *nodeptr = lista->paa;

	if (i == 0){
		new_node = dl_lisaaEteen(lista,arvo);
	}
	else if (i >= lista->n){
		/* lisää loppuun */
		new_node = ds_luo(arvo, NULL);
		while (nodeptr->seur != NULL)
			nodeptr = nodeptr->seur;
		nodeptr->seur = new_node;
		lista->n++;
	} else {
		j = 0;
		while (nodeptr != NULL){
			if (j == i){
				new_node = ds_luo(arvo,nodeptr);
				if (j == 0)
					lista->paa = new_node;
				else
					prev->seur = new_node;
			}
			j++;
			prev = nodeptr;
			nodeptr = nodeptr->seur;
		}
		lista->n++;
	}
	return new_node;
}

double dl_poista(DblLista *lista,size_t i)
{
	double poistettava_arvo;
	DblSolmu *rm_node;
	size_t j;
	DblSolmu *prev = NULL;
	DblSolmu *nodeptr = lista->paa;
	if (i == 0)
		return dl_poistaEdesta(lista);
	else {
		j = 0;
		while (nodeptr != NULL){
			if (j == i){
				poistettava_arvo = nodeptr->data;
				rm_node = nodeptr;
				prev->seur = nodeptr->seur;
				free(rm_node);
				lista->n--;
				return poistettava_arvo;

			}
			prev = nodeptr;
			nodeptr = nodeptr->seur;
			j++;
		}
	}
	return 0;
}

