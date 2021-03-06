//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseMarginCell.h"

#import "NVBaseCellProtocol-Protocol.h"

@class NSString, UIColor, UILabel;

@interface GCAmountAndPriceModuleTipCell : GCBaseMarginCell <NVBaseCellProtocol>
{
    NSString *_title;
    NSString *_content;
    UIColor *_colorForTitle;
    UILabel *_labelForTipTitle;
    UILabel *_labelForTipContent;
}

+ (id)cellReuseId:(id)arg1;
+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) UILabel *labelForTipContent; // @synthesize labelForTipContent=_labelForTipContent;
@property(retain, nonatomic) UILabel *labelForTipTitle; // @synthesize labelForTipTitle=_labelForTipTitle;
@property(retain, nonatomic) UIColor *colorForTitle; // @synthesize colorForTitle=_colorForTitle;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

