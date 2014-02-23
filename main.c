#include "common.h"


int main (int argc, const char *argv[])
{
    FILE *source_file;
    char source_name[MAX_FILE_NAME_LENGTH];
    char date[DATE_STRING_LENGTH];
    char firstline[80];
    BOOLEAN notEndOfFile;

   /* Missing Code Here */ 
   
   //source_file=fopen(argv[1],"r");
   //fgets(firstline,80,source_file);
   //puts(firstline);

   source_file=init_lister(argv[1],source_name,date);
   
   do{

   notEndOfFile=get_source_line(source_file,source_name,date);

   }while(notEndOfFile==TRUE);


return 0;
}
FILE *init_lister(const char *name, char source_file_name[], char dte[])
{
    time_t timer;

    FILE *file;
    
    /* Missing Code Here*/
   //*source_file_name=name;
     file=fopen(name,"r");
   

    if(file==NULL){ perror ("File loading returned NULL, did you specify a file"); }
    

   strcpy(source_file_name,name);
   dte=ctime(&timer);
       


    return file;
}
BOOLEAN get_source_line(FILE *src_file, char src_name[], char todays_date[])
{
    char print_buffer[MAX_SOURCE_LINE_LENGTH + 9];
    char source_buffer[MAX_SOURCE_LINE_LENGTH];
    static int line_number = 0;
    int eofresult=1;

    eofresult= feof(src_file);

    if (eofresult==0)
    {
     fgets(source_buffer,80,src_file);	/*  Missing Code Here */
     puts(source_buffer);

   return (TRUE);
    }
    else
    {
        return (FALSE);
    }
}

