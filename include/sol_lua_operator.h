#ifndef LUA_EXPRESSION_H
#define LUA_EXPRESSION_H
#include <stdint.h>
#include <string>
#include <memory>
#include <map>
#include <vector>
#include <sstream>
#include <sol/sol.hpp>
#define LUA_PROTECT_FUNC(obj,func) (sol::protected_function(obj[func]))
#define NULL_PTR            ((void*)nullptr)
#define NULL_STRING         ((char*)"")
#define NULL_NUMBER_VEC     std::vector<double>()
#define NULL_LUA_FUNCTION   sol::function()
#define NULL_LUA_TABLE      sol::table()

namespace sol {

enum NativeValueType : int32_t{
    kNumberValue,
    kNumberVectorValue,
    kStringValue,
    kStringVectorValue,
    kBoolValue,
    kPointerValue,
    kFunctionValue,
    kTableValue,
};

struct NativeValue{    
    NativeValue(){}
    NativeValue(double v,bool read_only = false){
        type_ = kNumberValue;
        read_only_ = read_only;
        number_value_ = v;
    }
    NativeValue(int v,bool read_only = false){
        type_ = kNumberValue;
        read_only_ = read_only;
        number_value_ = v;
    }
    NativeValue(int64_t v,bool read_only = false){
        type_ = kNumberValue;
        read_only_ = read_only;
        number_value_ = v;
    }
    NativeValue(bool v,bool read_only = false){
        type_ = kBoolValue;
        read_only_ = read_only;
        number_value_ = v;
    }
    NativeValue(void* v,bool read_only = false){
        type_ = kPointerValue;
        read_only_ = read_only;
        pointer_value_ = v;
    }
    NativeValue(const std::vector<double>& v,bool read_only = false){
        type_ = kNumberVectorValue;
        read_only_ = read_only;
        number_vector_ = v;
    }
    NativeValue(const std::vector<std::string>& v,bool read_only = false){
        type_ = kStringVectorValue;
        read_only_ = read_only;
        string_vector_ = v;
    }
    NativeValue(const std::string& v,bool read_only = false){
        type_ = kStringValue;
        read_only_ = read_only;
        string_value_ = v;
    }
    NativeValue(const char* v,bool read_only = false){
        type_ = kStringValue;
        read_only_ = read_only;
        string_value_ = v;
    }
    NativeValue(sol::function v,bool read_only = false){
        type_ = kFunctionValue;
        read_only_ = read_only;
        function_value_ = v;
    }
    NativeValue(sol::table v,bool read_only = false){
        type_ = kTableValue;
        read_only_ = read_only;
        table_value_ = v;
    }
    NativeValue(const NativeValue& v){
        type_ = v.type_;
        number_value_ = v.number_value_;
        number_vector_ = v.number_vector_;
        string_value_ = v.string_value_;
        function_value_ = v.function_value_;
        table_value_ = v.table_value_;
        value_changed_  = v.value_changed_;
        describe_ = v.describe_;
        read_only_ = v.read_only_;
    }

    void set_value(const sol::NativeValue &v)
    {
        if(type_ != v.type_)
            return;
        number_value_ = v.number_value_;
        number_vector_ = v.number_vector_;
        string_value_ = v.string_value_;
        function_value_ = v.function_value_;
        table_value_ = v.table_value_;
        value_changed_  = v.value_changed_;
        describe_ = v.describe_;
    }

    void from_double(double v){
        type_ = kNumberValue;
        value_changed_ = (number_value_ != v);
        number_value_ = v;
    }
    void from_bool(bool v){
        type_ = kBoolValue;
        value_changed_ = (((bool)number_value_) != v);
        number_value_ = (bool)v;
    }

    void from_vector(const std::vector<double>& v){
        type_ = kNumberVectorValue;
        //value_changed_ = (number_vector_ != v);
        value_changed_ = true;
        number_vector_ = v;
    }
    void from_vector(const std::vector<std::string>& v){
        type_ = kStringVectorValue;
        //value_changed_ = (string_vector_ != v);
        value_changed_ = true;
        string_vector_ = v;
    }
    void from_string(const std::string& v){
        type_ = kStringValue;
        value_changed_ = (string_value_ != v);
        string_value_ = v;
    }
    void from_pointer(void* v){
        type_ = kPointerValue;
        value_changed_ = (pointer_value_ != v);
        pointer_value_ = v;
    }
    void from_function(sol::function v){
        type_ = kFunctionValue;
        if(v.valid() && function_value_.valid())
            value_changed_ = sol::operator==(function_value_,v);
        else if(v.valid() != function_value_.valid())
            value_changed_ = true;
        else
            value_changed_ = false;
        if(value_changed_)
            function_value_ = v;
    }

    void from_function(sol::table v){
        type_ = kTableValue;
        if(v.valid() && function_value_.valid())
            value_changed_ = sol::operator==(table_value_,v);
        else if(v.valid() != table_value_.valid())
            value_changed_ = true;
        else
            value_changed_ = false;
        if(value_changed_)
            table_value_ = v;
    }

