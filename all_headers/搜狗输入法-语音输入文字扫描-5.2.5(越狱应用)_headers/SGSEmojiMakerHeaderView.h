//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, SGSEmojiMakerActivityView, UIButton, UIImageView, UILabel, YYAnimatedImageView;
@protocol SGSEmojiMakeHeaderwDelegate;

@interface SGSEmojiMakerHeaderView : UIView
{
    YYAnimatedImageView *_emojiImageView;
    UIImageView *_backImageView;
    UILabel *_tipLabel;
    UIView *_bgView;
    UIButton *_emojiMakeButton;
    UIView *_topLineView;
    UIView *_bottomLineView;
    UILabel *_recommendLabel;
    SGSEmojiMakerActivityView *_activityView;
    UIImageView *_activityImageView;
    UILabel *_activityLabel;
    UIImageView *_arrowImageView;
    UIView *_activityLineView;
    _Bool _emojiViewAnimatedShow;
    _Bool _emojiViewIsSet;
    _Bool _isActivityViewShow;
    _Bool _isanimation;
    id <SGSEmojiMakeHeaderwDelegate> _delegate;
    NSDictionary *_activityDict;
    double _offsetY;
    double _halfSumOffsetY;
}

@property(nonatomic) double halfSumOffsetY; // @synthesize halfSumOffsetY=_halfSumOffsetY;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(retain, nonatomic) NSDictionary *activityDict; // @synthesize activityDict=_activityDict;
@property(nonatomic) _Bool isanimation; // @synthesize isanimation=_isanimation;
@property(nonatomic) _Bool isActivityViewShow; // @synthesize isActivityViewShow=_isActivityViewShow;
@property(nonatomic) __weak id <SGSEmojiMakeHeaderwDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionActivityClicked:(id)arg1;
- (void)actionEmojiMake:(id)arg1;
- (void)changeFrame;
- (void)layoutSubviews;
- (double)getGifTimeInterval:(id)arg1;
- (void)setEmojiViewImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

