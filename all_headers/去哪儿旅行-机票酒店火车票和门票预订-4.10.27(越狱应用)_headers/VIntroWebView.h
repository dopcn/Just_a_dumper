//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIWebView;

@interface VIntroWebView : UIView
{
    NSString *headerTitle;
    _Bool showShrinkAnimate;
    double _vTopGapY;
    double _vBottomGapY;
    NSString *_urlString;
    NSString *_htmlString;
    UIWebView *_webView;
    UIView *_headerView;
    UIView *_bottomView;
    struct CGPoint _animatePoint;
}

@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSString *htmlString; // @synthesize htmlString=_htmlString;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(nonatomic) struct CGPoint animatePoint; // @synthesize animatePoint=_animatePoint;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHeaderTitle:(id)arg1;
- (void)closeMethod:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

