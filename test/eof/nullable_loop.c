/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i
#include <assert.h>
#include <string.h>



int lex1(const char *s)
{
    const char *YYCURSOR = s, *YYLIMIT = s + strlen(s), *YYMARKER;
    do {
    
{
	char yych;
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	default:
		if (YYLIMIT <= YYCURSOR) goto yy7;
		goto yy2;
	}
yy2:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	default:
		if (YYLIMIT <= YYCURSOR) goto yy8;
		goto yy2;
	}
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':	goto yy4;
	default:
		if (YYLIMIT <= YYCURSOR) goto yy6;
		goto yy2;
	}
yy6:
	{ continue; }
yy7:
	{ return 0; }
yy8:
	YYCURSOR = YYMARKER;
	goto yy6;
}

    } while (1);
}

int lex2(const char *s)
{
    const char *YYCURSOR = s, *YYLIMIT = s + strlen(s), *YYMARKER;
    do {
    
{
	char yych;
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy11;
	case 'a':	goto yy14;
	default:
		if (YYLIMIT <= YYCURSOR) goto yy17;
		goto yy12;
	}
yy11:
	YYCURSOR = YYMARKER;
	goto yy16;
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\n':	goto yy11;
	case 'a':	goto yy14;
	default:
		if (YYLIMIT <= YYCURSOR) goto yy11;
		goto yy12;
	}
yy14:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy14;
	default:
		if (YYLIMIT <= YYCURSOR) goto yy16;
		goto yy12;
	}
yy16:
	{ continue; }
yy17:
	{ return 0; }
}

    } while (1);
}

int lex3(const char *s)
{
    const char *YYCURSOR = s, *YYLIMIT = s + strlen(s), *YYMARKER;
    do {
    
{
	char yych;
	unsigned int yyaccept = 0;
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy22;
	case 'a':	goto yy23;
	default:
		if (YYLIMIT <= YYCURSOR) goto yy29;
		goto yy20;
	}
yy20:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x00:
		if (YYLIMIT <= YYCURSOR) goto yy21;
		goto yy26;
	case '\n':	goto yy21;
	default:	goto yy27;
	}
yy21:
	{ return 1; }
yy22:
	++YYCURSOR;
	goto yy21;
yy23:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\n':	goto yy25;
	case 'a':	goto yy23;
	default:
		if (YYLIMIT <= YYCURSOR) goto yy25;
		goto yy26;
	}
yy25:
	{ continue; }
yy26:
	yych = *++YYCURSOR;
yy27:
	switch (yych) {
	case '\n':	goto yy28;
	case 'a':	goto yy23;
	default:
		if (YYLIMIT <= YYCURSOR) goto yy28;
		goto yy26;
	}
yy28:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy21;
	} else {
		goto yy25;
	}
yy29:
	{ return 0; }
}

    } while (1);
}

int lex4(const char *s)
{
    const char *YYCURSOR = s, *YYLIMIT = s + strlen(s), *YYMARKER;
    do {
    
{
	char yych;
	unsigned int yyaccept = 0;
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case '\n':	goto yy32;
	case 'a':	goto yy36;
	default:
		if (YYLIMIT <= YYCURSOR) goto yy39;
		goto yy33;
	}
yy32:
	{ return 1; }
yy33:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\n':	goto yy35;
	case 'a':	goto yy36;
	default:
		if (YYLIMIT <= YYCURSOR) goto yy35;
		goto yy33;
	}
yy35:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy32;
	} else {
		goto yy38;
	}
yy36:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\n':	goto yy38;
	case 'a':	goto yy36;
	default:
		if (YYLIMIT <= YYCURSOR) goto yy38;
		goto yy33;
	}
yy38:
	{ continue; }
yy39:
	{ return 0; }
}

    } while (1);
}

int lex5(const char *s)
{
    const char *YYCURSOR = s, *YYLIMIT = s + strlen(s), *YYMARKER;
    do {
    
{
	char yych;
	unsigned int yyaccept = 0;
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy44;
	case 'a':	goto yy45;
	default:
		if (YYLIMIT <= YYCURSOR) goto yy51;
		goto yy42;
	}
yy42:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x00:
		if (YYLIMIT <= YYCURSOR) goto yy43;
		goto yy48;
	case '\n':	goto yy43;
	default:	goto yy49;
	}
yy43:
	{ return 2; }
yy44:
	++YYCURSOR;
	goto yy43;
yy45:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\n':	goto yy47;
	case 'a':	goto yy45;
	default:
		if (YYLIMIT <= YYCURSOR) goto yy47;
		goto yy48;
	}
yy47:
	{ continue; }
yy48:
	yych = *++YYCURSOR;
yy49:
	switch (yych) {
	case '\n':	goto yy50;
	case 'a':	goto yy45;
	default:
		if (YYLIMIT <= YYCURSOR) goto yy50;
		goto yy48;
	}
yy50:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy43;
	} else {
		goto yy47;
	}
yy51:
	{ return 0; }
}

    } while (1);
}

int main()
{
    assert(lex1("") == 0);
    assert(lex1("a") == 0);

    assert(lex2("") == 0);
    assert(lex2("a") == 0);

    assert(lex3("") == 0);
    assert(lex3("a") == 0);
    assert(lex3("a\n") == 1);
    assert(lex3("b") == 1);

    assert(lex4("") == 0);
    assert(lex4("a") == 0);
    assert(lex4("a\n") == 1);
    assert(lex4("b") == 1);

    assert(lex5("") == 0);
    assert(lex5("a") == 0);
    assert(lex5("a\n") == 2);
    assert(lex5("b") == 2);

    return 0;
}
eof/nullable_loop.re:20:6: warning: control flow is undefined for strings that match '[\x0-\x60\x62-\xFF]', use default rule '*' [-Wundefined-control-flow]
eof/nullable_loop.re:31:6: warning: control flow is undefined for strings that match 
	'[\x0-\x9\xB-\x60\x62-\xFF]'
	'\xA'
, use default rule '*' [-Wundefined-control-flow]
