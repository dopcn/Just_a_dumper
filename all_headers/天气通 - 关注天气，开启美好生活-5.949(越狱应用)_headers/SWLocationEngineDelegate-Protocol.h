//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol SWLocationEngineDelegate <NSObject>
- (void)getlocationfailed:(NSString *)arg1;
- (void)notifyLocationlatitude:(float)arg1 longitude:(float)arg2;

@optional
- (void)locationFromServerFailure:(NSString *)arg1;
- (void)locationFromServerSuccess:(NSString *)arg1 lo:(NSNumber *)arg2 la:(NSNumber *)arg3 poiid:(NSString *)arg4;
- (void)nofityReverseLocationInfo:(NSString *)arg1 sublocation:(NSString *)arg2 detailinfo:(NSString *)arg3;
- (void)reverseLocationfailed:(NSString *)arg1;
- (void)nofityReverseLocationInfo:(NSString *)arg1 sublocation:(NSString *)arg2;
@end

