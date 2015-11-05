#ifndef TYPE_DEFINES_AND_CONSTANTS
#define TYPE_DEFINES_AND_CONSTANTS

#include <cstdint>
#include <string>
#include <vector>

typedef std::string String;
typedef uint64_t    Tick;

typedef int64_t     Int64;
typedef uint64_t    UInt64;
typedef int32_t     Int32;
typedef uint32_t    UInt32;

typedef bool        Bool;

#define Inline inline

template <typename T> using Vector = std::vector<T>;

namespace Constants {
    class _String_ {
        public: static constexpr const char* Empty = "";
    };
}

#endif