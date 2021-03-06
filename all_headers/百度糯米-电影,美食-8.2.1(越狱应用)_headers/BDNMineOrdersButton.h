//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel;

@interface BDNMineOrdersButton : UIButton
{
    UILabel *_detailLabel;
    long long _type;
    UIImageView *_theNewTipImageView;
    UIImageView *_redPointImageView;
    UILabel *_numberLabel;
}

@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UIImageView *redPointImageView; // @synthesize redPointImageView=_redPointImageView;
@property(retain, nonatomic) UIImageView *theNewTipImageView; // @synthesize theNewTipImageView=_theNewTipImageView;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)hideRedPoint;
- (void)showRedPoint;
- (void)hideNewTip;
- (void)showNewTip;
- (void)reset;
- (void)setNumberText:(id)arg1;
- (id)initMineOrdersButtonWithFrame:(struct CGRect)arg1 type:(long long)arg2;

@end

