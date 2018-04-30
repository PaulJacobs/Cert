
short rsb_trai_msg_0800_V2()
{
   char  champ53_e[2*LEN_RSB_C53];

   *(champ53_e+2) = '5'; /* utilisat zone chiffree privee et
                                  du champ 128 */
   return 1;
} 


