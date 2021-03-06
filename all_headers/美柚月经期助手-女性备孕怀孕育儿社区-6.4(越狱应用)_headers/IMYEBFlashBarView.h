//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface IMYEBFlashBarView : UIView
{
    UIView *_backgroundView;
    UILabel *_backgroundOrderLabel;
    UIView *_fontView;
    UILabel *_fontOrderLabel;
    UILabel *_lastPercentLabel;
    UILabel *_almostSellOutLabel;
}

@property(retain, nonatomic) UILabel *almostSellOutLabel; // @synthesize almostSellOutLabel=_almostSellOutLabel;
@property(retain, nonatomic) UILabel *lastPercentLabel; // @synthesize lastPercentLabel=_lastPercentLabel;
@property(retain, nonatomic) UILabel *fontOrderLabel; // @synthesize fontOrderLabel=_fontOrderLabel;
@property(retain, nonatomic) UIView *fontView; // @synthesize fontView=_fontView;
@property(retain, nonatomic) UILabel *backgroundOrderLabel; // @synthesize backgroundOrderLabel=_backgroundOrderLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)setupViewWithTotalNum:(long long)arg1 orderNum:(long long)arg2;
- (id)initWithTotalNum:(long long)arg1 orderNum:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

