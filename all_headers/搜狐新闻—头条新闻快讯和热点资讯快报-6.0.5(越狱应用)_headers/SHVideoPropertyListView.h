//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SHPlayerVideoItem;
@protocol SHVideoPropertyListViewDelegate;

@interface SHVideoPropertyListView : UIView
{
    SHPlayerVideoItem *_videoItem;
    UIView *_contentView;
    long long _selectedVideoPropertyType;
    id <SHVideoPropertyListViewDelegate> _delegate;
}

@property(retain, nonatomic) SHPlayerVideoItem *videoItem; // @synthesize videoItem=_videoItem;
@property(nonatomic) long long selectedVideoPropertyType; // @synthesize selectedVideoPropertyType=_selectedVideoPropertyType;
@property(nonatomic) __weak id <SHVideoPropertyListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didSlectedVideoProperty;
- (void)showPropertyListView:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)attachToView:(id)arg1 anchorView:(id)arg2;
- (void)layoutContentView;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithVideoItem:(id)arg1;
- (void)dealloc;

@end

