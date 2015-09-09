// Copyright (c) 2015 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_REQUEST_HANDLER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_REQUEST_HANDLER_CTOCPP_H_
#pragma once

#ifndef BUILDING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed DLL-side only")
#else  // BUILDING_CEF_SHARED

#include "include/cef_request_handler.h"
#include "include/capi/cef_request_handler_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefRequestHandlerCToCpp
    : public CefCToCpp<CefRequestHandlerCToCpp, CefRequestHandler,
        cef_request_handler_t> {
 public:
  CefRequestHandlerCToCpp();

  // CefRequestHandler methods.
  bool OnBeforeBrowse(CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
      CefRefPtr<CefRequest> request, bool is_redirect) override;
  bool OnOpenURLFromTab(CefRefPtr<CefBrowser> browser,
      CefRefPtr<CefFrame> frame, const CefString& target_url,
      WindowOpenDisposition target_disposition, bool user_gesture) override;
  ReturnValue OnBeforeResourceLoad(CefRefPtr<CefBrowser> browser,
      CefRefPtr<CefFrame> frame, CefRefPtr<CefRequest> request,
      CefRefPtr<CefRequestCallback> callback) override;
  CefRefPtr<CefResourceHandler> GetResourceHandler(
      CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
      CefRefPtr<CefRequest> request) override;
  void OnResourceRedirect(CefRefPtr<CefBrowser> browser,
      CefRefPtr<CefFrame> frame, CefRefPtr<CefRequest> request,
      CefString& new_url) override;
  bool OnResourceResponse(CefRefPtr<CefBrowser> browser,
      CefRefPtr<CefFrame> frame, CefRefPtr<CefRequest> request,
      CefRefPtr<CefResponse> response) override;
  bool GetAuthCredentials(CefRefPtr<CefBrowser> browser,
      CefRefPtr<CefFrame> frame, bool isProxy, const CefString& host, int port,
      const CefString& realm, const CefString& scheme,
      CefRefPtr<CefAuthCallback> callback) override;
  bool OnQuotaRequest(CefRefPtr<CefBrowser> browser,
      const CefString& origin_url, int64 new_size,
      CefRefPtr<CefRequestCallback> callback) override;
  void OnProtocolExecution(CefRefPtr<CefBrowser> browser, const CefString& url,
      bool& allow_os_execution) override;
  bool OnCertificateError(CefRefPtr<CefBrowser> browser,
      cef_errorcode_t cert_error, const CefString& request_url,
      CefRefPtr<CefSSLInfo> ssl_info,
      CefRefPtr<CefRequestCallback> callback) override;
  void OnPluginCrashed(CefRefPtr<CefBrowser> browser,
      const CefString& plugin_path) override;
  void OnRenderViewReady(CefRefPtr<CefBrowser> browser) override;
  void OnRenderProcessTerminated(CefRefPtr<CefBrowser> browser,
      TerminationStatus status) override;
};

#endif  // BUILDING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_REQUEST_HANDLER_CTOCPP_H_
