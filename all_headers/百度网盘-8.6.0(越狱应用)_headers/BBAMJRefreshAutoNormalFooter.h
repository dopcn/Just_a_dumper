//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BBAMJRefreshAutoStateFooter.h"

@class UIActivityIndicatorView;

@interface BBAMJRefreshAutoNormalFooter : BBAMJRefreshAutoStateFooter
{
    UIActivityIndicatorView *_loadingView;
    long long _activityIndicatorViewStyle;
}

@property(nonatomic) long long activityIndicatorViewStyle; // @synthesize activityIndicatorViewStyle=_activityIndicatorViewStyle;
@property(nonatomic) __weak UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
- (void).cxx_destruct;
- (void)setState:(int)arg1;
- (void)placeSubviews;
- (void)prepare;

@end

