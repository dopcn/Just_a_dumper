//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IFDataModel.h"

#import "IfengData_RequestListener-Protocol.h"

@class NSString;

@interface IFUserCenterMallManager : IFDataModel <IfengData_RequestListener>
{
    _Bool _isChange;
    _Bool _isFinancialShow;
    _Bool _isShow;
    NSString *_eventID;
    NSString *_eventTitle;
    NSString *_financialUrl;
    NSString *_userCenterFinancialTitle;
    NSString *_activityUrl;
    long long _lastRefrashTimestamp;
}

+ (id)sharedInstance;
@property(nonatomic) long long lastRefrashTimestamp; // @synthesize lastRefrashTimestamp=_lastRefrashTimestamp;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(retain, nonatomic) NSString *activityUrl; // @synthesize activityUrl=_activityUrl;
@property(nonatomic) _Bool isFinancialShow; // @synthesize isFinancialShow=_isFinancialShow;
@property(retain, nonatomic) NSString *userCenterFinancialTitle; // @synthesize userCenterFinancialTitle=_userCenterFinancialTitle;
@property(retain, nonatomic) NSString *financialUrl; // @synthesize financialUrl=_financialUrl;
@property(nonatomic) _Bool isChange; // @synthesize isChange=_isChange;
@property(retain, nonatomic) NSString *eventTitle; // @synthesize eventTitle=_eventTitle;
@property(retain, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
- (void).cxx_destruct;
- (void)requestData;
- (void)requestActivityData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