    void operator=(double v){
        from_double(v);
    }
    void operator=(int64_t v){
        from_double(v);
    }
    void operator=(int v){
        from_double(v);
    }
    void operator=(bool v){
        from_bool(v);
    }
    void operator=(const std::vector<double> v){
        from_vector(v);
    }
    void operator=(const std::vector<std::string> v){
        from_vector(v);
    }
    void operator=(const std::string& v){
        from_string(v);
    }
    void operator=(void* v){
        from_pointer(v);
    }
    void operator=(sol::function v){
        from_function(v);
    }
    void operator=(sol::table v){
        from_function(v);
    }
    void operator=(const sol::lua_value &value)
    {
        set_lua_value_with_check(value);
    }

    operator double(){
        return number_value_;
    }
    operator int(){
        return number_value_;
    }
    operator int64_t(){
        return number_value_;
    }
    operator bool(){
        return (bool)number_value_;
    }
    operator const std::vector<double>&(){
        return number_vector_;
    }
    operator const std::string&(){
        return string_value_;
    }
    operator const std::vector<std::string>&(){
        return string_vector_;
    }
    operator void* (){
        return pointer_value_;
    }
    operator sol::function(){
        return function_value_;
    }
    operator sol::table(){
        return table_value_;
    }

    int32_t set_lua_value_with_check(const sol::lua_value &value)
    {
        do{
            auto value_type = value.value().get_type();
            if(value_type == sol::type::number){
                if(type_ != kNumberValue)
                    break;
                *this = value.as<double>();
            }
            else if(value_type == sol::type::boolean){
                if(type_ != kBoolValue)
                    break;
                *this = value.as<bool>();
            }
            else if(value_type == sol::type::string){
                if(type_ != kStringValue)
                    break;
                *this = value.as<std::string>();
            }
            else if(value_type == sol::type::userdata || value_type == sol::type::lightuserdata){
                if(type_ != kPointerValue)
                    break;
                *this = value.as<void*>();
            }
            else if(value_type == sol::type::table){
                if(type_ != kNumberVectorValue && type_ != kStringVectorValue && type_ != kTableValue)
                    break;
                auto tb = value.as<sol::table>();

                if(tb.size()){
                    if(tb[0].is<double>()){
                        *this = tb.as<std::vector<double>>();
                    }
                    else if(tb[0].is<std::string>()){
                        *this = tb.as<std::vector<std::string>>();
                    }
                    else{
                        *this = tb;
                    }
                }
                break;
            }
            else if(value_type == sol::type::function){
                if(type_ != kFunctionValue)
                    break;
                *this = value.as<sol::function>();
            }
            else
                return -1;            
            return 0;
        }while (false);

        return -1;
    }

    int32_t create_from_lua_value(const sol::lua_value &value)
    {
        do{
            auto value_type = value.value().get_type();
            if(value_type == sol::type::number){
                *this = value.as<double>();
                return 0;
            }
            else if(value_type == sol::type::boolean){
                *this = value.as<bool>();
                return 0;
            }
            else if(value_type == sol::type::string){
                *this = value.as<std::string>();
                return 0;
            }
            else if(value_type == sol::type::userdata || value_type == sol::type::lightuserdata){
                *this = value.as<void*>();
                return 0;
            }
            else if(value_type == sol::type::table){
                auto tb = value.as<sol::table>();

                if(tb.size()){
                    if(tb[0].is<double>()){
                        *this = tb.as<std::vector<double>>();
                    }
                    else if(tb[0].is<std::string>()){
                        *this = tb.as<std::vector<std::string>>();
                    }
                    else{
                        *this = tb;
                    }
                }
                else{
                    *this = std::vector<double>();
                }
                return 0;
            }
            else if(value_type == sol::type::function){
                *this = value.as<sol::function>();
            }
        }while (false);

        return -1;
    }
    lua_value create_lua_value(const state& lua_state) const{
        switch (type_) {
        case kNumberValue:  return sol::lua_value(lua_state,number_value_);
        case kNumberVectorValue:  return sol::lua_value(lua_state,number_vector_);
        case kStringValue:  return sol::lua_value(lua_state,string_value_);
        case kStringVectorValue:  return sol::lua_value(lua_state,string_vector_);
        case kBoolValue:    return sol::lua_value(lua_state,number_value_!=0);
        case kPointerValue: return sol::lua_value(lua_state,pointer_value_);
        case kFunctionValue:return sol::lua_value(lua_state,function_value_);
        case kTableValue:   return sol::lua_value(lua_state,table_value_);
        }
        return sol::lua_value(lua_state,0);
    }
    std::string printable()
    {
        std::ostringstream ss;
        if(type_ == kNumberValue)
            ss<<"Number:"<<number_value_;
        else if(type_ == kNumberVectorValue){
            bool first = true;
            ss<<"Number Arrays:[";
            for(double v : number_vector_)
                ss<<(first?"":",")<<v,first=false;
            ss<<"]";
        }
        else if(type_ == kStringValue)
            ss<<"String:"<<string_value_;
        else if(type_ == kStringVectorValue){
            bool first = true;
            ss<<"String Arrays:[";
            for(std::string v : string_vector_)
                ss<<(first?"":",")<<"\""<<v<<"\"",first=false;
            ss<<"]";
        }
        else if(type_ == kBoolValue)
            ss<<"Bool:"<<((number_value_ == 0)?"false":"true");
        else if(type_ == kPointerValue)
            ss<<"Pointer:"<<pointer_value_;
        else if(type_ == kFunctionValue)
            ss<<"Function:"<<(function_value_.valid()?"valid":"nil");
        else if(type_ == kTableValue)
            ss<<"Table:"<<(table_value_.valid()?"valid":"nil");
        return ss.str();
    }


