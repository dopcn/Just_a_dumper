//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModuleViewModel.h"

@class DEFSelfVerificationInfo;

@interface DEFSelfVerificationDealCountViewModel : GCBaseModuleViewModel
{
    long long _currentCount;
    DEFSelfVerificationInfo *_selfVerificationInfo;
}

@property(retain, nonatomic) DEFSelfVerificationInfo *selfVerificationInfo; // @synthesize selfVerificationInfo=_selfVerificationInfo;
@property(nonatomic) long long currentCount; // @synthesize currentCount=_currentCount;
- (void).cxx_destruct;
- (void)setupViewModel;

@end

