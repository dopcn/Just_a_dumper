//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class XSTCupidCard;

@protocol XSTCupidCardDelegate <NSObject>
- (void)pressImageWithCupidCard:(XSTCupidCard *)arg1;
- (void)moveUpWithCupidCard:(XSTCupidCard *)arg1;
- (void)movingWithCupidCard:(XSTCupidCard *)arg1 cx:(double)arg2 cy:(double)arg3 offsetSpeed:(double)arg4;
- (void)moveOutWithCupidCard:(XSTCupidCard *)arg1 isLeft:(_Bool)arg2;
@end

