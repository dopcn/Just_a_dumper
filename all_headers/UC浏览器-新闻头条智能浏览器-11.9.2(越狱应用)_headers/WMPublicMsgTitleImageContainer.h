//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMPublicMsgImageBaseContainer.h"

@class WMCellLabel, WMTimeView;

@interface WMPublicMsgTitleImageContainer : WMPublicMsgImageBaseContainer
{
    WMCellLabel *_cellTitleLabel;
    WMTimeView *_cellTimeView;
}

@property(retain, nonatomic) WMTimeView *cellTimeView; // @synthesize cellTimeView=_cellTimeView;
@property(retain, nonatomic) WMCellLabel *cellTitleLabel; // @synthesize cellTitleLabel=_cellTitleLabel;
- (void)setIsHiddenTime:(_Bool)arg1;
- (id)bottomSeperateLine;
- (id)topSeperateLine;
- (void)prepareForReuse;
- (void)configureWithData:(id)arg1;
- (_Bool)didThemeChange:(long long)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithLayoutAttributeType:(unsigned long long)arg1 delegate:(id)arg2;

@end