    NativeValueType         type_    = kNumberValue;
    //union{
        double                   number_value_ ;
        std::vector<double>      number_vector_;
        std::string              string_value_;
        std::vector<std::string> string_vector_;
        sol::function            function_value_;
        sol::table               table_value_;
        void*                    pointer_value_;
        bool                     value_changed_;
    //};

    std::string             describe_;
    bool                    read_only_      = false;
};

class LuaOperator
{
public:

    LuaOperator()
    {

    }
    ~LuaOperator()
    {

    }

    int32_t create()
    {
        lua_state_ = std::shared_ptr<sol::state>(new sol::state());
        lua_state_->open_libraries();
        return 0;
    }
    int32_t attch(std::shared_ptr<sol::state> other)
    {
        lua_state_ = other;
        return 0;
    }

    int32_t apply_script(const std::string &script)
    {
        try{
            lua_state_->safe_script_file(script);
        }
        catch(sol::error& error){
            fprintf(stderr,"LUA RUN SCRIPT ERROR: %s\n\t",error.what());
            return -1;
        }
        return 0;
    }

    int32_t apply_symbols(std::map<std::string, NativeValue *> &symbols)
    {
        for(auto& item : symbols){
            apply_symbol(item.first,item.second);
        }
        symbols_ = &symbols;
        return 0;
    }

    int32_t apply_symbol(const std::string name, NativeValue *symbol)
    {
        if(symbol->type_ == kNumberValue){
            double v = *symbol;
            (*lua_state_)[name] = v;
        }
        else if(symbol->type_ == kNumberVectorValue){
            std::vector<double> v = *symbol;
            (*lua_state_)[name] = sol::as_table(v);
        }
        else if(symbol->type_ == kStringValue){
            std::string v = *symbol;
            (*lua_state_)[name] = v;
        }
        return 0;
    }

    void set_error_handler_function(const std::string &function){
        error_handler_function_ = function;
    }

    template <typename... Args>
    protected_function_result operator()(const std::string &function,Args&&... args) const {
            sol::protected_function func = get_function(function);
            return func.call<>(std::forward<Args>(args)...);
    }

    template <typename... Args>
    protected_function_result operator()(sol::table obj,const std::string &function,Args&&... args) const {
            sol::protected_function func = get_member_function(obj,function);
            return func.call<>(std::forward<Args>(args)...);
    }

    sol::protected_function get_function(const std::string &function) const {
        sol::protected_function func;
        if(error_handler_function_.empty())
            func = (*lua_state_)[function];
        else
            func = sol::protected_function((*lua_state_)[function],(*lua_state_)[error_handler_function_]);
        return func;
    }
    sol::protected_function get_member_function(sol::table obj,const std::string &function) const{
        sol::protected_function func;
        if(error_handler_function_.empty())
            func = obj[function];
        else
            func = sol::protected_function(obj[function],(*lua_state_)[error_handler_function_]);
        return func;
    }

    int32_t read_back()
    {
        if(symbols_ == nullptr)
            return 0;
        for(auto& item : *symbols_){
            NativeValue* symbol = item.second;

            if(symbol->value_changed_ == true)
                continue;

            if(symbol->type_ == kNumberValue){
                double value = (*lua_state_)[item.first];
                *symbol= value;
                //fprintf(stderr,"%s:%f\n",item.first.c_str(),value);
            }
            else if(symbol->type_ == kNumberVectorValue){
                const sol::table& values = (*lua_state_)[item.first];
                *symbol = values.as<std::vector<double>>();
            }
            else if(symbol->type_ == kStringValue){
                symbol->string_value_ = (*lua_state_)[item.first];
            }
        }
        return 0;
    }

    sol::lua_value create_value(const NativeValue &value)
    {
        return value.create_lua_value(*lua_state_);
    }

    sol::state& state(){return  *lua_state_;}
    operator sol::state&(){return  *lua_state_;}
    operator std::shared_ptr<sol::state> (){return lua_state_;}
private:
    std::map<std::string,NativeValue*>* symbols_ = nullptr;
    std::shared_ptr<sol::state> lua_state_;
    std::string error_handler_function_;
};

}

#endif // LUA_EXPRESSION_H
