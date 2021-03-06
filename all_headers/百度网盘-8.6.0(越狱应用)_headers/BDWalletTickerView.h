//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor;

@interface BDWalletTickerView : UIView
{
    int _currencyType;
    double _animationDuration;
    double _fontSize;
    UIColor *_textColor;
    NSString *_currentValue;
}

@property(retain, nonatomic) NSString *currentValue; // @synthesize currentValue=_currentValue;
@property(nonatomic) int currencyType; // @synthesize currencyType=_currencyType;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
- (void).cxx_destruct;
- (void)addSymbol:(id)arg1 Origin:(double)arg2 Size:(struct CGSize)arg3;
- (void)initWithValue:(id)arg1;
- (void)changeToNewValue:(id)arg1;
- (void)clearAllValue;
- (void)refreshToValue:(id)arg1;

@end

