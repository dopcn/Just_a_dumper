//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIScrollView;
@protocol TBRefreshTableHeaderDelegate;

@interface TBRefreshTableHeaderView : NSObject
{
    id <TBRefreshTableHeaderDelegate> _delegate;
    UIScrollView *_scrollView;
}

@property(nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) id <TBRefreshTableHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)tbRefreshScrollViewTriggerRefresh;
- (void)tbRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1 animated:(_Bool)arg2;
- (id)initWithScrollView:(id)arg1;
- (id)initWithTableView:(id)arg1;

@end

