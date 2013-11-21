#pragma once
#include <string>
#include <vector>
#include <map>

namespace Json {
    using namespace std;

    enum JType {
        jnull, jnumber, jboolean,
        jobject, jarray, jstring,
    };
    const wstring JName[] = {
        L"null", L"number", L"boolean",
        L"object", L"array", L"string",
    };
    enum JBoolean { jfalse, jtrue };

    const int JSpace[] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    const char JConvert[] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 34,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47,0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92,0, 0, 0, 0, 0, 8, 0, 0, 0, 12,0, 0, 0, 0, 0,
        0, 0, 10,0, 0, 0, 13,0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    const int JHexToDec[] = {
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1,  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 10, 11, 12,
        13, 14, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

    class JObject;
    typedef map<wstring, JObject>::iterator JIterator;

    class JTypeException {
    public:
        JTypeException(JType need, JType type) :
            _need(need), _type(type) { }
        JType _need;
        JType _type;
    };

    class JParseException {
    public:
        JParseException(size_t pos) :
            _pos(pos) { }
        size_t _pos;
    };

    class JKeyNotFoundException { };
    class JOutOfRangeException  { };
    class JInvalidOperationException { };

    class JObject {
        void CheckType(JType need) const {
            JType type = GetType();
            if (type != need) throw JTypeException(need, type);
        }

        friend class map<wstring, JObject>; 
    public:
        JObject(JType type = jnull) {
            _data = AllocJson(type);
        }

        JObject(const wstring& text) {
            _data = AllocString();
            *_data->_string = text;
        }

        JObject(double number) {
            _data = AllocNormal(jnumber);
            _data->_number = number;
        }

        JObject(JBoolean jbool) {
            _data = AllocNormal(jboolean);
            _data->_boolean = jbool == jtrue ? true : false;
        }

        JObject(const JObject& copy) {
            _data = copy._data;
            _data->AddReference();
        }

        JObject& operator=(const JObject& copy) {
            copy._data->AddReference();
            _data->DecReference();
            _data = copy._data;
            return *this;
        }

        JObject& operator=(const wstring& text) {
            if (_data->_ref != 1 || _data->_type != jstring) {
                _data->DecReference();
                _data = AllocString();
            }
            *_data->_string = text;
            return *this;
        }

        JObject& operator=(double number) {
            if (_data->_ref == 1 && _data->_type <= jboolean) {
                _data->_type = jnumber;
            } else {
                _data->DecReference();
                _data = AllocNormal(jnumber);
            }
            _data->_number = number;
            return *this;
        }

        JObject& operator=(JBoolean jbool) {
            if (_data->_ref == 1 && _data->_type <= jboolean) {
                _data->_type = jboolean;
            } else {
                _data->DecReference();
                _data = AllocNormal(jboolean);
            }
            _data->_boolean = jbool == jtrue ? true : false;
            return *this;
        }

        ~JObject() { _data->DecReference(); }
        
        JType    GetType() const { return _data->_type; }
        operator wstring() const { return ToString(); }
        operator double()  const { return ToNumber(); }
        operator bool()    const { return ToBoolean(); }

        //Table Operations
        bool Exists(const wstring& key) const {
            CheckType(jobject);
            auto object = _data->_object;
            return object->find(key) != object->end();
        }

        void Insert(const wstring& key, const JObject& val) {
            CheckType(jobject);
            auto object = _data->_object;
            object->insert(std::make_pair(key, val));
        }

        void Remove(const wstring& key) {
            CheckType(jobject);
            _data->_object->erase(key);
        }

        void Clear() {
            JType type = GetType();
            if (type != jobject && type != jarray)
                throw JTypeException(jobject, type);

            if (type == jarray) {
                _data->_array->clear();
            } else {
                _data->_object->clear();
            }
        }

        JObject Find(const wstring& key) {
            CheckType(jobject);
            auto object = _data->_object;
            auto where  = object->find(key);
            if (where == object->end())
                throw JKeyNotFoundException();
            return where->second;
        }

        //无插入语义
        JObject operator[](const wstring& key) { return Find(key); }
        JObject operator[](const wchar_t* key) { return Find(key); }

        JIterator Begin() {
            CheckType(jobject);
            auto object = _data->_object;
            return object->begin();
        }

        JIterator End() {
            CheckType(jobject);
            auto object = _data->_object;
            return object->end();
        }
        //Array Operations
        size_t Count() const {
            CheckType(jarray);
            return _data->_array->size();
        }

        void Add(const JObject& obj) {
            CheckType(jarray);
            _data->_array->push_back(obj);
        }

        void Remove(size_t pos) {
            CheckType(jarray);
            auto _array = _data->_array;
            if (pos < _array->size()) {
                _array->erase(_array->begin() + pos);
            }
        }

        void Insert(size_t pos, const JObject& obj) {
            CheckType(jarray);
            auto _array = _data->_array;
            if (pos <= _array->size()) {
                _array->insert(_array->begin() + pos, obj);
            } else {
                _data->_array->push_back(obj);
            }
        }

        JObject& operator[](size_t pos) {
            CheckType(jarray);
            auto _array = _data->_array;
            if (pos >= _array->size())
                throw JOutOfRangeException();
            return (*_array)[pos];
        }
        //Primitive Operations
        wstring ToString() const {
            CheckType(jstring);
            return *_data->_string;
        }

        double ToNumber() const {
            CheckType(jnumber);
            return _data->_number;
        }

        bool ToBoolean() const {
            CheckType(jboolean);
            return _data->_boolean;
        }
    protected:
        class  JObjectImplBase;
        static JObjectImplBase* AllocNormal(JType type) { return new JObjectImplBase(type); }
        static JObjectImplBase* AllocObject()           { return new JObjectImplObject;     }
        static JObjectImplBase* AllocArray()            { return new JObjectImplArray;      }
        static JObjectImplBase* AllocString()           { return new JObjectImplString;     }

        static JObjectImplBase* AllocJson(JType type) {
            switch (type)
            {
            case jstring: return AllocString();
            case jobject: return AllocObject();
            case jarray:  return AllocArray();
            default: return AllocNormal(type);
            }
        }

        class JObjectImplBase {
        public:
            JObjectImplBase(JType type) {
                _ref  = 1;
                _type = type;
            }

            virtual ~JObjectImplBase() { }

            void AddReference() { _ref++; }
            void DecReference() {
                if (--_ref == 0)
                    delete this;
            }

            JType _type;
            int   _ref;
            union
            {
                map<wstring, JObject>* _object;
                vector<JObject>*       _array;
                wstring*               _string;
                double                 _number;
                bool                   _boolean;
            };
        };

        class JObjectImplArray : public JObjectImplBase {
        public:
            JObjectImplArray() : JObjectImplBase(jarray) {
                _array = &_arrayPart;
            }
            vector<JObject> _arrayPart;
        };

        class JObjectImplObject: public JObjectImplBase {
        public:
            JObjectImplObject() : JObjectImplBase(jobject) {
                _object = &_objectPart;
            }
            map<wstring, JObject> _objectPart; 
        };

        class JObjectImplString : public JObjectImplBase {
        public:
            JObjectImplString() : JObjectImplBase(jstring) {
                _string = &_stringPart;
            }
            wstring _stringPart;
        };
        
        JObjectImplBase* _data;
    public:
        inline bool IsObejct()    const { return GetType() == jobject; }
        inline bool IsArray()     const { return GetType() == jarray;  }
        inline bool IsNumber()    const { return GetType() == jnumber; }
        inline bool IsString()    const { return GetType() == jstring; }
        inline bool IsNull()      const { return GetType() == jnull; }
        inline bool IsBoolean()   const { return GetType() == jboolean; }
    public:
        static JObject& Null() {
            static JObject _null;
            return _null;
        }

        static string Serialize(const JObject& obj) {
            string text;
            text.reserve(1000000); //bigjson accelerator
            SerializeJson(text, obj);
            return text;
        }

        static JObject Deserialize(const string& text) {
            size_t  pos = 0;
            JObject obj = DeserializeJson(text, pos);
            Forward(text, pos);
            if (text[pos] != '\0') throw JParseException(pos);
            return obj;
        }
    protected:
        static void SerializeJson(string& text, const JObject& obj) {
            switch (obj.GetType()) {
            case jobject:  SerializeObject(text, obj);  break;
            case jarray:   SerializeArray(text, obj);   break;
            case jstring:  SerializeString(text, obj);  break;
            case jnumber:  SerializeNumber(text, obj);  break;
            case jboolean: text.append(obj._data->_boolean ? "true" : "false"); break;
            case jnull:    text.append("null"); break;
            }
        }

        static void SerializeObject(string& text, const JObject& object) {
            auto table = object._data->_object;
            bool first = true;
            text.append("{");
            for (auto itr = table->begin(); itr != table->end(); itr++) {
                if (first) {
                    first = false;
                } else {
                    text.append(",");
                }
                text.append("\"");
                ConvertString(text, itr->first);
                text.append("\":");
                SerializeJson(text, itr->second);
            }
            text.append("}");
        }

        static void SerializeArray(string& text, const JObject& obj) {
            auto array = obj._data->_array;
            bool first = true;
            text.append("[");
            for (auto itr = array->begin(); itr != array->end(); itr++) {
                if (first) {
                    first = false;
                } else {
                    text.append(","); 
                }
                SerializeJson(text, *itr);
            }
            text.append("]");
        }

        static char ToHex(int val) {
            return val <= 9 ? '0' + val : 'a' + val - 10;
        }

        static void ConvertString(string& data,  const wstring& text) {
            for (size_t i = 0; i < text.size(); i++) {
                wchar_t ch = text[i];
                if (ch == L'/'  || ch == L'\\' ||
                    ch == L'\"' || ch == L'\b' ||
                    ch == L'\f' || ch == L'\n' ||
                    ch == L'\r' || ch == L'\t')
                {
                    data += '\\';
                    data += (char)ch;
                } else if (ch < 32 || ch > 126) {
                    data += "\\u";
                    data += ToHex(ch>>12);
                    data += ToHex((ch>>8)&15);
                    data += ToHex((ch>>4)&15);
                    data += ToHex(ch&15);
                } else {
                    data += (char)ch;
                }
            }
        }

        static void SerializeString(string& text, const JObject& obj) {
            text += "\"";
            ConvertString(text, obj.ToString());
            text += "\"";
        }

        static void SerializeNumber(string& text, const JObject& obj) {
            char buff[32];
            sprintf_s(buff, 30, "%g", obj.ToNumber());
            text += buff;
        }

        static void Forward(const string& text, size_t& pos) {
            while (JSpace[text[pos]])pos++;
        }

        static JObject DeserializeJson(const string& text, size_t& pos) {
            Forward(text, pos);
            if (text[pos] == '\0') throw JParseException(pos);
            switch (text[pos]) {
            case '{':
                return DeserializeObject(text, pos);
            case '[':
                return DeserializeArray(text, pos);
            case '\"':
                return DeserializeString(text, pos);
            case 't':
                {
                    if (text[pos]     == 't' &&
                        text[pos + 1] == 'r' &&
                        text[pos + 2] == 'u' &&
                        text[pos + 3] == 'e')
                    {
                        pos += 4;
                        return JObject(jtrue);
                    }
                    throw JParseException(pos);
                }
            case L'f':
                {
                    if (text[pos]     == 'f' &&
                        text[pos + 1] == 'a' &&
                        text[pos + 2] == 'l' &&
                        text[pos + 3] == 's' &&
                        text[pos + 3] == 'e')
                    {
                        pos += 5;
                        return JObject(jfalse);
                    }
                    throw JParseException(pos);
                }
            case L'n':
                {
                    if (text[pos]     == 'n' &&
                        text[pos + 1] == 'u' &&
                        text[pos + 2] == 'l' &&
                        text[pos + 3] == 'l')
                    {
                        pos += 4;
                        return Null();
                    }
                    throw JParseException(pos);
                }
            default:
                return DeserializeNumber(text, pos);
            }
        }

        static JObject DeserializeObject(const string& text, size_t& pos) {
            pos++;
            bool first = true;
            JObject object(jobject);
            for(;;) {
                Forward(text, pos);
                if (text[pos] == '}') {
                    pos++;
                    break;
                }

                if (first) {
                    first = false;
                } else {
                    if (text[pos] != ',') throw JParseException(pos);
                    Forward(text, ++pos);
                }

                if (text[pos] != '\"') throw JParseException(pos);
                wstring key = DeserializeString(text, pos);
                Forward(text, pos);
                if (text[pos] != ':') throw JParseException(pos);
                JObject val = DeserializeJson(text, ++pos);
                object.Insert(key, val);
            }
            return object;
        }

        static JObject DeserializeArray(const string& text, size_t& pos) {
            pos++;
            bool first = true;
            JObject array(jarray);
            for(;;) {
                Forward(text, pos);
                if (text[pos] == ']') {
                    pos++;
                    break;
                }

                if (first) {
                    first = false;
                } else {
                    if (text[pos] != ',') throw JParseException(pos);
                    pos++;
                }
                array.Add(DeserializeJson(text, pos));
            }
            return array;
        }

        static JObject DeserializeNumber(const string& text, size_t& pos) {
            size_t cursor = pos;
            if (text[cursor] == '+' || text[cursor] == '-')
                cursor++;

            bool n = false; //number
            bool d = false; //dot
            bool e = false; //e or E
            for (;;) {
                wchar_t ch = text[cursor];
                if (ch >= '0' && ch <= '9') {
                    n = true;
                    cursor++;
                } else if (ch == '.') {
                    if (d) break;
                    d = true;
                    cursor++;
                } else if (!e && (ch == 'e' || ch == 'E')) {
                    if (!n) throw JParseException(cursor);
                    n = false;
                    d = false;
                    e = true;
                    cursor++;

                    if (text[cursor] == '+' || text[cursor] == '-')
                        cursor++;
                } else {
                    break;
                }
            }
            if (!n) throw JParseException(cursor);
            char* data = (char*)text.data();
            char  temp = data[cursor];
            data[cursor] = 0;
            double number = atof(data + pos);
            data[cursor] = temp;
            pos = cursor;
            return number;
        }
        
        static wchar_t GetUnicode(const string& data, size_t pos) {
            int a, b, c, d;
            if ((a = JHexToDec[data[pos]]) == -1 ||
                (b = JHexToDec[data[pos + 1]]) == -1 ||
                (c = JHexToDec[data[pos + 2]]) == -1 ||
                (d = JHexToDec[data[pos + 3]]) == -1) throw JParseException(pos);
            return (a<<12)|(b<<8)|(c<<4)|d;
        }

        static wstring DeserializeString(const string& text, size_t& pos) {
            wstring buff;
            for (char ch = text[++pos]; ch != '\"' && ch != '\0'; ch = text[++pos]) {
                if (ch == '\\') {
                    char next = text[++pos];
                    char conv = JConvert[next];
                    if (conv > 0) {
                        buff += conv;
                    } else if(next == 'u') {
                        buff += GetUnicode(text, pos + 1);
                        pos += 4;
                    } else {
                        throw JParseException(pos);
                    }
                } else {
                    buff += ch;
                }
            }
            if (text[pos] != '\"') throw JParseException(pos);
            pos++;
            return buff;
        }
    };
}
