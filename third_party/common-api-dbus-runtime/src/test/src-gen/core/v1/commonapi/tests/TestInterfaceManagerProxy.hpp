/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.v201512091035.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COMMONAPI_TESTS_Test_Interface_Manager_PROXY_HPP_
#define V1_COMMONAPI_TESTS_Test_Interface_Manager_PROXY_HPP_

#include <v1/commonapi/tests/TestInterfaceManagerProxyBase.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif


#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace commonapi {
namespace tests {

template <typename ... _AttributeExtensions>
class TestInterfaceManagerProxy
    : virtual public TestInterfaceManager, 
      virtual public TestInterfaceManagerProxyBase,
      virtual public _AttributeExtensions... {
public:
    TestInterfaceManagerProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~TestInterfaceManagerProxy();

    typedef TestInterfaceManager InterfaceType;





    virtual CommonAPI::ProxyManager& getProxyManagerTestInterface();

    /**
     * Returns the CommonAPI address of the remote partner this proxy communicates with.
     */
    virtual const CommonAPI::Address &getAddress() const;

    /**
     * Returns true if the remote partner for this proxy is currently known to be available.
     */
    virtual bool isAvailable() const;

    /**
     * Returns true if the remote partner for this proxy is available.
     */
    virtual bool isAvailableBlocking() const;

    /**
     * Returns the wrapper class that is used to (de-)register for notifications about
     * the availability of the remote partner of this proxy.
     */
    virtual CommonAPI::ProxyStatusEvent& getProxyStatusEvent();

    /**
     * Returns the wrapper class that is used to access version information of the remote
     * partner of this proxy.
     */
    virtual CommonAPI::InterfaceVersionAttribute& getInterfaceVersionAttribute();

 private:
    std::shared_ptr<TestInterfaceManagerProxyBase> delegate_;
};

typedef TestInterfaceManagerProxy<> TestInterfaceManagerProxyDefault;


//
// TestInterfaceManagerProxy Implementation
//
template <typename ... _AttributeExtensions>
TestInterfaceManagerProxy<_AttributeExtensions...>::TestInterfaceManagerProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast<TestInterfaceManagerProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast<TestInterfaceManagerProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
TestInterfaceManagerProxy<_AttributeExtensions...>::~TestInterfaceManagerProxy() {
}


template <typename ... _AttributeExtensions>
const CommonAPI::Address &TestInterfaceManagerProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
bool TestInterfaceManagerProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool TestInterfaceManagerProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& TestInterfaceManagerProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& TestInterfaceManagerProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyManager& TestInterfaceManagerProxy<_AttributeExtensions...>::getProxyManagerTestInterface() {
    return delegate_->getProxyManagerTestInterface();
}

} // namespace tests
} // namespace commonapi
} // namespace v1



// Compatibility
namespace v1_0 = v1;

#endif // V1_COMMONAPI_TESTS_Test_Interface_Manager_PROXY_HPP_
