//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RACDisposable;

@interface NVSchemeTestClient : NSObject
{
    RACDisposable *_disposable;
}

+ (id)shareClient;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
- (void).cxx_destruct;
- (id)fetchCommand;
- (void)cancel;
- (void)start;
- (void)handleCommand:(id)arg1;
- (void)dptest_clean_cache;
- (void)dptest_kill;
- (void)dptest_delogin;
- (void)dptest_login;
- (id)filePathForKey:(id)arg1;
- (void)updateOnClassInjection;
- (id)commandServicePath;

@end

