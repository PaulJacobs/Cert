
int conv (char *i55_ptr, int longueur, char *seg_out, char *orig)
{

 char w_type_rech[2];
 int rc;

 memcpy(w_type_rech, "\x9F\x1A", 2);

 rc=recherche_dans_chp55(i55_ptr, longueur, w_type_rech,
                            seg_out, orig);
                            
 return rc;

}

