//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AdReportURLCache : NSObject
{
    _Bool _report;
}

+ (id)urlRewrite:(id)arg1;
+ (id)readAdReportURLSFromCache;
+ (void)cacheAdReportURLS:(id)arg1;
+ (void)adCallBackWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool report; // @synthesize report=_report;
- (void)startReportCachedURL;
- (void)cleanCache;
- (void)addURL:(id)arg1;

@end

