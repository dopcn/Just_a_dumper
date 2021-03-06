//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CouponViewModel, JDCoreCouponFaceView, JDCoreCouponTimeLabel, JDImageView, UIImageView, UILabel;

@interface CouponViewTableViewCell : UITableViewCell
{
    CouponViewModel *_model;
    JDCoreCouponFaceView *_leftView;
    UILabel *_titleLabel;
    UIImageView *_titleIcon;
    JDCoreCouponTimeLabel *_validPeriod;
    JDImageView *_doneImageView;
    UILabel *_receiveLabel;
}

@property(retain, nonatomic) UILabel *receiveLabel; // @synthesize receiveLabel=_receiveLabel;
@property(retain, nonatomic) JDImageView *doneImageView; // @synthesize doneImageView=_doneImageView;
@property(retain, nonatomic) JDCoreCouponTimeLabel *validPeriod; // @synthesize validPeriod=_validPeriod;
@property(retain, nonatomic) UIImageView *titleIcon; // @synthesize titleIcon=_titleIcon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JDCoreCouponFaceView *leftView; // @synthesize leftView=_leftView;
@property(retain, nonatomic) CouponViewModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)renderUIWithModel:(id)arg1;
- (void)resetStates;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

