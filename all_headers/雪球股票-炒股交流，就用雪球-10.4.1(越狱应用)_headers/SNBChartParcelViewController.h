//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNBBaseVC.h"

@class NSString, UIView;

@interface SNBChartParcelViewController : SNBBaseVC
{
    _Bool _isNarrowScreen;
    UIView *_contenView;
    long long _period;
    NSString *_symbol;
}

@property(copy, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
@property(nonatomic) long long period; // @synthesize period=_period;
@property(nonatomic) _Bool isNarrowScreen; // @synthesize isNarrowScreen=_isNarrowScreen;
@property(retain, nonatomic) UIView *contenView; // @synthesize contenView=_contenView;
- (void).cxx_destruct;
- (void)updateTheme:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSymbol:(id)arg1 period:(long long)arg2;

@end

