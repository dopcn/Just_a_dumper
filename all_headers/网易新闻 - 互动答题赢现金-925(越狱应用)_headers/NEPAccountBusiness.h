//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NEPBusinessProtocol-Protocol.h"

@class NEPAccountInfo, NEPBusinessTaskInfo, NSString;

@interface NEPAccountBusiness : NSObject <NEPBusinessProtocol>
{
    _Bool _hideBonusEntry;
    NEPAccountInfo *_accountInfo;
    NEPBusinessTaskInfo *_taskInfo;
}

+ (id)sharedInstance;
+ (void)load;
@property(retain, nonatomic) NEPBusinessTaskInfo *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(nonatomic) _Bool hideBonusEntry; // @synthesize hideBonusEntry=_hideBonusEntry;
@property(retain, nonatomic) NEPAccountInfo *accountInfo; // @synthesize accountInfo=_accountInfo;
- (void).cxx_destruct;
- (void)dispatchError:(id)arg1 params:(id)arg2;
- (void)cleanUIWithError:(id)arg1;
- (void)closeSDKBusinessWithError:(id)arg1 params:(id)arg2;
- (void)receiveRiskChallengeWithError:(id)arg1 data:(id)arg2;
- (void)startBusinessWithTaskInfo:(id)arg1;
- (void)startBusiness;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

