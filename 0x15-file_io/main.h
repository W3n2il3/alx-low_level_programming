#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>


ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);

void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);
int main(int __attribute__((__unused__)) argc, char *argv[]);
void print_osabi(unsigned char *e_ident);
#endif

