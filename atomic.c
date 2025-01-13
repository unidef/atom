#include "atomic.h"


void *atomic_set_data(struct atom *Atom, char atom_element[500], int atomicNumber, int atomic_mass, char atomic_symbol[50], double proton, double neutron, int electrons){
  strcpy(Atom->atomic_element, atom_element);
  strcpy(Atom->atomic_symbol, atomic_symbol);
  Atom->Electrons->rings = electrons;
  Atom->Nucleus->neutron = neutron;
  Atom->Nucleus->proton = proton;
}

void *atomic_get_atomic_mass(struct atom *src, struct atom *dst){
  dst->relative_mass_number = src->Nucleus->proton + src->Nucleus->neutron;
}

void *atomic_set_atomic_number(struct atom *src, struct atom *dst){
  dst->atomic_number = src->Nucleus->proton;
}
