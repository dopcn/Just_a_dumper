//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol TDAADelegateProxyProtocol;

@interface TDAADelegateProxy : NSObject
{
    id <TDAADelegateProxyProtocol> _proxyProtocol;
}

+ (void)storeOriginalImplementation:(CDUnknownFunctionPointerType)arg1 selector:(SEL)arg2 class:(Class)arg3;
+ (CDUnknownFunctionPointerType)originalImplementation:(SEL)arg1 class:(Class)arg2;
+ (void)swizzle:(SEL)arg1 implementation:(CDUnknownFunctionPointerType)arg2 class:(Class)arg3;
+ (void)proxyAppDelegate;
+ (id)instance;
@property(nonatomic) id <TDAADelegateProxyProtocol> proxyProtocol; // @synthesize proxyProtocol=_proxyProtocol;

@end

