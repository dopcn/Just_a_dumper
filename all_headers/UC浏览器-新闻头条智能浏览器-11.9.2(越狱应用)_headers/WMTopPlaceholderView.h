//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMBaseView.h"

@class WMCellLabel, WMCellSeperateLine, WMHistoryView, WMSpeedReadUserInfoView;

@interface WMTopPlaceholderView : WMBaseView
{
    WMCellLabel *_timestampLabel;
    WMCellSeperateLine *_seperateLine;
    WMHistoryView *_historyView;
    WMSpeedReadUserInfoView *_speedReadUserInfoView;
    CDUnknownBlockType _actionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) WMSpeedReadUserInfoView *speedReadUserInfoView; // @synthesize speedReadUserInfoView=_speedReadUserInfoView;
@property(retain, nonatomic) WMHistoryView *historyView; // @synthesize historyView=_historyView;
@property(retain, nonatomic) WMCellSeperateLine *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(retain, nonatomic) WMCellLabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
- (struct UIEdgeInsets)insetsForSeperateLine;
- (void)didThemeChange:(long long)arg1;
- (void)prepareForReuse;
- (void)configureWithData:(id)arg1;
- (void)didTap;
- (void)addGesture;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 tapActionBlock:(CDUnknownBlockType)arg2;

@end

