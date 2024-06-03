#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int offset = 0; //global int updates every new line of 10 bytes
/* prints a line of 10 bytes (max) in hex with a space between each byte */
void print_bytes_hex(unsigned char *b, unsigned int nbytes){
  int i;
  printf("  %d   ",offset);
  offset+=10;//update to offset
  for(i=0;i<nbytes;i++){
    printf(" %x",b[i]);
  }
  while(i<10){
      printf("   ");
      i+=1;
    }
}


/* prints a line of 10 bytes (max) in as characters.
 * non-printable bytes are printed as the period character. */
void print_bytes_char(unsigned char *b, unsigned int nbytes)
{
  int i=0;
  printf("\t\t"); //tab space for the space between bytes and characters
  for(i=0;i<nbytes;i++){
      if(isprint(b[i])==0) //check if its is printable 
          printf(".");
      else
      printf("%c ",b[i]);
  }
  while(i<10){
      printf("   ");
      i+=1;
  }
  printf("\n");
}

int main()
{
    FILE *file;
    char str[255];
    int count=0;
    int i;
    char substr[11];
    char c;
    int x;
  printf("Offset              Bytes                   Characters\n");
  printf("------  -----------------------------       ----------\n");
// I edited the space between Bytes and characters here to make the print look nicer, hope thats ok
    file=fopen("ascii_chars.txt","r");//standard file reading stuff
    if(file==NULL)
    {
        printf("File Not Found");
    }
    do{
        c=fgetc(file);

        if(feof(file)){
          break;
          }
        str[count++]=c;

    }
    while(1);
    str[count]='\0';
    for(i=0;str[i]!='\0';i=i+10){ //loop thru sections of 10 at a time
        strncpy(substr,&str[i],10);
        substr[10]='\0';
        print_bytes_hex(substr,strlen(substr));
        print_bytes_char(substr,strlen(substr));
      if(strlen(substr)<10){
        break;
        }
    }
    return 0;

}