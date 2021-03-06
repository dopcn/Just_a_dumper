//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, UIButton, UIImageView, UIView;

@interface NLDashboardCollectionViewCell : UICollectionViewCell
{
    UIView *_verticalLineView;
    UIView *_horizenalLineView;
    long long _style;
    UIButton *_button;
    UIButton *_hideButton;
    UIImageView *_theNewMarkImageView;
    UIImageView *_iconImageVIew;
    CALayer *_dimmedLayer;
}

+ (struct CGSize)getItemSize:(id)arg1;
+ (long long)getCellItemCount:(long long)arg1 width:(double)arg2;
+ (id)defaultBackgroundImage;
@property(retain, nonatomic) CALayer *dimmedLayer; // @synthesize dimmedLayer=_dimmedLayer;
@property(retain, nonatomic) UIImageView *iconImageVIew; // @synthesize iconImageVIew=_iconImageVIew;
@property(retain, nonatomic) UIImageView *theNewMarkImageView; // @synthesize theNewMarkImageView=_theNewMarkImageView;
@property(retain, nonatomic) UIButton *hideButton; // @synthesize hideButton=_hideButton;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)setShowNewMark:(_Bool)arg1;
- (void)setHideActionBlock:(CDUnknownBlockType)arg1;
- (void)setActionBlock:(CDUnknownBlockType)arg1;
- (void)prepareForReuse;
- (void)setMyHomeWithProfileImageURL:(id)arg1 name:(id)arg2;
- (void)setupUser:(id)arg1;
- (void)setupGroup:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTitle:(id)arg1 imageForMID:(id)arg2 defaultImage:(id)arg3;

@end

