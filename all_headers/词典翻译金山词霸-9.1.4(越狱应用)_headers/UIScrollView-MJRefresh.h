//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSString;

@interface UIScrollView (MJRefresh)
- (void)setThemeForArrowColor:(id)arg1 labelColor:(id)arg2 backColor:(id)arg3;
@property(copy, nonatomic) NSString *headerRefreshingText;
@property(copy, nonatomic) NSString *headerReleaseToRefreshText;
@property(copy, nonatomic) NSString *headerPullToRefreshText;
@property(copy, nonatomic) NSString *footerRefreshingText;
@property(copy, nonatomic) NSString *footerReleaseToRefreshText;
@property(copy, nonatomic) NSString *footerPullToRefreshText;
- (void)addHeaderWithTarget:(id)arg1 action:(SEL)arg2 flag:(_Bool)arg3;
@property(nonatomic, getter=isFooterHidden) _Bool footerHidden;
- (void)footerEndRefreshing;
- (void)footerBeginRefreshing;
- (void)removeFooter;
- (void)addFooterWithTarget:(id)arg1 action:(SEL)arg2;
- (void)addFooterWithCallback:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=isHeaderHidden) _Bool headerHidden;
- (void)headerEndRefreshing;
- (void)headerBeginRefreshing;
- (void)removeHeader;
- (void)addHeaderWithTarget:(id)arg1 action:(SEL)arg2;
- (void)addHeaderWithCallback:(CDUnknownBlockType)arg1;
- (id)footer;
- (void)setFooter:(id)arg1;
- (id)header;
- (void)setHeader:(id)arg1;
@end

