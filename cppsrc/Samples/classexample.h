#include <napi.h>
#include "actualclass.h"

class ClassExample : public Napi::ObjectWrap<ClassExample>
{
private:
    static Napi::FunctionReference constructor;
    Napi::Value GetValue(const Napi::CallbackInfo& info);
    Napi::Value Add(const Napi::CallbackInfo& info);
    ActualClass *actualClass_;
public:
    static Napi::Object Init(Napi::Env env, Napi::Object exports);
    ClassExample(const Napi::CallbackInfo& info);
    ActualClass* GetInternalInstance();
};
