/* Generated by re2c */

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt2 = NULL;
		yyt1 = YYCURSOR;
		goto yy3;
	default:
		yyt1 = NULL;
		goto yy2;
	}
yy2:
	p = yyt1;
	{}
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt2 = yyt1;
		yyt1 = YYCURSOR;
		goto yy3;
	case 'b':	goto yy5;
	default:	goto yy2;
	}
yy5:
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy6;
	default:
		yyt1 = yyt2;
		goto yy2;
	}
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy5;
	default:	goto yy7;
	}
yy7:
	YYCURSOR = YYMARKER;
	yyt1 = yyt2;
	goto yy2;
}

re2c: warning: line 3: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 3: tag 'p' is nondeterministic [-Wnondeterministic-tags]
