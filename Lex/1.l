
%{
%}
%%
is|am|are|were|was|be|being|been|do|does|did|will|would|should|can|could|has|have|had|go {
	printf("%s is a verb.\n", yytext);
}
. ;
%%
int yywrap(void){};
int main(){
	yylex();
	return 0;
}