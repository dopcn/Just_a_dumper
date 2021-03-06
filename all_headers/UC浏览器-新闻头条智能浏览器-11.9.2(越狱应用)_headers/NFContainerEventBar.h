//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFContainerBaseBar.h"

#import "NFOutEventCenterProtocol-Protocol.h"

@class NSString, UILabel, UIView;

@interface NFContainerEventBar : NFContainerBaseBar <NFOutEventCenterProtocol>
{
    UILabel *_hlContentLabel;
    UILabel *_descLabel;
    UIView *_buttonView;
    UILabel *_buttonTitleLabel;
}

+ (_Bool)ShouldShowBarWithItem:(id)arg1;
@property(retain, nonatomic) UILabel *buttonTitleLabel; // @synthesize buttonTitleLabel=_buttonTitleLabel;
@property(retain, nonatomic) UIView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *hlContentLabel; // @synthesize hlContentLabel=_hlContentLabel;
- (void)layoutSubviews;
- (void)updateStyle;
- (void)reloadDataWithItem:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

