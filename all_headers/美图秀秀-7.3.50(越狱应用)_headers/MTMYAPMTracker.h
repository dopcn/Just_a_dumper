//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTAPM;

@interface MTMYAPMTracker : NSObject
{
    _Bool _disableAPMReport;
    _Bool _cellularReport;
    MTAPM *_apm;
}

+ (id)sharedInstance;
@property(retain, nonatomic) MTAPM *apm; // @synthesize apm=_apm;
@property(nonatomic) _Bool cellularReport; // @synthesize cellularReport=_cellularReport;
@property(nonatomic) _Bool disableAPMReport; // @synthesize disableAPMReport=_disableAPMReport;
- (void).cxx_destruct;
- (_Bool)shouldReportAPMWithURL:(id)arg1;
- (void)reportHTTPOverTimeWithDuration:(long long)arg1 request:(id)arg2 response:(id)arg3 body:(id)arg4;
- (void)reportHTTPExceptionWithRequest:(id)arg1 response:(id)arg2 body:(id)arg3 duration:(long long)arg4;
- (id)commonDic;
- (void)uploadLogType:(int)arg1 dictionary:(id)arg2 filePaths:(id)arg3;
- (void)uploadDictionary:(id)arg1;
- (id)initPrivate;

@end

