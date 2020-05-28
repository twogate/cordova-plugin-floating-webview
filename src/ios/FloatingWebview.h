#import <Cordova/CDVPlugin.h> // this already includes Foundation.h

#ifndef FloatingWebview_h
#define FloatingWebview_h

@interface FloatingWebview : CDVPlugin
- (void)pluginInitialize;
- (NSArray<ASAuthorizationScope> *)convertScopes:(NSArray<NSNumber *> *)scopes;
- (void)show:(CDVInvokedUrlCommand *)command;
- (void)hide:(CDVInvokedUrlCommand *)command;
@end

#endif /* FloatingWebview_h */
