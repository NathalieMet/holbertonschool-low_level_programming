#ifndef bibli_file_io
#define bibli_file_io

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
