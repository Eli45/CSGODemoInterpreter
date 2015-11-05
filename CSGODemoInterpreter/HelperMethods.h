#ifndef HELPER_METHODS_H
#define HELPER_METHODS_H

#include "TypeDefinesAndConstants.h"
#include <sstream>

using Constants::_String_;

namespace HelperMethods {
    //s is the string to check for.
    //parent is the string that may contain s.
    Bool StartsWith(const String parent, String s)  { //TODO: Not tested. assuming it works for now.
        if (s.length() > parent.length())
            return false;

        Int32 firstFewLetters = s.length();
        String combined = _String_::Empty;

        for (Int32 i = 0; i < firstFewLetters; ++i)    {
            combined += String(1, parent.at(i)); //convert char at position i to string.
        }

        return combined == s;
    }

    Vector<String> Split(const String s, const char delimiter)    {
        Vector<String> v;
        String temp = _String_::Empty;

        for (UInt32 i = 0; i < s.length(); ++i)  {
            if (s.at(i) == delimiter)   {
                v.push_back(temp);
                temp = _String_::Empty;
            }
            else
                temp += s.at(i);
        }

		return v;

    }

    template <typename T> String StringConvert(T toConvert)    {
        std::ostringstream s;

        s << toConvert;

        return s.str();
    }

	template <typename T> Vector<T> CombineVec(Vector<T> one, Vector<T> two) {
		Vector<T> ret = {};

		for (auto i : one)
			ret.push_back(i);

		for (auto i : two)
			ret.push_back(i);

		return ret;

	}
};

#endif