#ifndef PACK_HPP_
#define PACK_HPP_

namespace pack
{
    class version
    {
        int m_major;
        int m_minor;
    public:
        version(int minor, int major) :
            m_major(major), m_minor(minor) { }

        static version& get() {
            static version ver(0, 1);
            return ver;
        }

        int major() {
            return m_major;
        }

        int minor() {
            return m_minor;
        }
    };
} // namespace pack

#endif // PACK_HPP_
