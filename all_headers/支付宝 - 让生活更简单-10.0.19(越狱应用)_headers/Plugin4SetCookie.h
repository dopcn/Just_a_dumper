//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PluginBase.h"

@class NSString;

@interface Plugin4SetCookie : PluginBase
{
    _Bool _ZMXYCookieSetted;
    NSString *_oldCookieValue;
}

@property(nonatomic) _Bool ZMXYCookieSetted; // @synthesize ZMXYCookieSetted=_ZMXYCookieSetted;
@property(retain, nonatomic) NSString *oldCookieValue; // @synthesize oldCookieValue=_oldCookieValue;
- (void).cxx_destruct;
- (void)handleEvent:(id)arg1;
- (void)notifiCall:(id)arg1;
- (void)dealloc;
- (id)init;

@end

