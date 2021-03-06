//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UITapGestureRecognizer;
@protocol TBCPBChannelLoadMoreViewDelegate;

@interface TBCPBChannelLoadMoreView : UIView
{
    id <TBCPBChannelLoadMoreViewDelegate> _delegate;
    UILabel *_loadMoreView;
    UIImageView *_loadMoreArrow;
    UITapGestureRecognizer *_gesture;
    UIView *_bottomLineView;
}

@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UITapGestureRecognizer *gesture; // @synthesize gesture=_gesture;
@property(retain, nonatomic) UIImageView *loadMoreArrow; // @synthesize loadMoreArrow=_loadMoreArrow;
@property(retain, nonatomic) UILabel *loadMoreView; // @synthesize loadMoreView=_loadMoreView;
@property(nonatomic) __weak id <TBCPBChannelLoadMoreViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadMoreViewTouched;
- (void)setupSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

