// File I/O ---
// RAM is volatile and it's contents is lost once the program terminates.
// In order to persist the data we use files.
// A file is data stored in a storage device.

// Types of file ---
// there are teo major catagories
// 1. Text files e.g students.txt
// 2. Binary files e.g students.dat
// #include <stdio.h>

// int main(void)
// {
//     FILE *fp;
//     int age = 20;

//     fp = fopen("data.txt", "r");
//     // data.txt --- file ;"w" --- in which format to open it
//     // "r" --- read ;if the file is not found then fp == NULL
//     // "w" --- write ; old contents are normally erased
//     // "a" --- append ; add new data at the end

//     if (fp == NULL)
//     {
//         printf("File could not be opened.\n");
//         return 1;
//     }

//     // fprintf(fp,"Hello World!\n");
//     // fprintf(fp,"I am learning C File I/O.\n");

//     // printf("Age = %d\n", age);
//     // fprintf(fp, "Age = %d\n", age);

//     // fputc('A',fp);
//     // fputc('\n', fp);
//     // fputc('H', fp);
//     // fputc('i', fp);
//     // fputc('\n', fp);

//     // fputs("Konnichiwa\n",fp);

//     // char ch = fgetc(fp);
//     // while ((ch = fgetc(fp)) != EOF) //EOF = End of file
//     // {
//     //     putchar(ch);
//     // }

//     // char line[100];
//     // while(fgets(line,sizeof(line),fp) != NULL)
//     // {
//     //     printf("%s",line);
//     // }

//     int roll;
//     char name[50];
//     float marks;

//     fscanf(fp, "roll = %d name = %49s marks = %f",
//            &roll, name, &marks);

//     printf("Roll  = %d\n", roll);
//     printf("Name  = %s\n", name);
//     printf("Marks = %.1f\n", marks);

//     fclose(fp);
//     return 0;
// }

// File Position
// #include <stdio.h>

// int main(void)
// {
//     FILE *fp = fopen("data.txt","r");
//     fseek(fp,10,SEEK_SET); // Move to the begining
//     long position =ftell(fp); // tells the current position
//     printf("%ld\n",position);
//     rewind(fp);
//     position = ftell(fp);
//     printf("%ld",position);

//     fclose(fp);
//     return 0;
// }

//Error handling ---
// feof() -- for checking the ending of file 
// ferror() --- checking file errors