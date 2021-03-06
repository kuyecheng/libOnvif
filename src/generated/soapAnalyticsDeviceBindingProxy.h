/* soapAnalyticsDeviceBindingProxy.h
   Generated by gSOAP 2.8.55 for generated.h

gSOAP XML Web services tools
Copyright (C) 2000-2017, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#ifndef soapAnalyticsDeviceBindingProxy_H
#define soapAnalyticsDeviceBindingProxy_H
#include "soapH.h"

    class SOAP_CMAC AnalyticsDeviceBindingProxy {
      public:
        /// Context to manage proxy IO and data
        struct soap *soap;
        bool soap_own; ///< flag indicating that this context is owned by this proxy when context is shared
        /// Endpoint URL of service 'AnalyticsDeviceBindingProxy' (change as needed)
        const char *soap_endpoint;
        /// Variables globally declared in generated.h, if any
        /// Construct a proxy with new managing context
        AnalyticsDeviceBindingProxy();
        /// Copy constructor
        AnalyticsDeviceBindingProxy(const AnalyticsDeviceBindingProxy& rhs);
        /// Construct proxy given a shared managing context
        AnalyticsDeviceBindingProxy(struct soap*);
        /// Constructor taking an endpoint URL
        AnalyticsDeviceBindingProxy(const char *endpoint);
        /// Constructor taking input and output mode flags for the new managing context
        AnalyticsDeviceBindingProxy(soap_mode iomode);
        /// Constructor taking endpoint URL and input and output mode flags for the new managing context
        AnalyticsDeviceBindingProxy(const char *endpoint, soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        AnalyticsDeviceBindingProxy(soap_mode imode, soap_mode omode);
        /// Destructor deletes non-shared managing context only (use destroy() to delete deserialized data)
        virtual ~AnalyticsDeviceBindingProxy();
        /// Initializer used by constructors
        virtual void AnalyticsDeviceBindingProxy_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual AnalyticsDeviceBindingProxy *copy();
        /// Copy assignment
        AnalyticsDeviceBindingProxy& operator=(const AnalyticsDeviceBindingProxy&);
        /// Delete all deserialized data (uses soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to default
        virtual void reset();
        /// Disables and removes SOAP Header from message by setting soap->header = NULL
        virtual void soap_noheader();
        /// Add SOAP Header to message
        virtual void soap_header(struct _wsse__Security *wsse__Security, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct wsdd__AppSequenceType *wsdd__AppSequence);
        /// Get SOAP Header structure (i.e. soap->header, which is NULL when absent)
        virtual ::SOAP_ENV__Header *soap_header();
        /// Get SOAP Fault structure (i.e. soap->fault, which is NULL when absent)
        virtual ::SOAP_ENV__Fault *soap_fault();
        /// Get SOAP Fault string (NULL when absent)
        virtual const char *soap_fault_string();
        /// Get SOAP Fault detail as string (NULL when absent)
        virtual const char *soap_fault_detail();
        /// Close connection (normally automatic, except for send_X ops)
        virtual int soap_close_socket();
        /// Force close connection (can kill a thread blocked on IO)
        virtual int soap_force_close_socket();
        /// Print fault
        virtual void soap_print_fault(FILE*);
    #ifndef WITH_LEAN
    #ifndef WITH_COMPAT
        /// Print fault to stream
        virtual void soap_stream_fault(std::ostream&);
    #endif
        /// Write fault to buffer
        virtual char *soap_sprint_fault(char *buf, size_t len);
    #endif
        /// Web service operation 'GetServiceCapabilities' (returns SOAP_OK or error code)
        virtual int GetServiceCapabilities(_tad__GetServiceCapabilities *tad__GetServiceCapabilities, _tad__GetServiceCapabilitiesResponse &tad__GetServiceCapabilitiesResponse)
        { return this->GetServiceCapabilities(NULL, NULL, tad__GetServiceCapabilities, tad__GetServiceCapabilitiesResponse); }
        virtual int GetServiceCapabilities(const char *soap_endpoint, const char *soap_action, _tad__GetServiceCapabilities *tad__GetServiceCapabilities, _tad__GetServiceCapabilitiesResponse &tad__GetServiceCapabilitiesResponse);
        /// Web service operation 'DeleteAnalyticsEngineControl' (returns SOAP_OK or error code)
        virtual int DeleteAnalyticsEngineControl(_tad__DeleteAnalyticsEngineControl *tad__DeleteAnalyticsEngineControl, _tad__DeleteAnalyticsEngineControlResponse &tad__DeleteAnalyticsEngineControlResponse)
        { return this->DeleteAnalyticsEngineControl(NULL, NULL, tad__DeleteAnalyticsEngineControl, tad__DeleteAnalyticsEngineControlResponse); }
        virtual int DeleteAnalyticsEngineControl(const char *soap_endpoint, const char *soap_action, _tad__DeleteAnalyticsEngineControl *tad__DeleteAnalyticsEngineControl, _tad__DeleteAnalyticsEngineControlResponse &tad__DeleteAnalyticsEngineControlResponse);
        /// Web service operation 'CreateAnalyticsEngineControl' (returns SOAP_OK or error code)
        virtual int CreateAnalyticsEngineControl(_tad__CreateAnalyticsEngineControl *tad__CreateAnalyticsEngineControl, _tad__CreateAnalyticsEngineControlResponse &tad__CreateAnalyticsEngineControlResponse)
        { return this->CreateAnalyticsEngineControl(NULL, NULL, tad__CreateAnalyticsEngineControl, tad__CreateAnalyticsEngineControlResponse); }
        virtual int CreateAnalyticsEngineControl(const char *soap_endpoint, const char *soap_action, _tad__CreateAnalyticsEngineControl *tad__CreateAnalyticsEngineControl, _tad__CreateAnalyticsEngineControlResponse &tad__CreateAnalyticsEngineControlResponse);
        /// Web service operation 'SetAnalyticsEngineControl' (returns SOAP_OK or error code)
        virtual int SetAnalyticsEngineControl(_tad__SetAnalyticsEngineControl *tad__SetAnalyticsEngineControl, _tad__SetAnalyticsEngineControlResponse &tad__SetAnalyticsEngineControlResponse)
        { return this->SetAnalyticsEngineControl(NULL, NULL, tad__SetAnalyticsEngineControl, tad__SetAnalyticsEngineControlResponse); }
        virtual int SetAnalyticsEngineControl(const char *soap_endpoint, const char *soap_action, _tad__SetAnalyticsEngineControl *tad__SetAnalyticsEngineControl, _tad__SetAnalyticsEngineControlResponse &tad__SetAnalyticsEngineControlResponse);
        /// Web service operation 'GetAnalyticsEngineControl' (returns SOAP_OK or error code)
        virtual int GetAnalyticsEngineControl(_tad__GetAnalyticsEngineControl *tad__GetAnalyticsEngineControl, _tad__GetAnalyticsEngineControlResponse &tad__GetAnalyticsEngineControlResponse)
        { return this->GetAnalyticsEngineControl(NULL, NULL, tad__GetAnalyticsEngineControl, tad__GetAnalyticsEngineControlResponse); }
        virtual int GetAnalyticsEngineControl(const char *soap_endpoint, const char *soap_action, _tad__GetAnalyticsEngineControl *tad__GetAnalyticsEngineControl, _tad__GetAnalyticsEngineControlResponse &tad__GetAnalyticsEngineControlResponse);
        /// Web service operation 'GetAnalyticsEngineControls' (returns SOAP_OK or error code)
        virtual int GetAnalyticsEngineControls(_tad__GetAnalyticsEngineControls *tad__GetAnalyticsEngineControls, _tad__GetAnalyticsEngineControlsResponse &tad__GetAnalyticsEngineControlsResponse)
        { return this->GetAnalyticsEngineControls(NULL, NULL, tad__GetAnalyticsEngineControls, tad__GetAnalyticsEngineControlsResponse); }
        virtual int GetAnalyticsEngineControls(const char *soap_endpoint, const char *soap_action, _tad__GetAnalyticsEngineControls *tad__GetAnalyticsEngineControls, _tad__GetAnalyticsEngineControlsResponse &tad__GetAnalyticsEngineControlsResponse);
        /// Web service operation 'GetAnalyticsEngine' (returns SOAP_OK or error code)
        virtual int GetAnalyticsEngine(_tad__GetAnalyticsEngine *tad__GetAnalyticsEngine, _tad__GetAnalyticsEngineResponse &tad__GetAnalyticsEngineResponse)
        { return this->GetAnalyticsEngine(NULL, NULL, tad__GetAnalyticsEngine, tad__GetAnalyticsEngineResponse); }
        virtual int GetAnalyticsEngine(const char *soap_endpoint, const char *soap_action, _tad__GetAnalyticsEngine *tad__GetAnalyticsEngine, _tad__GetAnalyticsEngineResponse &tad__GetAnalyticsEngineResponse);
        /// Web service operation 'GetAnalyticsEngines' (returns SOAP_OK or error code)
        virtual int GetAnalyticsEngines(_tad__GetAnalyticsEngines *tad__GetAnalyticsEngines, _tad__GetAnalyticsEnginesResponse &tad__GetAnalyticsEnginesResponse)
        { return this->GetAnalyticsEngines(NULL, NULL, tad__GetAnalyticsEngines, tad__GetAnalyticsEnginesResponse); }
        virtual int GetAnalyticsEngines(const char *soap_endpoint, const char *soap_action, _tad__GetAnalyticsEngines *tad__GetAnalyticsEngines, _tad__GetAnalyticsEnginesResponse &tad__GetAnalyticsEnginesResponse);
        /// Web service operation 'SetVideoAnalyticsConfiguration' (returns SOAP_OK or error code)
        virtual int SetVideoAnalyticsConfiguration(_tad__SetVideoAnalyticsConfiguration *tad__SetVideoAnalyticsConfiguration, _tad__SetVideoAnalyticsConfigurationResponse &tad__SetVideoAnalyticsConfigurationResponse)
        { return this->SetVideoAnalyticsConfiguration(NULL, NULL, tad__SetVideoAnalyticsConfiguration, tad__SetVideoAnalyticsConfigurationResponse); }
        virtual int SetVideoAnalyticsConfiguration(const char *soap_endpoint, const char *soap_action, _tad__SetVideoAnalyticsConfiguration *tad__SetVideoAnalyticsConfiguration, _tad__SetVideoAnalyticsConfigurationResponse &tad__SetVideoAnalyticsConfigurationResponse);
        /// Web service operation 'SetAnalyticsEngineInput' (returns SOAP_OK or error code)
        virtual int SetAnalyticsEngineInput(_tad__SetAnalyticsEngineInput *tad__SetAnalyticsEngineInput, _tad__SetAnalyticsEngineInputResponse &tad__SetAnalyticsEngineInputResponse)
        { return this->SetAnalyticsEngineInput(NULL, NULL, tad__SetAnalyticsEngineInput, tad__SetAnalyticsEngineInputResponse); }
        virtual int SetAnalyticsEngineInput(const char *soap_endpoint, const char *soap_action, _tad__SetAnalyticsEngineInput *tad__SetAnalyticsEngineInput, _tad__SetAnalyticsEngineInputResponse &tad__SetAnalyticsEngineInputResponse);
        /// Web service operation 'GetAnalyticsEngineInput' (returns SOAP_OK or error code)
        virtual int GetAnalyticsEngineInput(_tad__GetAnalyticsEngineInput *tad__GetAnalyticsEngineInput, _tad__GetAnalyticsEngineInputResponse &tad__GetAnalyticsEngineInputResponse)
        { return this->GetAnalyticsEngineInput(NULL, NULL, tad__GetAnalyticsEngineInput, tad__GetAnalyticsEngineInputResponse); }
        virtual int GetAnalyticsEngineInput(const char *soap_endpoint, const char *soap_action, _tad__GetAnalyticsEngineInput *tad__GetAnalyticsEngineInput, _tad__GetAnalyticsEngineInputResponse &tad__GetAnalyticsEngineInputResponse);
        /// Web service operation 'GetAnalyticsEngineInputs' (returns SOAP_OK or error code)
        virtual int GetAnalyticsEngineInputs(_tad__GetAnalyticsEngineInputs *tad__GetAnalyticsEngineInputs, _tad__GetAnalyticsEngineInputsResponse &tad__GetAnalyticsEngineInputsResponse)
        { return this->GetAnalyticsEngineInputs(NULL, NULL, tad__GetAnalyticsEngineInputs, tad__GetAnalyticsEngineInputsResponse); }
        virtual int GetAnalyticsEngineInputs(const char *soap_endpoint, const char *soap_action, _tad__GetAnalyticsEngineInputs *tad__GetAnalyticsEngineInputs, _tad__GetAnalyticsEngineInputsResponse &tad__GetAnalyticsEngineInputsResponse);
        /// Web service operation 'GetAnalyticsDeviceStreamUri' (returns SOAP_OK or error code)
        virtual int GetAnalyticsDeviceStreamUri(_tad__GetAnalyticsDeviceStreamUri *tad__GetAnalyticsDeviceStreamUri, _tad__GetAnalyticsDeviceStreamUriResponse &tad__GetAnalyticsDeviceStreamUriResponse)
        { return this->GetAnalyticsDeviceStreamUri(NULL, NULL, tad__GetAnalyticsDeviceStreamUri, tad__GetAnalyticsDeviceStreamUriResponse); }
        virtual int GetAnalyticsDeviceStreamUri(const char *soap_endpoint, const char *soap_action, _tad__GetAnalyticsDeviceStreamUri *tad__GetAnalyticsDeviceStreamUri, _tad__GetAnalyticsDeviceStreamUriResponse &tad__GetAnalyticsDeviceStreamUriResponse);
        /// Web service operation 'GetVideoAnalyticsConfiguration' (returns SOAP_OK or error code)
        virtual int GetVideoAnalyticsConfiguration(_tad__GetVideoAnalyticsConfiguration *tad__GetVideoAnalyticsConfiguration, _tad__GetVideoAnalyticsConfigurationResponse &tad__GetVideoAnalyticsConfigurationResponse)
        { return this->GetVideoAnalyticsConfiguration(NULL, NULL, tad__GetVideoAnalyticsConfiguration, tad__GetVideoAnalyticsConfigurationResponse); }
        virtual int GetVideoAnalyticsConfiguration(const char *soap_endpoint, const char *soap_action, _tad__GetVideoAnalyticsConfiguration *tad__GetVideoAnalyticsConfiguration, _tad__GetVideoAnalyticsConfigurationResponse &tad__GetVideoAnalyticsConfigurationResponse);
        /// Web service operation 'CreateAnalyticsEngineInputs' (returns SOAP_OK or error code)
        virtual int CreateAnalyticsEngineInputs(_tad__CreateAnalyticsEngineInputs *tad__CreateAnalyticsEngineInputs, _tad__CreateAnalyticsEngineInputsResponse &tad__CreateAnalyticsEngineInputsResponse)
        { return this->CreateAnalyticsEngineInputs(NULL, NULL, tad__CreateAnalyticsEngineInputs, tad__CreateAnalyticsEngineInputsResponse); }
        virtual int CreateAnalyticsEngineInputs(const char *soap_endpoint, const char *soap_action, _tad__CreateAnalyticsEngineInputs *tad__CreateAnalyticsEngineInputs, _tad__CreateAnalyticsEngineInputsResponse &tad__CreateAnalyticsEngineInputsResponse);
        /// Web service operation 'DeleteAnalyticsEngineInputs' (returns SOAP_OK or error code)
        virtual int DeleteAnalyticsEngineInputs(_tad__DeleteAnalyticsEngineInputs *tad__DeleteAnalyticsEngineInputs, _tad__DeleteAnalyticsEngineInputsResponse &tad__DeleteAnalyticsEngineInputsResponse)
        { return this->DeleteAnalyticsEngineInputs(NULL, NULL, tad__DeleteAnalyticsEngineInputs, tad__DeleteAnalyticsEngineInputsResponse); }
        virtual int DeleteAnalyticsEngineInputs(const char *soap_endpoint, const char *soap_action, _tad__DeleteAnalyticsEngineInputs *tad__DeleteAnalyticsEngineInputs, _tad__DeleteAnalyticsEngineInputsResponse &tad__DeleteAnalyticsEngineInputsResponse);
        /// Web service operation 'GetAnalyticsState' (returns SOAP_OK or error code)
        virtual int GetAnalyticsState(_tad__GetAnalyticsState *tad__GetAnalyticsState, _tad__GetAnalyticsStateResponse &tad__GetAnalyticsStateResponse)
        { return this->GetAnalyticsState(NULL, NULL, tad__GetAnalyticsState, tad__GetAnalyticsStateResponse); }
        virtual int GetAnalyticsState(const char *soap_endpoint, const char *soap_action, _tad__GetAnalyticsState *tad__GetAnalyticsState, _tad__GetAnalyticsStateResponse &tad__GetAnalyticsStateResponse);
    };
#endif
