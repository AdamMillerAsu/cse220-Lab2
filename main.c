#include "common.h"


int main (int argc, const char *argv[])
{
    FILE *source_file;
    char source_name[MAX_FILE_NAME_LENGTH];
    char date[DATE_STRING_LENGTH];
    char firstline[80];
    BOOLEAN notEndOfFile;

  
   source_file=init_lister(argv[1],source_name,date);
   //sets up the connection to the file

   do{

   notEndOfFile=get_source_line(source_file,source_name,date);
   //this is the main loop of the program, it runs till
   //it hits an end of file that will give us the exit case

   }while(notEndOfFile==TRUE);

fclose(source_file); //closes the file 

return 0;

}

FILE *init_lister(const char *name, char source_file_name[], char dte[])
{
    time_t timer;

    FILE *file;
    
    file=fopen(name,"r"); //opens the file in read only mode
    if(file==NULL){ perror ("File loading returned NULL, did you specify a file"); }
    //the above line checks for a NULL file. Prints the error if there is no argument

    strcpy(source_file_name,name); //copies the argv to the source_file array
    strcpy(dte,ctime(&timer)); 
     


    return file;
}
BOOLEAN get_source_line(FILE *src_file, char src_name[], char todays_date[])
{
    char print_buffer[MAX_SOURCE_LINE_LENGTH + 9];
    char source_buffer[MAX_SOURCE_LINE_LENGTH];
    static int line_number = 0;
    int eofresult=1;

    eofresult= feof(src_file); //checks for the end of file and saves result

    if (eofresult==0) //if it's not the end of the file continue
    {
     line_number++;
     fgets(source_buffer,80,src_file);
     
     //next 2 lines create the print buffer from the linenumber and sourcebuffer

     sprintf(print_buffer,"   %d:",line_number);
     sprintf(print_buffer+strlen(print_buffer),source_buffer);
     
     print_line(print_buffer,src_name,todays_date);
     

   return (TRUE);
    }
    else //if it's the end of the file return false and will cause program exit
    {
        return (FALSE);
    }
}

