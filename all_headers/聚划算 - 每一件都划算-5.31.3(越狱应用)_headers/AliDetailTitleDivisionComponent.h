//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponent.h"

@class AliDetailComponentModel, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface AliDetailTitleDivisionComponent : AliDetailComponent
{
    UIView *_leftLine;
    UILabel *_titleLabel;
    UILabel *_lblLinkText;
    UILabel *_rigthIcon;
    UIImageView *_logoImg;
    AliDetailComponentModel *_divisionModel;
    UITapGestureRecognizer *_tapGesture;
}

+ (struct CGSize)componentSize;
+ (struct CGSize)getComponentSize:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) __weak AliDetailComponentModel *divisionModel; // @synthesize divisionModel=_divisionModel;
@property(retain, nonatomic) UIImageView *logoImg; // @synthesize logoImg=_logoImg;
@property(retain, nonatomic) UILabel *rigthIcon; // @synthesize rigthIcon=_rigthIcon;
@property(retain, nonatomic) UILabel *lblLinkText; // @synthesize lblLinkText=_lblLinkText;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
- (void).cxx_destruct;
- (void)openURL:(id)arg1;
- (void)showLeftLine:(_Bool)arg1;
- (void)showLogo:(id)arg1;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;
- (void)setupComponentSize:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

