#include "html_elem.hh"
#include <cassert>
using std::string;

enum TagType {
    none = 0,
    open = 1,
    close = 2,
};

TagType tag_type__(string s) {
    // less than 3 characters means it does not fit a name
    if (s.size() < 3) {
        return TagType::none;
    }
    // delimited by '<' and '>'
    if (s[0] != '<' || s[s.size() - 1] != '>') {
        return TagType::none;
    }
    // allowed characters in the tag name: [a-z_-]
    const bool is_close = s[1] == '/';
    int start = is_close ? 2 : 1;
    for (int i = start; i < s.size() - 1; i++) {
        if (!isalpha(s[i]) && s[i] != '_' && s[i] != '-') {
            return TagType::none;
        }
    }
    return is_close ? TagType::close : TagType::open;
}

bool is_tag(string s) {
    return tag_type__(s) != TagType::none;
}

bool is_open_tag(string s) {
    return tag_type__(s) == TagType::open;
}

bool is_close_tag(string s) {
    return tag_type__(s) == TagType::close;
}

string tag_name(string s) {
    const TagType type = tag_type__(s);
    assert(type != TagType::none);
    int start = type == TagType::close ? 2 : 1;
    int end = s.size() - 1;
    return s.substr(start, end - start);
}