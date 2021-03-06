//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WVWebViewTiming : NSObject
{
    double _startTime;
    long long _webViewCount;
    NSString *_dates;
    double _sumTime;
    long long _startupCount;
}

+ (void)reportWebViewDisappear:(double)arg1;
+ (void)reportWebViewAppear:(double)arg1;
+ (id)sharedInsatance;
@property(nonatomic) long long startupCount; // @synthesize startupCount=_startupCount;
@property(nonatomic) double sumTime; // @synthesize sumTime=_sumTime;
@property(copy, nonatomic) NSString *dates; // @synthesize dates=_dates;
@property(nonatomic) long long webViewCount; // @synthesize webViewCount=_webViewCount;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (void)reportWebViewDisappear:(double)arg1;
- (void)reportWebViewAppear:(double)arg1;
- (void)appEnterBackground:(id)arg1;
- (void)tryUploadTiming;
- (void)appBecomeActive:(id)arg1;
- (void)dealloc;
- (id)init;

@end

