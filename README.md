tinyjson
========
similar to jsoncpp.

sample:
JObject obj = JObject::Deserialize("{\"a\":5, \"b\":[8, \"x\"]}");
int a = obj[L"a"];
wstring x = obj[L"b"][1];

Input and output are ansi or utf8 string; but JObject use unicode string.


Not support:
JObject obj(jobject);
obj[L"xx"] = 8;
but use:
obj.Insert(L"xx", 8);
because i dont know how todo when this happens:
int x = obj[L"xx"]; //but xx not exists.

if you find bugs or can improve it, please emal to me: fenix124@163.com



