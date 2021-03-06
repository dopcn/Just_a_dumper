//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIRefreshControl.h>

@class NSString, UIColor;

@interface RCTRefreshControl : UIRefreshControl
{
    _Bool _isInitialRender;
    _Bool _currentRefreshingState;
    NSString *_title;
    UIColor *_titleColor;
    CDUnknownBlockType _onRefresh;
}

@property(copy, nonatomic) CDUnknownBlockType onRefresh; // @synthesize onRefresh=_onRefresh;
- (void).cxx_destruct;
- (void)refreshControlValueChanged;
- (void)setRefreshing:(_Bool)arg1;
- (void)_updateTitle;
- (void)setTitleColor:(id)arg1;
@property(copy, nonatomic) NSString *title;
- (void)endRefreshing;
- (void)beginRefreshing;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

