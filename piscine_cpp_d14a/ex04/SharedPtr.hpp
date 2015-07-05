
#ifndef SHARED_PTR_HPP_
#define SHARED_PTR_HPP_

#include <cstddef>
#include "BaseComponent.hpp"

class SharedPtr
{
    public:
        SharedPtr(BaseComponent *rawPtr);
        SharedPtr(SharedPtr const &other);
        SharedPtr &operator=(SharedPtr const &other);
        ~SharedPtr();

        BaseComponent *get() const;

    private:
        BaseComponent *_rawPtr;
};

#endif // SHARED_PTR_HPP_
