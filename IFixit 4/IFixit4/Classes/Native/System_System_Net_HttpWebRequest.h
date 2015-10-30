#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t975;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t913;
// System.String
struct String_t;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1014;
// System.Version
struct Version_t1022;
// System.Net.IWebProxy
struct IWebProxy_t1015;
// System.Net.ServicePoint
struct ServicePoint_t976;
// System.Object
struct Object_t;

#include "System_System_Net_WebRequest.h"

// System.Net.HttpWebRequest
struct  HttpWebRequest_t889  : public WebRequest_t980
{
	// System.Uri System.Net.HttpWebRequest::requestUri
	Uri_t975 * ___requestUri_6;
	// System.Uri System.Net.HttpWebRequest::actualUri
	Uri_t975 * ___actualUri_7;
	// System.Boolean System.Net.HttpWebRequest::hostChanged
	bool ___hostChanged_8;
	// System.Boolean System.Net.HttpWebRequest::allowAutoRedirect
	bool ___allowAutoRedirect_9;
	// System.Boolean System.Net.HttpWebRequest::allowBuffering
	bool ___allowBuffering_10;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::certificates
	X509CertificateCollection_t913 * ___certificates_11;
	// System.String System.Net.HttpWebRequest::connectionGroup
	String_t* ___connectionGroup_12;
	// System.Int64 System.Net.HttpWebRequest::contentLength
	int64_t ___contentLength_13;
	// System.Net.WebHeaderCollection System.Net.HttpWebRequest::webHeaders
	WebHeaderCollection_t1014 * ___webHeaders_14;
	// System.Boolean System.Net.HttpWebRequest::keepAlive
	bool ___keepAlive_15;
	// System.Int32 System.Net.HttpWebRequest::maxAutoRedirect
	int32_t ___maxAutoRedirect_16;
	// System.String System.Net.HttpWebRequest::mediaType
	String_t* ___mediaType_17;
	// System.String System.Net.HttpWebRequest::method
	String_t* ___method_18;
	// System.String System.Net.HttpWebRequest::initialMethod
	String_t* ___initialMethod_19;
	// System.Boolean System.Net.HttpWebRequest::pipelined
	bool ___pipelined_20;
	// System.Version System.Net.HttpWebRequest::version
	Version_t1022 * ___version_21;
	// System.Net.IWebProxy System.Net.HttpWebRequest::proxy
	Object_t * ___proxy_22;
	// System.Boolean System.Net.HttpWebRequest::sendChunked
	bool ___sendChunked_23;
	// System.Net.ServicePoint System.Net.HttpWebRequest::servicePoint
	ServicePoint_t976 * ___servicePoint_24;
	// System.Int32 System.Net.HttpWebRequest::timeout
	int32_t ___timeout_25;
	// System.Int32 System.Net.HttpWebRequest::redirects
	int32_t ___redirects_26;
	// System.Object System.Net.HttpWebRequest::locker
	Object_t * ___locker_27;
	// System.Int32 System.Net.HttpWebRequest::readWriteTimeout
	int32_t ___readWriteTimeout_29;
};
struct HttpWebRequest_t889_StaticFields{
	// System.Int32 System.Net.HttpWebRequest::defaultMaxResponseHeadersLength
	int32_t ___defaultMaxResponseHeadersLength_28;
};
