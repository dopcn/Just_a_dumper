//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class BMNaviHorizentalIconButton, BaiDubutton;
@protocol BMSharedBikeUseBikeButtonDelegate;

@interface BMSharedBikeUseBikeButton : UIButton
{
    BaiDubutton *_btUseBikeBk;
    BMNaviHorizentalIconButton *scanInnerBtn;
    int _useType;
    id <BMSharedBikeUseBikeButtonDelegate> _delegate;
}

@property(nonatomic) int useType; // @synthesize useType=_useType;
@property(nonatomic) __weak id <BMSharedBikeUseBikeButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getUseBikeText:(id)arg1;
- (void)setSharedBikeType:(int)arg1;
- (void)useBikeClicked;
- (id)init;

@end

