//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;
@protocol AdMoGoFullScreenTimeViewDelegate;

@interface AdMoGoFullScreenTimeView : UIView
{
    int showTime;
    _Bool isStop;
    UIView *parentView;
    UILabel *timeLable;
    id ownerRef;
    _Bool removeWhenStop;
    id <AdMoGoFullScreenTimeViewDelegate> delegate;
}

+ (int)getUniquenessTag;
@property(nonatomic) _Bool removeWhenStop; // @synthesize removeWhenStop;
@property(nonatomic) id <AdMoGoFullScreenTimeViewDelegate> delegate; // @synthesize delegate;
- (void)fireTimeOver;
- (struct CGSize)sizeWithTimeStr:(id)arg1;
- (void)resetLabel;
- (void)overrideRemoveFromSuperview;
- (void)removeFromSuperview;
- (void)cancelPreviousPerform;
- (void)stopCount;
- (void)startCount;
- (void)initView;
- (id)initTime:(int)arg1 parentView:(id)arg2 ownerRef:(id)arg3;
- (void)dealloc;

@end

