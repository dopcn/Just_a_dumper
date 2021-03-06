//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KFViewController.h"

#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class KTVThemeButton, NSString, UIImageView, UIScrollView;

@interface KTVExpressionGuidanceVC : KFViewController <SKStoreProductViewControllerDelegate>
{
    UIScrollView *_scrollView;
    UIImageView *_bannerView;
    UIImageView *_setpView;
    UIImageView *_contentView;
    KTVThemeButton *_actionBtn;
}

@property(retain, nonatomic) KTVThemeButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) UIImageView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *setpView; // @synthesize setpView=_setpView;
@property(retain, nonatomic) UIImageView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (long long)showPlayBarWay;
- (void)didReceiveMemoryWarning;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)actionClick;
- (void)stepView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

