 
#ifndef __PROX2_H
#define __PROX2_H

#include "misc/cppwrap.h"

struct operator_p_s;
struct linop_s;
struct nlop_s;

extern const struct operator_p_s* prox_normaleq_create(const struct linop_s* op, const _Complex float* y);
extern const struct operator_p_s* prox_lineq_create(const struct linop_s* op, const _Complex float* y);
extern const struct operator_p_s* prox_nlgrad_create(const struct nlop_s* op, int steps, float lambda);
extern const struct operator_p_s* op_p_auto_normalize(const struct operator_p_s*, long flags);

#include "misc/cppwrap.h"

#endif
