//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, UIButton, UIImageView, UILabel;

@interface IMYCaptionView : UIView
{
    _Bool _allTapToRetry;
    unsigned long long _state;
    CDUnknownBlockType _retryBlock;
    UIImageView *_backgroundImageView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UIButton *_button;
    NSMutableDictionary *_titleMap;
}

+ (_Bool)removeFromView:(id)arg1;
+ (id)captionFromView:(id)arg1;
+ (id)addToView:(id)arg1 show:(_Bool)arg2;
+ (id)addToView:(id)arg1;
+ (id)alloc;
+ (void)setUserCaptionViewClass:(Class)arg1;
@property(retain, nonatomic) NSMutableDictionary *titleMap; // @synthesize titleMap=_titleMap;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) _Bool allTapToRetry; // @synthesize allTapToRetry=_allTapToRetry;
@property(copy, nonatomic) CDUnknownBlockType retryBlock; // @synthesize retryBlock=_retryBlock;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)setButtonTitle:(id)arg1;
- (void)imy_themeChanged;
- (void)hide;
- (void)show;
- (void)refreshView;
- (void)setImageView:(id)arg1 titleLabel:(id)arg2 state:(unsigned long long)arg3;
- (id)titleForState:(unsigned long long)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setState:(unsigned long long)arg1 andTitle:(id)arg2;
- (void)setTitle:(id)arg1 andState:(unsigned long long)arg2;
- (void)handleTap:(id)arg1;
- (void)_initMyself;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

