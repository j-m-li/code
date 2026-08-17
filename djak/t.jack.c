#define main___DsizeD 0
#define main___DcidD 11
var main__main();
static char __strings_main1[]="Hello";
static var __string_main1[]={0,-2, 0,-1};
static void std__init_strings()
{
	__string_main1[2]=(var) __strings_main1;
}
/* class main */
var main__main()
{
	static var recursive = 0;
	var __return__ = 0;
	FAKETHIS();
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"main.main\"\n");std__panic();
	}
	console__log((var)(__string_main1+ 2));
	recursive--;
	return __return__;
}
