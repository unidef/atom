#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



struct electrons {
  int rings;
  int charge;
};

struct nucleus {
  double proton;
  double neutron;
};

struct atom {
  int atomic_number;
  char atomic_element[65000];
  char atomic_symbol[50];
  double relative_mass_number;
  int atomic_charge;
  struct electrons *Electrons;
  struct nucleus *Nucleus;
  struct isotope *Isotope;
};

struct isotopes {
  int atomic_is_isotope;
  struct atom *isotope;
};
