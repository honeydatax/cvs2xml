#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void data(){
	char *a="						<Data ss:Type=\"String\">";
	printf ("%s",a);
}
void enddata(){
	char *a="</Data>";
	printf ("%s\n",a);
}
void cell(){
	char *a="					<Cell>";
	printf ("%s\n",a);
}
void endcell(){
	char *a="					</Cell>";
	printf ("%s\n",a);
}
void row(){
	char *a="				<Row ss:Height=\"12,8126\">";
	printf ("%s\n",a);
}
void endrow(){
	char *a="				</Row>";
	printf ("%s\n",a);
}
void endtable(){
	char *a="			</Table>";
	char *b="			<x:WorksheetOptions/>";
	printf ("%s\n",a);
	printf ("%s\n",b);
}
void table(){
	char *a="			<Table>";
	printf ("%s\n",a);


}
void worksheet(){
	char *a="		<ss:Worksheet>";
	printf ("%s\n",a);
}
void endworksheet(){
	char *a="		</ss:Worksheet>";
	printf ("%s\n",a);
}

void types(){
	char *a="	<?mso-application progid=\"Excel.Sheet\"?>";
	char *b="	<Workbook xmlns=\"urn:schemas-microsoft-com:office:spreadsheet\" xmlns:c=\"urn:schemas-microsoft-com:office:component:spreadsheet\" xmlns:html=\"http://www.w3.org/TR/REC-html40\" xmlns:o=\"urn:schemas-microsoft-com:office:office\" xmlns:ss=\"urn:schemas-microsoft-com:office:spreadsheet\" xmlns:x2=\"http://schemas.microsoft.com/office/excel/2003/xml\" xmlns:x=\"urn:schemas-microsoft-com:office:excel\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\">";
	printf ("%s\n",a);
	printf ("%s\n",b);

}
void endxml(){
	char *a="	</Workbook>";
	printf ("%s\n",a);
}
void xml(){
	char *a="<?xml version=\"1.0\" encoding=\"UTF-8\"?>";
	printf ("%s\n",a);
}

int main(int argc,char *argv[]){
	int n;
	char c[2080];
	char *cc;
	char *ccc;
	char *cccc;
	FILE *f;
	int r=0;
	if(argc>1){
		xml();
		types();
		worksheet();
		table();
		f=fopen(argv[1],"r");
		if (f!=NULL){
			while(feof(f)!=1){
				strcpy(c,"");
				fgets(c,2070,f);
				cc=strstr(c,"\n");
				if(cc!=NULL)cc[0]=0;
				cc=strstr(c,"\r");
				if(cc!=NULL)cc[0]=0;
				r=0;
				row();
				ccc=c;
				while(r!=1){
					cc=strstr(ccc,",");
					if(cc!=NULL){
						cccc=cc+1;
						cc[0]=0;
					}else{
						r=1;
					}
						cell();
						data();
						printf ("%s",ccc);
						enddata();
						endcell();
						ccc=cccc;
				}
				endrow();
			}
		}
		endtable();
		endworksheet();
		endxml();
	}else{
		return 1;
	}
	return 0;
}