#include "dateofbirth.h"
enum gender{male=0, female=1};

struct workers {
	char *familyname;
	char *name;
	char *lastname;
	gender sex;
	char *position;
	dateofbirth *date;
};
