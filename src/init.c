/*
** init.c - initialize mruby core
**
** See Copyright Notice in mruby.h
*/

#include "mruby.h"
#include <printf.h>
#include <stdlib.h>
#include <string.h>
void mrb_init_symtbl(mrb_state*);
void mrb_init_class(mrb_state*);
void mrb_init_object(mrb_state*);
void mrb_init_kernel(mrb_state*);
void mrb_init_comparable(mrb_state*);
void mrb_init_enumerable(mrb_state*);
void mrb_init_symbol(mrb_state*);
void mrb_init_exception(mrb_state*);
void mrb_init_proc(mrb_state*);
void mrb_init_string(mrb_state*);
void mrb_init_array(mrb_state*);
void mrb_init_hash(mrb_state*);
void mrb_init_numeric(mrb_state*);
void mrb_init_range(mrb_state*);
void mrb_init_gc(mrb_state*);
void mrb_init_math(mrb_state*);
void mrb_init_version(mrb_state*);
void mrb_init_mrblib(mrb_state*);

#define DONE mrb_gc_arena_restore(mrb, 0);
void
mrb_init_core(mrb_state *mrb)
{
  fprintf(stderr,"mrb_init_core\n");
  mrb_init_symtbl(mrb); DONE;
  fprintf(stderr,"call mrb_init_symtbl\n");
  mrb_init_class(mrb); DONE;
  fprintf(stderr,"call mrb_init_class\n");
  mrb_init_object(mrb); DONE;
  fprintf(stderr,"call mrb_init_object\n");
  mrb_init_kernel(mrb); DONE;
  fprintf(stderr,"call mrb_init_kernel\n");
  mrb_init_comparable(mrb); DONE;
  fprintf(stderr,"call mrb_init_comparable\n");
  mrb_init_enumerable(mrb); DONE;
  fprintf(stderr,"call mrb_init_enumerable\n");

  mrb_init_symbol(mrb); DONE;
  fprintf(stderr,"call mrb_init_symbol\n");
  mrb_init_exception(mrb); DONE;
  fprintf(stderr,"call mrb_init_exception\n");
  mrb_init_proc(mrb); DONE;
  fprintf(stderr,"call mrb_init_proc\n");
  mrb_init_string(mrb); DONE;
  fprintf(stderr,"call mrb_init_string\n");
  mrb_init_array(mrb); DONE;
  fprintf(stderr,"call mrb_init_array\n");
  mrb_init_hash(mrb); DONE;
  fprintf(stderr,"call mrb_init_hash\n");
  mrb_init_numeric(mrb); DONE;
  fprintf(stderr,"call mrb_init_numeric\n");
  mrb_init_range(mrb); DONE;
  fprintf(stderr,"call mrb_init_range\n");
  mrb_init_gc(mrb); DONE;
  fprintf(stderr,"call mrb_init_gc\n");
  mrb_init_version(mrb); DONE;
  fprintf(stderr,"call mrb_init_version\n");
  mrb_init_mrblib(mrb); DONE;
  fprintf(stderr,"call mrb_init_mrblib\n");
}
