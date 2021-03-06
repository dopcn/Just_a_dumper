//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QNBPlayerControlViewDelegate-Protocol.h"

@class NSString, QNBHollywoodGiftButton, QNBPlayerIAPButtonInfo;

@protocol QLPlayerFullTopBarViewDelegate <QNBPlayerControlViewDelegate>

@optional
- (void)saveDolbyDefinitionShowCount:(NSString *)arg1;
- (_Bool)canSwitchDolbyDefinition;
- (void)didCompleteGiveVideoMission:(QNBHollywoodGiftButton *)arg1;
- (void)didTicketUseSuccess:(QNBHollywoodGiftButton *)arg1;
- (_Bool)videoCanBePlayedWithGiftButton:(QNBHollywoodGiftButton *)arg1;
- (void)requestHideHlyGiftSharePanel:(QNBHollywoodGiftButton *)arg1;
- (void)requestShowHlyGiftSharePanel:(QNBHollywoodGiftButton *)arg1;
- (void)willHollywoodGiftButtonClick:(QNBHollywoodGiftButton *)arg1;
- (void)didOpenVipButtonClick:(QNBPlayerIAPButtonInfo *)arg1;
- (_Bool)videoCanBePlayed;
- (void)didDolbyButtonClick:(_Bool)arg1;
- (void)didBanabaSettingTipsClick;
- (void)didBanabaButtonClick:(_Bool)arg1;
- (void)didDolbyTipsViewClick;
- (void)didFreeFlowButtonClick;
- (void)didRateTipsViewClick;
- (void)didShareButtonClick;
- (void)didMoreButtonClick;
- (void)didBackButtonClick;
- (void)didRenderButtonClick;
@end

