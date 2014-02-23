#include "common.h"


int main (int argc, const char *argv[])
{
    FILE *source_file;
    char source_name[MAX_FILE_NAME_LENGTH];
    char date[DATE_STRING_LENGTH];
    char firstline[80];

   /* Missing Code Here */ 
   
   //source_file=fopen(argv[1],"r");
   //fgets(firstline,80,source_file);
   //puts(firstline);

   source_file=init_lister(argv[1],source_name,date);
      


return 0;
}
FILE *init_lister(const char *name, char source_file_name[], char dte[])
{
    time_t timer;

    FILE *file;
    
    /* Missing Code Here*/
   //*source_file_name=name;
   strcpy(source_file_name,name);
    file=fopen(name,"r");
   // time(&timer);
   // *dte=timer;    


    return file;
}
BOOLEAN get_source_line(FILE *src_file, char src_name[], char todays_date[])
{
    char print_buffer[MAX_SOURCE_LINE_LENGTH + 9];
    char source_buffer[MAX_SOURCE_LINE_LENGTH];
    static int line_number = 0;
    
    if (1) //This is missing a condition
    {
		/*  Missing Code Here */
        return (TRUE);
    }
    else
    {
        return (FALSE);
    }
}

