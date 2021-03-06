//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface SNBodyLoadingView : UIView
{
    _Bool _loadingAnimationViewIsDisplaying;
    UILabel *_reloadLbl;
    UIButton *_reloadBtn;
    UIImageView *_iconImageView;
    UIActivityIndicatorView *_indicator;
    CDUnknownBlockType _reloadArticle;
}

@property(copy, nonatomic) CDUnknownBlockType reloadArticle; // @synthesize reloadArticle=_reloadArticle;
@property _Bool loadingAnimationViewIsDisplaying; // @synthesize loadingAnimationViewIsDisplaying=_loadingAnimationViewIsDisplaying;
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIButton *reloadBtn; // @synthesize reloadBtn=_reloadBtn;
@property(retain, nonatomic) UILabel *reloadLbl; // @synthesize reloadLbl=_reloadLbl;
- (void).cxx_destruct;
- (void)reloading:(id)arg1;
- (void)showError:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)dealloc;
- (id)init;

@end

