//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SNHWGRecommandView, UIButton;

@protocol SNHWGRecommandViewDelegate <NSObject>

@optional
- (void)recommandView:(SNHWGRecommandView *)arg1 loadMoreDataWithPage:(unsigned long long)arg2 PageSize:(unsigned long long)arg3;
- (void)recommandView:(SNHWGRecommandView *)arg1 failedToRetry:(UIButton *)arg2;
- (void)recommandViewRefresh:(SNHWGRecommandView *)arg1;
@end

