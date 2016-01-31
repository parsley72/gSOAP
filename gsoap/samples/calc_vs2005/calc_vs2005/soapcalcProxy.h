/* soapcalcProxy.h
   Generated by gSOAP 2.8.28 from calc.h

gSOAP XML Web services tools
Copyright (C) 2000-2016, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#ifndef soapcalcProxy_H
#define soapcalcProxy_H
#include "soapH.h"

class SOAP_CMAC calcProxy : public soap
{ public:
	/// Endpoint URL of service 'calcProxy' (change as needed)
	const char *soap_endpoint;
	/// Variables globally declared in calc.h (non-static)
	/// Constructor
	calcProxy();
	/// Copy constructor
	calcProxy(const calcProxy& rhs);
	/// Construct from another engine state
	calcProxy(const struct soap&);
	/// Constructor with endpoint URL
	calcProxy(const char *url);
	/// Constructor with engine input+output mode control
	calcProxy(soap_mode iomode);
	/// Constructor with URL and input+output mode control
	calcProxy(const char *url, soap_mode iomode);
	/// Constructor with engine input and output mode control
	calcProxy(soap_mode imode, soap_mode omode);
	/// Destructor deletes deserialized data and engine context
	virtual	~calcProxy();
	/// Initializer used by constructors
	virtual	void calcProxy_init(soap_mode imode, soap_mode omode);
	/// Create a new copy
	virtual	calcProxy *copy() SOAP_PURE_VIRTUAL;
	/// Copy assignment
	calcProxy& operator=(const calcProxy&);
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to default
	virtual	void reset();
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Get SOAP Fault structure (NULL when absent)
	virtual	const SOAP_ENV__Fault *soap_fault();
	/// Get SOAP Fault string (NULL when absent)
	virtual	const char *soap_fault_string();
	/// Get SOAP Fault detail as string (NULL when absent)
	virtual	const char *soap_fault_detail();
	/// Close connection (normally automatic, except for send_X ops)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
#ifndef WITH_COMPAT
	virtual	void soap_stream_fault(std::ostream&);
#endif

	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif

	/// Web service operation 'add' (returns error code or SOAP_OK)
	virtual	int add(double a, double b, double *result) { return this->add(NULL, NULL, a, b, result); }
	virtual	int add(const char *endpoint, const char *soap_action, double a, double b, double *result);

	/// Web service operation 'sub' (returns error code or SOAP_OK)
	virtual	int sub(double a, double b, double *result) { return this->sub(NULL, NULL, a, b, result); }
	virtual	int sub(const char *endpoint, const char *soap_action, double a, double b, double *result);

	/// Web service operation 'mul' (returns error code or SOAP_OK)
	virtual	int mul(double a, double b, double *result) { return this->mul(NULL, NULL, a, b, result); }
	virtual	int mul(const char *endpoint, const char *soap_action, double a, double b, double *result);

	/// Web service operation 'div' (returns error code or SOAP_OK)
	virtual	int div(double a, double b, double *result) { return this->div(NULL, NULL, a, b, result); }
	virtual	int div(const char *endpoint, const char *soap_action, double a, double b, double *result);

	/// Web service operation 'pow' (returns error code or SOAP_OK)
	virtual	int pow(double a, double b, double *result) { return this->pow(NULL, NULL, a, b, result); }
	virtual	int pow(const char *endpoint, const char *soap_action, double a, double b, double *result);
};
#endif
