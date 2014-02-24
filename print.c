#include "common.h"

//Mike Burgett
//Daniel Wong
//Adam Miller
//CSE220 Lab 2 Phase 2

static void print_page_header(char source_name[], char date[]);

void print_line(char line[], char source_name_to_print[], char date_to_print[])
{
    char save_ch;
    char *save_chp = NULL;
    static int line_count = MAX_LINES_PER_PAGE;
    
    if (++line_count > MAX_LINES_PER_PAGE) //checks for new page
    {
        print_page_header(source_name_to_print, date_to_print);
        line_count = 1;
    }
    if (strlen(line) > MAX_PRINT_LINE_LENGTH) //truncates line if needed
    {
        line[81] = '\0';
    }
    printf("%s", line);
    if (save_chp)
    {
        /* Missing Code Here */
    }
    /* Missing Code Here */
    if (save_chp)
    {
        /* Missing Code Here */
    }
}
static void print_page_header(char source_name[], char date[])
{
    static int page_number = 0;
    
    page_number++;
    printf("Page\t%d\t%s\t%s\n\n", page_number, source_name,date);
}
