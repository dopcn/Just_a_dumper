//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIButton, UILabel;
@protocol EntrustPriceViewDelegate;

@interface EntrustPriceView : UIView <UIGestureRecognizerDelegate>
{
    UILabel *latestPriceVal;
    UILabel *lastClosePriceVal;
    UILabel *highPriceVal;
    UILabel *lowPriceVal;
    UILabel *limitAmountVal;
    UILabel *hkdRatioVal;
    _Bool _enableLockPrice;
    NSMutableArray *priceLabels;
    NSMutableArray *volumnLabels;
    NSMutableArray *volumnMarks;
    id <EntrustPriceViewDelegate> delegate;
    unsigned long long _currentLockPriceType;
    unsigned long long _entrustPriceViewType;
    NSMutableArray *_priceBgViews;
    NSMutableArray *_priceButtons;
    NSMutableArray *_lockPriceIcons;
    UIView *_lockPriceView;
    UIButton *_lockPriceButton;
    unsigned long long _highLightedLockType;
    NSArray *_nameLabelArray;
    NSArray *_valLabelArray;
}

@property(retain, nonatomic) NSArray *valLabelArray; // @synthesize valLabelArray=_valLabelArray;
@property(retain, nonatomic) NSArray *nameLabelArray; // @synthesize nameLabelArray=_nameLabelArray;
@property(nonatomic) unsigned long long highLightedLockType; // @synthesize highLightedLockType=_highLightedLockType;
@property(retain, nonatomic) UIButton *lockPriceButton; // @synthesize lockPriceButton=_lockPriceButton;
@property(retain, nonatomic) UIView *lockPriceView; // @synthesize lockPriceView=_lockPriceView;
@property(retain, nonatomic) NSMutableArray *lockPriceIcons; // @synthesize lockPriceIcons=_lockPriceIcons;
@property(retain, nonatomic) NSMutableArray *priceButtons; // @synthesize priceButtons=_priceButtons;
@property(retain, nonatomic) NSMutableArray *priceBgViews; // @synthesize priceBgViews=_priceBgViews;
@property(readonly, nonatomic) unsigned long long entrustPriceViewType; // @synthesize entrustPriceViewType=_entrustPriceViewType;
@property(readonly, nonatomic) _Bool enableLockPrice; // @synthesize enableLockPrice=_enableLockPrice;
@property(readonly, nonatomic) unsigned long long currentLockPriceType; // @synthesize currentLockPriceType=_currentLockPriceType;
@property(nonatomic) __weak id <EntrustPriceViewDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSMutableArray *volumnMarks; // @synthesize volumnMarks;
@property(retain, nonatomic) NSMutableArray *volumnLabels; // @synthesize volumnLabels;
@property(retain, nonatomic) NSMutableArray *priceLabels; // @synthesize priceLabels;
- (void).cxx_destruct;
- (int)formatChar:(char *)arg1;
- (id)lockPriceTypeString:(unsigned long long)arg1;
- (void)disableLockPrice;
- (void)enableLockPrice:(id)arg1;
- (void)deSelectLockPriceIconExcept:(id)arg1;
- (void)deSelectPriceBgViewExcept:(id)arg1;
- (void)lockPrice:(id)arg1;
- (void)clickTopPrice:(id)arg1;
- (void)clickValPrice:(id)arg1;
- (void)clickPrice:(id)arg1;
- (id)getPriceColor:(id)arg1 compareWithPrice:(id)arg2;
- (double)getLatestPrice;
- (void)clearView;
- (void)loadHqLastClosePrice:(int)arg1 highPrice:(int)arg2 lowPrice:(int)arg3 digitCount:(int)arg4;
- (void)loadHqNewPrice:(int)arg1 digitCount:(int)arg2;
- (void)loadHqBuySellData:(id)arg1 digitCount:(int)arg2;
- (void)refreshLockPriceAnimation;
- (void)setPriceViewData:(struct _R_11103)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 priceViewType:(unsigned long long)arg2;
- (id)hkStockVol:(id)arg1;
- (void)loadHKStockBuySellData:(id)arg1 digitCount:(int)arg2;
- (void)setLimitAmount:(id)arg1;
- (void)setHKDRatial:(id)arg1;
- (void)setPriceViewHKStock:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

