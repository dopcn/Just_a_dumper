//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ONEPassengerBaseView.h"

@class UIImageView, UILabel;

@interface ONEPassagerBubbleView : ONEPassengerBaseView
{
    unsigned long long _trBubbleTipType;
    UILabel *_textLabel;
    UILabel *_lbSubText;
    UILabel *_lineLabel;
    UILabel *_lbSplitLineVertical;
    UIImageView *_guideImageView;
    UILabel *_guideLabel;
    UIImageView *_imgvArrow;
}

@property(retain, nonatomic) UIImageView *imgvArrow; // @synthesize imgvArrow=_imgvArrow;
@property(retain, nonatomic) UILabel *guideLabel; // @synthesize guideLabel=_guideLabel;
@property(retain, nonatomic) UIImageView *guideImageView; // @synthesize guideImageView=_guideImageView;
@property(retain, nonatomic) UILabel *lbSplitLineVertical; // @synthesize lbSplitLineVertical=_lbSplitLineVertical;
@property(retain, nonatomic) UILabel *lineLabel; // @synthesize lineLabel=_lineLabel;
@property(retain, nonatomic) UILabel *lbSubText; // @synthesize lbSubText=_lbSubText;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic, setter=settrBubbleTipType:) unsigned long long trBubbleTipType; // @synthesize trBubbleTipType=_trBubbleTipType;
- (void).cxx_destruct;
- (void)refreshBubbleViewWithText:(id)arg1 withSubtext:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

