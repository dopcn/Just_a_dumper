//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL;

@interface SAKSystemProxySettting : NSObject
{
    _Bool _proxyAuthenticated;
    NSString *_proxyHost;
    NSNumber *_proxyPort;
    NSString *_proxyType;
    NSURL *_pacURL;
    NSString *_username;
}

@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) NSURL *pacURL; // @synthesize pacURL=_pacURL;
@property(readonly, nonatomic) _Bool proxyAuthenticated; // @synthesize proxyAuthenticated=_proxyAuthenticated;
@property(readonly, nonatomic) NSString *proxyType; // @synthesize proxyType=_proxyType;
@property(readonly, nonatomic) NSNumber *proxyPort; // @synthesize proxyPort=_proxyPort;
@property(readonly, nonatomic) NSString *proxyHost; // @synthesize proxyHost=_proxyHost;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isPAC;
- (_Bool)needHTTPProxySetting;
- (id)initWithURL:(id)arg1;
- (id)initWithURLString:(id)arg1;
- (id)init;

@end

