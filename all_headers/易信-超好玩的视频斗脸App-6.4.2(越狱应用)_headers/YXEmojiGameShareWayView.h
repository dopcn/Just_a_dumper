//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol YXEmojiGameShareWayViewDelegate;

@interface YXEmojiGameShareWayView : UIView
{
    id <YXEmojiGameShareWayViewDelegate> _delegate;
    UIView *_lineTipView;
    UIView *_shareView;
}

@property(retain, nonatomic) UIView *shareView; // @synthesize shareView=_shareView;
@property(retain, nonatomic) UIView *lineTipView; // @synthesize lineTipView=_lineTipView;
@property(retain, nonatomic) id <YXEmojiGameShareWayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shareWayAction:(id)arg1;
- (void)initShareWayView;
- (id)shareWayImageList;
- (id)shareWayList;
- (id)initWithFrame:(struct CGRect)arg1;

@end

