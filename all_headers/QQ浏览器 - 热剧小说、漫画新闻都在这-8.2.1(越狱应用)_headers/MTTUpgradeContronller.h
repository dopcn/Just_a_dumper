//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MttBaseViewController.h"

@class NSString, NSURL, UIScrollView, UIView;

@interface MTTUpgradeContronller : MttBaseViewController
{
    _Bool bIphone5;
    NSString *sReleaseTime;
    NSString *sNewPackageSize;
    NSString *sVersionTitle;
    NSString *sUpdataText;
    NSURL *sUpdataURL;
    UIView *_contentView;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool bIphone5; // @synthesize bIphone5;
@property(retain, nonatomic) NSURL *sUpdataURL; // @synthesize sUpdataURL;
@property(retain, nonatomic) NSString *sUpdataText; // @synthesize sUpdataText;
@property(retain, nonatomic) NSString *sVersionTitle; // @synthesize sVersionTitle;
@property(retain, nonatomic) NSString *sNewPackageSize; // @synthesize sNewPackageSize;
@property(retain, nonatomic) NSString *sReleaseTime; // @synthesize sReleaseTime;
- (void).cxx_destruct;
- (void)loadRightsInfor;
- (void)showContent;
- (void)viewDidLoad;
- (void)doGotoAppStore:(id)arg1;
- (id)initWithMttUpgradeInfo:(id)arg1;
- (id)init;

@end

