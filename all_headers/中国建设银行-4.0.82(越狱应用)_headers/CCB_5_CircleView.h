//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBView.h"

@class CCBLabel;

@interface CCB_5_CircleView : CCBView
{
    _Bool _isDoubleCurrency;
    CCBView *_detailView;
    CCBLabel *_titleLabel;
    CCBLabel *_rmbLabel;
    CCBLabel *_foreignCurrencyLabel;
    CCBLabel *_cardLabel;
    double _ratio;
}

@property(nonatomic) _Bool isDoubleCurrency; // @synthesize isDoubleCurrency=_isDoubleCurrency;
@property(nonatomic) double ratio; // @synthesize ratio=_ratio;
@property(retain, nonatomic) CCBLabel *cardLabel; // @synthesize cardLabel=_cardLabel;
@property(retain, nonatomic) CCBLabel *foreignCurrencyLabel; // @synthesize foreignCurrencyLabel=_foreignCurrencyLabel;
@property(retain, nonatomic) CCBLabel *rmbLabel; // @synthesize rmbLabel=_rmbLabel;
@property(retain, nonatomic) CCBLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CCBView *detailView; // @synthesize detailView=_detailView;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

