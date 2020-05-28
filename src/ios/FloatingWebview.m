#import <Cordova/CDVPlugin.h> // this already includes Foundation.h

@interface SignInWithApple : CDVPlugin {
  NSMutableString *_callbackId;
}
@end

@implementation FloatingWebview
- (void)pluginInitialize {
  NSLog(@"FloatingWebview initialize");
}

- (void)show:(CDVInvokedUrlCommand *)command {
  NSLog(@"show!");
}

- (void)show:(CDVInvokedUrlCommand *)command {
  NSLog(@"hide!");
}

