//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIActivityIndicatorView, UILabel;

@interface VSVideoLoadingView : UIView
{
    NSString *_videoName;
    UIView *_shadowView;
    UILabel *_nameLabel;
    UIActivityIndicatorView *_indicatorView;
    UILabel *_loadingLabel;
}

@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(copy, nonatomic) NSString *videoName; // @synthesize videoName=_videoName;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1;

@end

