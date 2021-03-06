#ifndef SET_H
#define SET_H

typedef struct snode {
	int elem;
	struct snode* next;
} snode, *symset;

symset phi, declbegsys, statbegsys, facbegsys, relset;
symset left_sym, block_status_set;//  block_predict_set, C_e_predict_set, block_predict_set; // ��ʱ��Ҫ�� block_status_set, 

symset createset(int data, .../* SYM_NULL */);
void destroyset(symset s);
symset uniteset(symset s1, symset s2);
int inset(int elem, symset s);
void printset(symset s);

#endif
// EOF set.h
