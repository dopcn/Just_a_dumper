//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NFGirlsVideoModel;

@protocol NFGirlsVideoModelDelegate <NSObject>
- (void)girlsVideoModel:(NFGirlsVideoModel *)arg1 didLoadDataFailedWithErrorType:(long long)arg2;
- (void)girlsVideoModelDidLoadedDataSucceed:(NFGirlsVideoModel *)arg1 appendedCount:(long long)arg2;
- (void)girlsVideoModelDidStartLoadData:(NFGirlsVideoModel *)arg1;
@end

