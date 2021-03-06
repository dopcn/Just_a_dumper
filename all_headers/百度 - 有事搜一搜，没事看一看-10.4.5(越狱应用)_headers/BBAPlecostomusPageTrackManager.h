//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BBAPlecostomusDurationStatistic, BBAPlecostomusPageAdblockCounter, BBAPlecostomusPageBlockedRecord, BBAPlecostomusPageTrackInfo, NSSet, NSString;

@interface BBAPlecostomusPageTrackManager : NSObject
{
    NSString *_currentMainDocURLString;
    NSSet *_topDomains;
    BBAPlecostomusPageTrackInfo *_currentPageTrackInfo;
    BBAPlecostomusPageTrackInfo *_previousPageTrackInfo;
    BBAPlecostomusPageAdblockCounter *_pageAdblockCounter;
    BBAPlecostomusDurationStatistic *_durationStatistic;
    double _lastInjectAdblockJSTS;
    BBAPlecostomusPageBlockedRecord *_pageBlockedRecord;
}

+ (id)sharedInstance;
@property(retain, nonatomic) BBAPlecostomusPageBlockedRecord *pageBlockedRecord; // @synthesize pageBlockedRecord=_pageBlockedRecord;
@property double lastInjectAdblockJSTS; // @synthesize lastInjectAdblockJSTS=_lastInjectAdblockJSTS;
@property(retain, nonatomic) BBAPlecostomusDurationStatistic *durationStatistic; // @synthesize durationStatistic=_durationStatistic;
@property(retain, nonatomic) BBAPlecostomusPageAdblockCounter *pageAdblockCounter; // @synthesize pageAdblockCounter=_pageAdblockCounter;
@property(retain) BBAPlecostomusPageTrackInfo *previousPageTrackInfo; // @synthesize previousPageTrackInfo=_previousPageTrackInfo;
@property(retain) BBAPlecostomusPageTrackInfo *currentPageTrackInfo; // @synthesize currentPageTrackInfo=_currentPageTrackInfo;
@property(retain, nonatomic) NSSet *topDomains; // @synthesize topDomains=_topDomains;
@property(copy) NSString *currentMainDocURLString; // @synthesize currentMainDocURLString=_currentMainDocURLString;
- (void).cxx_destruct;
- (id)getPageBlockedListSimplified:(_Bool)arg1;
- (void)addPageBlockedURLString:(id)arg1;
- (void)updateInjectAdblockJSTS;
- (_Bool)canInjectAdblockJS;
- (void)addDurationRecordByURLString:(id)arg1 type:(long long)arg2 duration:(double)arg3;
- (void)addPageNumberOfBlockedADBy:(long long)arg1;
- (void)webPageDidFinishLoad:(id)arg1 webViewIsLoading:(_Bool)arg2;
- (_Bool)canInjectFengchaoScript;
- (void)cleanPageTrackInfo;
- (id)getMainDomainFromURLString:(id)arg1;
- (_Bool)isCurrentPagePinzhuan;
- (_Bool)isCurrentPageFengchao;
- (void)updatePageTrackInfo:(id)arg1 isReload:(_Bool)arg2;
- (id)init;

@end

