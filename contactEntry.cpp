#include "contactEntry.h"

contactEntry::contactEntry() {
}

contactEntry::contactEntry(sql::SQLString f, sql::SQLString l, sql::SQLString p, sql::SQLString e, sql::SQLString a,sql::SQLString t, sql::SQLString I) {
    first = f;
    last = l;
    phone = p;
    email = e;
    age = a;
    type = t;
    ID=I;
}

string contactEntry::text() {
	string result = ID + ". ";
	result += first + " ";
	result += last + " ";
	result += phone + " ";
	result += email + " ";
	result += age + " ";
	result += type;
	return result;

}

string contactEntry::json() {
	string result = "{\"ID\":\"" + ID + "\",";
	result += "\"first\":\"" + first + "\",";
	result += "\"last\":\"" + last + "\",";
	result += "\"phone\":\"" + phone + "\",";
	result += "\"email\":\"" + email + "\",";
	result += "\"age\":\"" + age + "\",";
	result += "\"type\":\"" + type + "\"}";
	return result;

}
