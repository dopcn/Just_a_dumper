//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface AMEbadFPSData : NSObject
{
    NSNumber *_fps;
    NSString *_timeTemp;
}

@property(copy, nonatomic) NSString *timeTemp; // @synthesize timeTemp=_timeTemp;
@property(copy, nonatomic) NSNumber *fps; // @synthesize fps=_fps;
- (void).cxx_destruct;
- (id)toDic;

@end

