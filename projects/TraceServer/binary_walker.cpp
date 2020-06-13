#include <binary_walker.h>

namespace binary
{
    std::string read_str_bw(BinaryWalker& walker)
    {
        auto size = read_bw<int>(walker);
        if (size > walker.size - walker.cursor)
            size = walker.size - walker.cursor;

        if (size <= 0)
            return "";

        std::string str(walker.data + walker.cursor, size);
        walker.cursor += size;
        return str;
    }

    void write_str_bw(BinaryWalker& walker, std::string const& str)
    {
        auto size = static_cast<int>(str.size());
        write_bw<int>(walker, size);
        auto data = walker.data + walker.cursor;
        if (size > walker.size - walker.cursor)
            size = walker.size - walker.cursor;

        if (size > 0)
        {
            memcpy_s(data, walker.size - walker.cursor, str.c_str(), size);
            walker.cursor += size;
        }
    }
}
