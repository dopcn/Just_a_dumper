//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BNaviGridMapDataProvider : NSObject
{
    struct CNaviGridMapDataIF *_naviGridMapDataSource;
}

+ (void)setExpandRoadStatus:(_Bool)arg1;
+ (void)releaseInstance;
+ (id)getInstance;
- (id)getEnlargeImages:(const char *)arg1 roadIcon:(const char *)arg2;
- (void)dealloc;
- (id)init;

@end

