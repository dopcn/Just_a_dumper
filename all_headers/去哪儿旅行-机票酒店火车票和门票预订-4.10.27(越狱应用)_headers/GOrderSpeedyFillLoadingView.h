//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface GOrderSpeedyFillLoadingView : UIView
{
    CDUnknownBlockType pCallBack;
    UIView *_loadingView;
    UIView *_buttonView;
}

@property(readonly, nonatomic) UIView *buttonView; // @synthesize buttonView=_buttonView;
@property(readonly, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
- (void).cxx_destruct;
- (void)setCallBack:(CDUnknownBlockType)arg1;
- (void)showRetryView;
- (void)showLoadingView;
- (void)buttonTapHandler:(id)arg1;
- (void)createButtonView;
- (void)createLoadingView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

