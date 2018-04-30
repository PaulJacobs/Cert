int cv_encapsul()
{
 char          mess_out[TAILLE_MESSAGE_MAXI];
 char          *p_mess_out;
 char          l055_cnv[2];



 p_mess_out = mess_out;
 
 memset(l055_cnv,'0',2);
 memcpy(p_mess_out, l055_cnv, sizeof(l055_cnv));

 return 0;
}

