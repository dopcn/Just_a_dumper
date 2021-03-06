//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UILabel;

@interface QQPimTableViewLoadingView : UIView
{
    int _statusStyle;
    UIButton *_reloadButton;
    NSString *_loadingTips;
    NSString *_failTips;
    NSString *_emptyTips;
    UIImage *_emptyImage;
    UILabel *_tipsLabel;
    UIActivityIndicatorView *_loadingActivityIndicatorView;
    UIImageView *_emptyImageView;
}

@property(retain, nonatomic) UIImageView *emptyImageView; // @synthesize emptyImageView=_emptyImageView;
@property(retain, nonatomic) UIActivityIndicatorView *loadingActivityIndicatorView; // @synthesize loadingActivityIndicatorView=_loadingActivityIndicatorView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImage *emptyImage; // @synthesize emptyImage=_emptyImage;
@property(copy, nonatomic) NSString *emptyTips; // @synthesize emptyTips=_emptyTips;
@property(copy, nonatomic) NSString *failTips; // @synthesize failTips=_failTips;
@property(copy, nonatomic) NSString *loadingTips; // @synthesize loadingTips=_loadingTips;
@property(retain, nonatomic) UIButton *reloadButton; // @synthesize reloadButton=_reloadButton;
@property(nonatomic) int statusStyle; // @synthesize statusStyle=_statusStyle;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)adjustStatusStyle;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

