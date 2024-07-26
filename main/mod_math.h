#ifndef MOD_MATH_H
#define MOD_MATH_H

#include <wolfssl/wolfcrypt/port/Espressif/esp32-crypt.h>

#include <wolfssl/wolfcrypt/integer.h>
#include <wolfssl/wolfcrypt/wolfmath.h>
#include <wolfssl/ssl.h>
#include "esp_log.h"
#include "esp_random.h"
#include "mod_math.h"


int mod_exp(mp_int *g, mp_int *x, mp_int *p, mp_int *y);
void print_mp_int(mp_int *num);
int g_pow_p(mp_int *seckey, mp_int *pubkey);
int rand_q(mp_int *result);
int hash(mp_int *a, mp_int *b, mp_int *result);
int make_schnorr_proof(mp_int *pubkey, mp_int *seckey);

#endif // MOD_MATH_H