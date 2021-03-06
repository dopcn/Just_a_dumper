//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSString;

@interface MDGroupExtendHelper : NSObject <UIAlertViewDelegate>
{
    NSString *_groupId;
    long long _alertType;
}

@property(nonatomic) long long alertType; // @synthesize alertType=_alertType;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void)goToBuySvipPage;
- (void)setSvipGroupErr:(id)arg1;
- (void)setSvipGroupFailed:(id)arg1;
- (void)setSvipGroupSuccess:(id)arg1;
- (void)setSvipGroup;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showSettingGroupAlertWithMsg:(id)arg1 buttonText:(id)arg2;
- (void)checkSvipErr:(id)arg1;
- (void)checkSvipFailed:(id)arg1;
- (void)checkSvipSuccess:(id)arg1;
- (void)checkSvipGroupWithGroupId:(id)arg1;
- (void)handleUpdteSvipResponse:(id)arg1 groupId:(id)arg2;
- (void)checkSvipGroupWithParams:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

