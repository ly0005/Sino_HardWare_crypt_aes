#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
 


int main() 
{
    uint8_t plaintext[] = { 0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01 };
    uint8_t key[16]={ 0x3C,0xA1,0x0B,0x21,0x57,0xF0,0x19,0x16,0x90,0x2E,0x13,0x80,0xAC,0xC1,0x07,0xBD};
    uint8_t ciphertext[] = {}; 
    uint8_t decrypted_plaintext[] ={};
    // printf("请输入16个字符的密钥:\n");
    // scanf("%s", key);
    
    // while(1)
    // {
    //     //getString(key,17);
    //     //klen = strlen(key);
    //     if(klen != 16)
    //     {
    //         printf("请输入16个字符的密钥,当前密钥的长度为%d\n",klen);
    //     }
    //     else
    //     {
    //         printf("你输入的密钥为：%s\n",key);
    //         break;
    //     }
    // }
    // printf("请输入明文：");
    // scanf("%s", plaintext);
    uint8_t plaintextlen = sizeof(plaintext) / sizeof(plaintext[0]);
    //调用加密函数
    aes(plaintext, plaintextlen, key);//AES加密
    printf("加密密文: ");
    //klen = strlen(plaintext);

    //printASSCI(plaintext,plaintextlen);
    for (int i = 0; i < plaintextlen; i++) {
        printf("%02x ", ciphertext[i]);
    }
    printf("\n");
    //解密结果：明文
    //调用解密函数
    deAes(plaintext, plaintextlen, key);
    uint8_t ciphertextlen = sizeof(plaintext) / sizeof(plaintext[0]); 
    printf("解密明文: ");
    printf("\n");
    printf("debug密文长度: ");
    printf("%02x ",ciphertextlen);
    //printASSCI(ciphertext,ciphertextlen);
    for (int i = 0; i < ciphertextlen; i++) {
        //printASSCI();
        printf("%02x ", plaintext[i]);
    }
    printf("\n");
    return 0;
}
