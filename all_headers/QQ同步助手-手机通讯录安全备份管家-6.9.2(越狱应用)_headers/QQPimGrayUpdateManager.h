//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, QQPimGrayItemModel;

@interface QQPimGrayUpdateManager : NSObject
{
    _Bool _isTestFlightGoing;
    QQPimGrayItemModel *_updateModel;
    NSString *_updateUrl;
    NSString *_testFlightEmail;
}

+ (id)rangeFeatureWording:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *testFlightEmail; // @synthesize testFlightEmail=_testFlightEmail;
@property(retain, nonatomic) NSString *updateUrl; // @synthesize updateUrl=_updateUrl;
@property(retain, nonatomic) QQPimGrayItemModel *updateModel; // @synthesize updateModel=_updateModel;
@property(nonatomic) _Bool isTestFlightGoing; // @synthesize isTestFlightGoing=_isTestFlightGoing;
- (void).cxx_destruct;
- (void)asyncReport:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)asyncSetEmail:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)asyncGetEmailWithHandler:(CDUnknownBlockType)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(readonly, nonatomic) _Bool isTestFlightOpen;
- (void)setTestFlightEmailAddress:(id)arg1;
- (void)handleTestFlightByModel:(id)arg1;
- (void)handleGrayModel:(id)arg1;
- (void)checkGrayIfNeed;

@end

