//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YYViewController.h"

@class NSString, UIImageView, UILabel, UIView;

@interface YYVRQRCodeViewController : YYViewController
{
    int _helpType;
    NSString *_address;
    UILabel *_titleLabel;
    UIView *_containView;
    UIImageView *_imageView;
}

@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UIView *containView; // @synthesize containView=_containView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) int helpType; // @synthesize helpType=_helpType;
- (void).cxx_destruct;
- (void)navBackAction:(id)arg1;
- (_Bool)preferredNavigationBarHidden;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;

@end

