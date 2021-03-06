//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTBaseViewController.h"

@class UIImageView, UIScrollView;

@interface MAYUserGuideViewController : MTBaseViewController
{
    UIScrollView *_scrollView;
    UIImageView *_backgroundImageView;
    UIImageView *_characterImageView;
    UIImageView *_stepsImageView;
    CDUnknownBlockType _dismissUserGuide;
}

+ (void)showUserGuide:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType dismissUserGuide; // @synthesize dismissUserGuide=_dismissUserGuide;
@property(retain, nonatomic) UIImageView *stepsImageView; // @synthesize stepsImageView=_stepsImageView;
@property(retain, nonatomic) UIImageView *characterImageView; // @synthesize characterImageView=_characterImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)completeUserGuide;
- (void)viewDidLoad;

@end

