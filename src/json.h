#include <string>

namespace acjson {
    class JObject {
        public:
            enum Type
            {
                kNumber,
                kString,
                kBoolean,
                kArray,
                kObject,
                kNull
            };

            JObject(bool n):type_(Type::kBoolean)
            ,text_(n ? "true" : "false") {}

            JObject(int n):type_(Type::kNumber)
            ,text_(std::to_string(n)) {}

            JObject(unsigned n):type_(Type::kNumber)
            ,text_(std::to_string(n)) {}

            JObject(double n):type_(Type::kNumber),text_(std::to_string(n)) {}

            JObject(std::string str):type_(Type::kString),text_(std::move(str)) {}
            JObject(std::initializer_list<JObject> list ) {

            }

        private:
            const Type type_ = Type::kNull;
            const std::string text_ {"null"};
    };

    class Json
    {
    public:
        Json() = default;
        ~Json() = default;

        static void parse() = delete;

    private:
        static constexpr char pair_sep = ',';
        static constexpr char kv_sep = ':';
    };
};