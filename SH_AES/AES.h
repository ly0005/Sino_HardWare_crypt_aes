#ifndef __AES_H
#define __AES_H

#ifdef __cplusplus
extern "C"
{
#endif
#include <stdint.h>

extern void aes(uint8_t *plaintext, uint8_t plen, uint8_t *key);
extern void deAes(uint8_t *ciphertext, uint8_t clen, uint8_t *key);

#ifdef __cplusplus
}
#endif

#endif /*__SH30F9XX_SA0_LIBCFG_H */