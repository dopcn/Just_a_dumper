//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface TreasureProgressView : UIView
{
    long long _totalCount;
    long long _currentCount;
    UIView *_progressView;
    UILabel *_currentCountLabel;
    UILabel *_totalCountLabel;
    UILabel *_divisionLabel;
}

@property(retain, nonatomic) UILabel *divisionLabel; // @synthesize divisionLabel=_divisionLabel;
@property(retain, nonatomic) UILabel *totalCountLabel; // @synthesize totalCountLabel=_totalCountLabel;
@property(retain, nonatomic) UILabel *currentCountLabel; // @synthesize currentCountLabel=_currentCountLabel;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) long long currentCount; // @synthesize currentCount=_currentCount;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateProcess;
- (id)initWithFrame:(struct CGRect)arg1;

@end

