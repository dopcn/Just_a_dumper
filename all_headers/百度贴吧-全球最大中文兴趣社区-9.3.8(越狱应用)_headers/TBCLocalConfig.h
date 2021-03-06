//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface TBCLocalConfig : NSObject
{
    _Bool _isClosedHistory;
    _Bool _isClosedThreadRemind;
    _Bool _isLoadRemindSuccess;
    int _vitalityPage;
    NSString *_title;
    NSString *_url;
    NSString *_isShow;
    NSDate *_threadRemindDate;
    double _threadRemindRequestTime;
    NSDate *_threadRemindRequestDate;
}

+ (id)sharedInstance;
@property(nonatomic) int vitalityPage; // @synthesize vitalityPage=_vitalityPage;
@property(retain, nonatomic) NSDate *threadRemindRequestDate; // @synthesize threadRemindRequestDate=_threadRemindRequestDate;
@property(nonatomic) double threadRemindRequestTime; // @synthesize threadRemindRequestTime=_threadRemindRequestTime;
@property(nonatomic) _Bool isLoadRemindSuccess; // @synthesize isLoadRemindSuccess=_isLoadRemindSuccess;
@property(retain, nonatomic) NSDate *threadRemindDate; // @synthesize threadRemindDate=_threadRemindDate;
@property(retain, nonatomic) NSString *isShow; // @synthesize isShow=_isShow;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isClosedThreadRemind; // @synthesize isClosedThreadRemind=_isClosedThreadRemind;
@property(nonatomic) _Bool isClosedHistory; // @synthesize isClosedHistory=_isClosedHistory;
- (_Bool)showOtherAds;
- (_Bool)showHomePageAds;
- (_Bool)showFrsAds;
- (_Bool)showPbAds;
- (_Bool)showBigImageAds;
- (_Bool)getClosedHistory;
- (void)setThreadRemindRequestDateAndSave:(id)arg1;
- (void)setThreadRemindRequestTimeAndSave:(double)arg1;
- (void)setIsLoadRemindSuccessAndSave:(_Bool)arg1;
- (void)setThreadRemindDateAndSave:(id)arg1;
- (void)setThreadRemindInfoAndSave:(id)arg1;
- (void)setIsClosedThreadRemindAndSave:(_Bool)arg1;
- (void)setIsClosedHistoryAndSave:(_Bool)arg1;
- (void)reset;
- (void)accountChangeNotification:(id)arg1;
- (id)getConfigKeyForUser;
- (void)save;
- (void)load;
- (id)init;
- (void)dealloc;

@end

