tinyjson
========
similar to jsoncpp. https://github.com/rboulton/jsoncpp

sample:
JObject obj = JObject::Deserialize("{\"a\":5, \"b\":[8, \"x\"]}");
int a = obj[L"a"];
wstring x = obj[L"b"][1];

Input and output are ansi or utf8 string; but JObject use unicode string.

Not support obj[L"xx"] = 8; but obj.Insert(L"xx", 8);

if you find bugs or have suggestions, please email me: fenix124@163.com


