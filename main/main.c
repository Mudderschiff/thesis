#include "mod_math.h"
#include "freertos/task.h"
#include "freertos/FreeRTOS.h"

void app_main(void) {
    mp_int seckey, pubkey;
    mp_init_multi(&seckey, &pubkey, NULL, NULL, NULL, NULL);
    //rand_q(&seckey);
    g_pow_p(&seckey, &pubkey);
    //make_schnorr_proof(&seckey, &pubkey);
    //g_pow_p(&seckey, &pubkey);
    
    //Clear
    mp_clear(&seckey);
    mp_clear(&pubkey);
}