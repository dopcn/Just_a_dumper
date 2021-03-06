//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBTableViewCell.h"

#import "CCB_7_ForeignExchangeTabScrollViewDelegate-Protocol.h"

@class CCBLabel, CCBView, CCB_7_ForeignExchangeMyForeignItem, CCB_7_ForeignExchangeTabScrollView, NSString;

@interface CCB_7_ForeignExchangeMyForeignCell : CCBTableViewCell <CCB_7_ForeignExchangeTabScrollViewDelegate>
{
    CCB_7_ForeignExchangeTabScrollView *_productTypeScrollView;
    CCBView *_headTitleView;
    CCBLabel *_titleLabel;
    CCB_7_ForeignExchangeMyForeignItem *_myItem;
    CCBLabel *_foreignLabel;
    CCBView *_rightMaskView;
    CCBView *_lelfMaskView;
}

+ (double)cellHight;
@property(retain, nonatomic) CCBView *lelfMaskView; // @synthesize lelfMaskView=_lelfMaskView;
@property(retain, nonatomic) CCBView *rightMaskView; // @synthesize rightMaskView=_rightMaskView;
@property(retain, nonatomic) CCBLabel *foreignLabel; // @synthesize foreignLabel=_foreignLabel;
@property(retain, nonatomic) CCB_7_ForeignExchangeMyForeignItem *myItem; // @synthesize myItem=_myItem;
@property(retain, nonatomic) CCBLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CCBView *headTitleView; // @synthesize headTitleView=_headTitleView;
@property(retain, nonatomic) CCB_7_ForeignExchangeTabScrollView *productTypeScrollView; // @synthesize productTypeScrollView=_productTypeScrollView;
- (void).cxx_destruct;
- (void)foreignExchangeTabScrollView:(id)arg1 didClickButton:(id)arg2;
- (void)setForeignItemData:(id)arg1;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

