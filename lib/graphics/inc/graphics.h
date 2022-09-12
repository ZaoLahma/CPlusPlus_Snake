#include <cstdint>

class Graphics
{
    public:
        Graphics() = delete;
        Graphics(const uint16_t width, const uint16_t height);

    protected:
        uint16_t mHeight;
        uint16_t mWidth;

    private:
};