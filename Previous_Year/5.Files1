//Roll No. : 23307
//Batch    : E-11

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
 {
	FILE *fp,*fs,*fd;
	char c;

	if(argc==3 && !strcmp(argv[1],"TYPE"))
    {
		fp = fopen(argv[2], "r");

		if (fp == NULL)
		{
		   	printf("Cannot Open '%s'.", argv[2]);
		}
		else
		{
			printf("File Contents (%s) :\n", argv[2]);
			while ((c = getc(fp)) != EOF)
			{
				printf("%c",c);
			}
			fclose(fp);
		}
    }

	if(argc==4 && !strcmp(argv[1],"COPY"))
	{
		fs= fopen(argv[2],"r");
		fd= fopen(argv[3],"w");

		if((fs==NULL)||(fd==NULL))
		{
			printf("Cannot Open File.");
		}
		else
		{
			while((c=getc(fs))!=EOF)
			{
				putc(c,fd);
			}
			printf("File '%s' is Copied Successfully in File '%s'.",argv[2],argv[3]);
			fclose(fs);
			fclose(fd);
		}
	}

	return 0;
}
