//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SPActivityIndicatorView, UILabel;

@interface QYActivityIndicatorView_Pad : UIView
{
    SPActivityIndicatorView *loadingIndicator;
    UILabel *titleLable;
}

@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable;
@property(retain, nonatomic) SPActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setTitle:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)setIsForVIP:(_Bool)arg1;
- (void)setActivityIndicatorViewStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

