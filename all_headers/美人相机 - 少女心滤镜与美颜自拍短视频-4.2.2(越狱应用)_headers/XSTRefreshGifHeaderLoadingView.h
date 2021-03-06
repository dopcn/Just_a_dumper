//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIImageView;

@interface XSTRefreshGifHeaderLoadingView : UIView
{
    _Bool _isLoading;
    UIImageView *_activityView;
    NSMutableArray *_imagePathArr;
    NSString *_imagePathName;
    UIView *_maskedView;
    UIImageView *_backgroudView;
    UIImageView *_imageView;
    unsigned long long _color;
}

@property(nonatomic) unsigned long long color; // @synthesize color=_color;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *backgroudView; // @synthesize backgroudView=_backgroudView;
@property(retain, nonatomic) UIView *maskedView; // @synthesize maskedView=_maskedView;
@property(retain, nonatomic) NSString *imagePathName; // @synthesize imagePathName=_imagePathName;
@property(retain, nonatomic) NSMutableArray *imagePathArr; // @synthesize imagePathArr=_imagePathArr;
@property(retain, nonatomic) UIImageView *activityView; // @synthesize activityView=_activityView;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void).cxx_destruct;
- (void)themeSkinManagerNotificationThemeSkinChanged:(id)arg1;
- (void)stopAnimating;
- (void)startAnimating;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 color:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

