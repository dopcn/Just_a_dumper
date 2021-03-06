//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NFPersonalFigureAvatarBackgroundView, NSMutableArray, UIImageView, UILabel;
@protocol NFPersonalFigureAvatarViewDataSource;

@interface NFPersonalFigureAvatarView : UIView
{
    _Bool _isAnimationFinish;
    id <NFPersonalFigureAvatarViewDataSource> _delegate;
    UILabel *_titleLabel;
    UILabel *_subTitle;
    UIView *_leftLine;
    UIView *_rightLine;
    NFPersonalFigureAvatarBackgroundView *_avatarView;
    NSMutableArray *_avatarComponents;
    UILabel *_titleLabelNew;
    UILabel *_subTitleNew;
    UIImageView *_uc11;
}

@property(nonatomic) _Bool isAnimationFinish; // @synthesize isAnimationFinish=_isAnimationFinish;
@property(retain, nonatomic) UIImageView *uc11; // @synthesize uc11=_uc11;
@property(retain, nonatomic) UILabel *subTitleNew; // @synthesize subTitleNew=_subTitleNew;
@property(retain, nonatomic) UILabel *titleLabelNew; // @synthesize titleLabelNew=_titleLabelNew;
@property(retain, nonatomic) NSMutableArray *avatarComponents; // @synthesize avatarComponents=_avatarComponents;
@property(retain, nonatomic) NFPersonalFigureAvatarBackgroundView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
@property(retain, nonatomic) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) id <NFPersonalFigureAvatarViewDataSource> delegate; // @synthesize delegate=_delegate;
- (void)didSelectItemAtId:(long long)arg1 Selected:(_Bool)arg2;
- (struct CGPoint)componentPos:(long long)arg1 withLayoutRect:(struct CGRect)arg2 andImageView:(id)arg3;
- (void)buildComponentsView;
- (void)layoutSubviews;
- (void)titleShowAnimation;
- (void)newTitleDismissAnimation;
- (void)moveUpAnimation;
- (void)removeComponentsWithAnimation;
- (void)showAnimation;
- (void)setupViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end

